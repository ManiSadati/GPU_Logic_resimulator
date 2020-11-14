/*
 * Copyright (c) 2020, ManiSadati, MohammadShahidzade All rights reserved.
 *
 * https://github.com/ManiSadati/GPU_Logic_resimulator/blob/master/LICENSE
 *
 */


#include<bits/stdc++.h>
using namespace std;

#include "../vlib/type1parser.h"
#include "../vlib/type1component.h"
#include "../vlib/libraryparser.h"
#include "../graph/netlist.h"
#include "../sdf/sdfparser.h"
#include "../vcd_translator/vcdparser.h"
#include "../object.h"
#include "../vlib2/vlib_files/lib.h"
#include "../vlib2/vlib_files/vlib.h"
#include "../vlib/portparser.h"
#include "vcdoutput.h"
#include "../vlib_gpu/vlib_gpu.h"
#include "../gpu-sim/gsimulator.h"
#include "saif.h"

#define debug 0

vector<pair<int, string> > sim_gv_assigns;

extern vector< Signal > tmp_vcd_signals;


extern vector<Signal> signal_vector;

extern vector<Gate> component_vector;

extern unordered_map<string, int> mpsignal, mpcomp;

extern vector<vector<int> > height;

extern vector<Gate> delays_vec;

extern unordered_map<string, int> vlib_names ;

extern vector<unordered_map<string, string> > vlib_signals;

extern vector<unordered_map<string, int> >vlib_ports ;

extern vector<unordered_map<int ,string> >vlib_ports_revers ;

extern unordered_map<int, int> vlib_size, vlib_lin, vlib_lout;

extern unordered_map<string, bool> vlibsequential;

extern map<string,int> t_mp;

extern unordered_map <int, bool> signal_mark;


long long int MX = 20000;
long long int MN = 0;

long long int total_time;
long long int comptime, comptime3, comptime4;
long long int comptime2;
long long int total_single;
long long int anst;



void insert_edge(int ind, long long int time, VAL value, bool init = false){
	Signal& signall = signal_vector[ind];
	int cnt = signall.vaweform.size();
	//cout<<"insert in signall : "<<signall.name<<" "<<time<<" "<<value<<endl;
	while(cnt && signall.vaweform[cnt-1].time >= time){
		//cout<<"removing "<<signall.vaweform[cnt - 1].time<<" "<<signall.vaweform[cnt - 1].value<<endl;
		cnt--;
		signall.vaweform.pop_back();
	}
	if(cnt && signall.vaweform[cnt-1].value == value){
		return;
	}
	Event ev(time, value);
	signall.vaweform.push_back(ev);

}

void output(){ //////////////////////////?????????????????????
	for(int i = 0 ; i < signal_vector.size(); i++){
		Signal& signall = signal_vector[i];
		//if(signall.name != "ti[0]" && signall.name != "ti[1]" && signall.name != "ti[2]" && signall.name != "to[1]" ) continue;
		cout<<signall.name<<"------------"<<endl;
		for(int j = 0; j < signall.vaweform.size(); j++){
			cout<<signall.vaweform[j].time<<" "<<signall.vaweform[j].value<<endl;
		}
	}
}

void log(VAL* var, int cell_id){
	cout<<"VARS : ";
	for(int i = 0 ; i < vlib_size[cell_id]; i++){
		cout<<vlib_ports_revers[cell_id][i]<<" -> "<<var[i]<<"  ";
	}
	cout<<endl;
}


void initialization(){
	sim_gv_assigns = gvget_assigns();

	for(int i = 0 ; i < sim_gv_assigns.size(); i++){//transfering gv assigns to simulation
		int x = sim_gv_assigns[i].first;
		string y = sim_gv_assigns[i].second;
		string z = y.substr(y.size() - 1, 1);
		Event ev(0, toval(z));
		signal_vector[x].vaweform.push_back(ev);
	}

	for(int i = 0 ; i < signal_vector.size(); i++){//initializing non input signal vaweforms
		Signal& signall = signal_vector[i];
		if(signall.vaweform.size() == 0 && signal_mark[mpsignal[signall.name]] == true){
			Event ev(0, X);
			signal_vector[i].vaweform.push_back(ev);
		}
	}
	for(int i = 0 ; i < delays_vec.size(); i++){ //transfering information from sdf to simulation
		Gate& gatee = delays_vec[i];
		int comp_ind = mpcomp[gatee.name];
		Gate& compo = component_vector[comp_ind];
		int cell_id = vlib_names[compo.type];
		//cout<<compo.name<<" _ "<<compo.type<<" _ "<<gatee.dl.size()<<endl;
		if(compo.name != gatee.name){
			//cout<<"IMPOSSIBLE "<<gatee.name<<endl;
		}
		else{
			for(int j = 0 ; j < gatee.dl.size(); j++){
				delay d = gatee.dl[j];
				delay2 d2;
				d2.in = vlib_ports[cell_id][d.in];
				d2.out = vlib_ports[cell_id][d.out];
				d2.edge = 0;
				if(d.edge =="pos"){
					d2.edge = 1;
				}
				if(d.edge =="neg"){
					d2.edge = 2;
				}
				d2.ris = d.ris;
				d2.fal = d.fal;
				compo.dl2.push_back(d2);
			}
		}
	}
	//cout<<"E"<<endl;
}


void single_gate_initialization(int comp_ind){
	Gate& compo = component_vector[comp_ind];
	int cell_id = vlib_names[compo.type];
	compo.id = cell_id;
	compo.size = vlib_size[cell_id];
	compo.l_in = vlib_lin[cell_id];
	compo.l_out = vlib_lout[cell_id];
	//cout<<t_mp[compo.type]<<endl;
	compo.table_id = t_mp[compo.type];


}

void gates_initialization(){
	for(int i = 0;i < height.size(); i++){
		for(int j = 0 ; j < height[i].size(); j++){
			int comp_ind = height[i][j];
			single_gate_initialization(comp_ind);
		}
	}
}

void vcd_init(){

	for(int i = 0 ; i < tmp_vcd_signals.size(); i++){//transfering vcd input vaweforms to simulation signals
		string name = tmp_vcd_signals[i].name;
		int ind = mpsignal[name];
		Signal& signal_tmp = tmp_vcd_signals[i];
		Signal& signall = signal_vector[ind];
		for(int j = 0; j < signal_tmp.vaweform.size(); j++){
			Event& ev = signal_tmp.vaweform[j];
			insert_edge(ind, ev.time , ev.value, true);
		}
		//cout<<signal_vector[ind].name<<" "<<signal_vector[ind].vaweform.size()<<endl;
	}
}


long long int number_of_events;

long long int ans_max_time = 0;


int main(int argc, char *argv[]){
	std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	MX = stoll(argv[5]);
	MN=stoll(argv[4]);
	cout<<"phase1"<<endl;
	component_preprocess("../GENERIC_STD_CELL.vlib", "../vlib/primitive.vlib");
	cout<<"phase2"<<endl;
	process_port_parser("../vlib/pars2.txt");
	cout<<"phase3"<<endl;
	process_netlist(argv[1]);
	cout<<"phase4"<<endl;
	sdf_process(argv[3]);
	cout<<"phase5"<<endl;
	initialization();
	vlibg_process();
	gates_initialization();
	cout<<"phase6"<<endl;
	auto t1 = std::chrono::high_resolution_clock::now();
	vcd_process(argv[2]);
	auto t2 = std::chrono::high_resolution_clock::now();
	auto duration4 = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
	vcd_init();
	auto t3 = std::chrono::high_resolution_clock::now();
	auto duration3 = std::chrono::duration_cast<std::chrono::microseconds>( t3 - t2 ).count();
  	cout<<"Durations : "<<duration4<<" "<<duration3<<endl;

	auto t1phase7 = std::chrono::high_resolution_clock::now();
	cout<<"phase7"<<endl;
	//output();
	//total_simulation();
	gpusimultaion();

	cout<<"phase8"<<endl;
	auto t2phase7 = std::chrono::high_resolution_clock::now();
	auto duration7 = std::chrono::duration_cast<std::chrono::microseconds>( t2phase7 - t1phase7 ).count();
	//output();
	cout<<"SIMUALTION DONE \n\\0\\\n/-/\n\\ \\"<<endl<<ans_max_time<<endl;
	cout<<"TOTAL TIME : "<<duration7<<endl;
	cout<<total_time<<" "<<total_single<<" "<<endl;
	cout<<"phase9"<<endl;
	//output_process();
	cout<<"phase10"<<endl;
	saif_process(MN,MX);
}
