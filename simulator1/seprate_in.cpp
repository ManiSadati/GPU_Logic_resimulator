/*
 * Copyright (c) 2020, ManiSadati, MohammadShahidzade All rights reserved.
 *
 * https://github.com/ManiSadati/GPU_Logic_resimulator/blob/master/LICENSE
 *
 */


#include<bits/stdc++.h>
#include "../object.h"
#include "../gpu-sim/gsimulator.h"
#include "../gpu-sim/gsimulator1.h"
#include "saif.h"
#include "../vlib2/vlib_files/lib.h"
#include "../vcd_translator/vcdparser.h"

using namespace std;

vector<int8_t> t_ans;
vector<int8_t> t_edge;
map<string,int> t_mp;
vector<vector<int> > height;
vector<vector<int> > dealloc_signal;
vector<Gate> component_vector;//
vector<Signal> signal_vector;//
unordered_map<string, int> mpsignal;//
unordered_map <int, bool> signal_mark;


const int threads_num=16;
extern vector< Signal > tmp_vcd_signals[threads_num];

FILE *f;

long long int MX = 20000;
long long int MN = 0;

void all(){
    int t_ans_size=0;
    fscanf(f,"%d",&t_ans_size);
    t_ans.reserve(t_ans_size);
    cout<<"t_ans_size: "<<t_ans_size<<endl;
    for(int i=0;i<t_ans_size;i++){
        int x;
        fscanf(f,"%d",&x);
        t_ans.emplace_back(x);
    }
    int t_edge_size=0;
    fscanf(f,"%d",&t_edge_size);
    cout<<"t_edge_size: "<<t_edge_size<<endl;
    t_edge.reserve(t_edge_size);
    for(int i=0;i<t_edge_size;i++){
        int x;
        fscanf(f,"%d",&x);
        t_edge.emplace_back(x);
    }
    int t_mp_size=0;
    fscanf(f,"%d",&t_mp_size);
    cout<<"t_mp_size: "<<t_mp_size<<endl;
    for(int i=0;i<t_mp_size;i++){
        char name[100];
        int x;
        fscanf(f,"%s%d",name,&x);
        t_mp[(string)name]=x;
    }
    int height_size=0;
    fscanf(f,"%d",&height_size);
    height.reserve(height_size);
    cout<<"height_size: "<<height_size<<endl;
    for(int i=0;i<height_size;i++){
        int height_i_size=0;
        vector<int> v;
        height.emplace_back(v);
        fscanf(f,"%d",&height_i_size);
        height[i].reserve(height_i_size);
        for(int j=0;j<height_i_size;j++){
            int x;
            fscanf(f,"%d",&x);
            height[i].emplace_back(x);
        }
    }
    int dealloc_signal_size=0;
    fscanf(f,"%d",&dealloc_signal_size);
    dealloc_signal.reserve(dealloc_signal_size);
    cout<<"dealloc_signal_size: "<<dealloc_signal_size<<endl;
    for(int i=0;i<dealloc_signal_size;i++){
        int dealloc_signal_i_size=0;
        vector<int> v;
        dealloc_signal.emplace_back(v);
        fscanf(f,"%d",&dealloc_signal_i_size);
        dealloc_signal[i].reserve(dealloc_signal_i_size);
        for(int j=0;j<dealloc_signal_i_size;j++){
            int x;
            fscanf(f,"%d",&x);
            dealloc_signal[i].emplace_back(x);
        }
    }
}

void signal_in(){
    int signal_vector_size;
    fscanf(f,"%d",&signal_vector_size);
    signal_vector.reserve(signal_vector_size);
    for(int i=0;i<signal_vector_size;i++){
        Signal S;
        char name[10000],type[100];
        int array_ind=-1,last_level=0;
        int netlist_input=false;
        fscanf(f,"%s%s%d%d%d",name,type,&array_ind,&netlist_input,&last_level);//netlist input is a boolian!
        //out<<S.gate_edges.size()<<" ";
        if(signal_vector_size-i<10 || i<10)
            cout<<name<<" "<<i<<endl;
        S.name=(string)name;S.type=(string)type;S.array_ind=array_ind;S.netlist_input=(bool)netlist_input;S.last_level=last_level;
        int gate_edges_size=0;
        fscanf(f,"%d",&gate_edges_size);
        S.gate_edges.reserve(gate_edges_size);
        for(int j=0;j<gate_edges_size;j++){
            int edge=0;
            fscanf(f,"%d",&edge);
            S.gate_edges.emplace_back(edge);
        }
        int vaweform_size=0;
        fscanf(f,"%d",&vaweform_size);
        S.vaweform.reserve(vaweform_size);
        for(int j=0;j<vaweform_size;j++){
            long long int time;
            int value;
            fscanf(f,"%lld%d",&time,&value);
        	Event ev(time, (VAL)value);
            S.vaweform.emplace_back(ev);
        }
        signal_vector.emplace_back(S);
        int mark;
        fscanf(f,"%d",&mark);
        signal_mark[i]=(bool)mark;
        int mps;
        fscanf(f,"%d",&mps);
        mpsignal[S.name]=mps;
    }
    /*
    cout<<"signal size: "<<signal_vector.size()<<endl;
    for(int i=0;i<signal_vector.size();i++){
        Signal &signall=signal_vector[i];
        mpsignal[signall.name]=i;
    }
    cout<<"evennnnn"<<endl;
    */
}

void gate_in(){
    int component_vector_size;
    fscanf(f,"%d",&component_vector_size);
    component_vector.reserve(component_vector_size);
    cout<<"component_vector_size"<<component_vector_size<<endl;
    for(int i=0;i<component_vector_size;i++){
        Gate g;
        char name[1000],type[100];
        int id=0,size=0,l_in=0,l_out=0,table_id=0;
        fscanf(f,"%s%s%d%d%d%d%d",name,type,&id,&size,&l_in,&l_out,&table_id);
        g.name=(string)name,g.type=(string)type,g.id=id,g.size=size,g.l_in=l_in,g.l_out=l_out,g.table_id=table_id;
        if(i<10 || component_vector_size-i<10)
            cout<<"n. "<<name<<endl;
        //out<<g.dl2.size()<<" ";
        int dl2_size;
        fscanf(f,"%d",&dl2_size);
        g.dl2.reserve(dl2_size);
        for(int j=0;j<dl2_size;j++){
            int in,out,ris,fal,edge;
            fscanf(f,"%d%d%d%d%d",&in,&out,&edge,&ris,&fal);
            delay2 dl;
            dl.in=in,dl.out=out,dl.edge=edge,dl.ris=ris,dl.fal=fal;
            g.dl2.emplace_back(dl);
        }
        int inputs_size;
        fscanf(f,"%d",&inputs_size);
        g.inputs.reserve(inputs_size);
        for(int j=0;j<inputs_size;j++){
            int signal_index;
            char port_name[100];
            fscanf(f,"%s%d",port_name,&signal_index);
            portmap pm;
            pm.port_name=(string)port_name;
            pm.signal_index=signal_index;
            g.inputs.emplace_back(pm);
        }
        int outputs_size;
        fscanf(f,"%d",&outputs_size);
        g.outputs.reserve(outputs_size);
        for(int j=0;j<outputs_size;j++){
            int signal_index;
            char port_name[100];
            fscanf(f,"%s%d",port_name,&signal_index);
            portmap pm;
            pm.port_name=(string)port_name;
            pm.signal_index=signal_index;
            g.outputs.emplace_back(pm);
        }
        component_vector.emplace_back(g);
    }
}


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
	signall.vaweform.emplace_back(ev);

}

void vcd_init(){
    cout<<"here"<<endl;
    for(int k=0;k<threads_num;k++)
	for(int i = 0 ; i < tmp_vcd_signals[k].size(); i++){//transfering vcd input vaweforms to simulation signals
		string name = tmp_vcd_signals[k][i].name;
        //cout<<"name is okay"<<endl;
		int ind = mpsignal[name];
		Signal& signal_tmp = tmp_vcd_signals[k][i];
		Signal& signall = signal_vector[ind];
		for(int j = 0; j < signal_tmp.vaweform.size(); j++){
			Event& ev = signal_tmp.vaweform[j];
            if(ev.time<=MX+10)
			         insert_edge(ind, ev.time , ev.value, true);
		}
		//cout<<signal_vector[ind].name<<" "<<signal_vector[ind].vaweform.size()<<endl;
	}
}


long long int number_of_events;

long long int ans_max_time = 0;

int main(int argc, char *argv[]){
    MX = stoll(argv[3]);
    MN=stoll(argv[2]);
    f = fopen ("netlist.txt", "r");
    all();
    signal_in();
    gate_in();
    //
    fclose(f);
	cout<<"phase6"<<endl;
	auto t1 = std::chrono::high_resolution_clock::now();
	vcd_process(argv[1]);
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
    if(MX<40000LL*100000LL)
	   gpusimultaion1();
    else
       gpusimultaion();

	cout<<"phase8"<<endl;
	auto t2phase7 = std::chrono::high_resolution_clock::now();
	auto duration7 = std::chrono::duration_cast<std::chrono::microseconds>( t2phase7 - t1phase7 ).count();
	//output();
	cout<<"SIMUALTION DONE \n\\0\\\n/-/\n\\ \\"<<endl<<ans_max_time<<endl;
	cout<<"TOTAL TIME : "<<duration7<<endl;
	//cout<<total_time<<" "<<total_single<<" "<<endl;
	cout<<"phase9"<<endl;
	//output_process();
	cout<<"phase10"<<endl;
	saif_process(MN,MX,argv[4]);
}
