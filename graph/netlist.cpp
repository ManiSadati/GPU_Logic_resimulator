/*
 * Copyright (c) 2020, ManiSadati, MohammadShahidzade All rights reserved.
 *
 * https://github.com/ManiSadati/GPU_Logic_resimulator/blob/master/LICENSE
 *
 */


#include<bits/stdc++.h>
using namespace std;
#include "../vlib/type1parser.h"
#include "../vlib/libraryparser.h"
#include "../vlib/type1component.h"
#include "../vcd_translator/vcdparser.h"
#include "../object.h"
#include "netlist.h"

#define debug 0

ifstream netlist_inFile;

vector<string> netlist_commands;

vector<Signal> signal_vector;

vector<Gate> component_vector;

unordered_map<string, int> mpsignal, mpcomp;
// mp stores the index of the signal (signal_name vector) and mpcomp stores the index of component(component_name vector)

extern unordered_map<string, int> vlib_names ;
// It maps the component_type to the index in vlib_signals gensdf -> 10

extern vector<unordered_map<string, string> > vlib_signals;
//It maps for every component the port and the port type a1 -> input
extern vector<unordered_map<string, pair<int,int > > > vlibarrays;

extern unordered_map<string, bool> vlibsequential;

extern vector<unordered_map<string, int> >vlib_ports ;
extern unordered_map<int, int> vlib_size, vlib_lin, vlib_lout;
extern vector<unordered_map<int, string> >vlib_ports_revers ;


unordered_map<int, int> component_level ; // stores the level of each components !!!It could be vector
unordered_map <int, bool> signal_mark; // stores if the signal is visited or not !!!It could be vector
unordered_map<int, int> component_mark; // stores the number of times that each component is visited !!!It could be vector
deque<int> deq; // stores the index of the gates that are ready

vector<vector<int> > height;//stores level of each gate_index
vector<vector<int> > dealloc_signal;

vector<pair<int,string> > assigns;




struct II {
    int i = -1;
};

unordered_map <string, II> array_mark;
vector<pair<int, int> > array_vec; //for each array stores upper bound and lower bound
vector<int> array_start;
vector<string> array_name;

pair<int,int> gv_brackets(string s){
  int cnt = 1;
  int x = 0;
  int y = 0;
  while(s[cnt]<= '9' && s[cnt] >='0'){
    x *= 10;
    x += s[cnt] - '0';
    cnt++;
  }
  if(s[cnt] == ']'){
      return make_pair(x, -1);
  }
  cnt++;
  while(cnt < s.size() && s[cnt]<= '9' && s[cnt] >='0'){
    y *= 10;
    y += s[cnt] - '0';
    cnt++;
  }
  return make_pair(x,y);
}

string netlist_erase_extra_space(string line){
    int n = line.size();
    string s = "";
    int cnt = 0;
    while(line[cnt] == ' '){
        cnt++;
    }
    for(int i = cnt; i < n; i++){
        if(line[i] == '(' || line[i] == ')' || line[i] == ',' || line[i] == '.')
        line[i] = ' ';
        if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
        continue;
        if(line[i] == '{' || line[i] == '}' || line[i] == '[')
        s += " ";
        s += line[i];
        if(line[i] == '{' || line[i] == '}' || line[i] == ']')
        s += " ";
    }
    return s;
}

void netlist_restore_commands(string input){
    netlist_inFile.open(input);
    if (!netlist_inFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    string command;
    while (getline(netlist_inFile, line)) {
		line = check_valid_ascii(line);
        line = netlist_erase_extra_space(line);
        if(line == "endmodule")
        line = "endmodule;";
        if(line.size() == 0 || line.substr(0,2) == "//")
        continue;
        command = "";
        while(line.size() == 0|| (line.size() && line[line.size()-1] != ';')){
            command += " " + line;
            getline(netlist_inFile, line);
            line = netlist_erase_extra_space(line);
        }
        command +=  " " + line;
        command = netlist_erase_extra_space(command);
        //cout<<" -- * "<<command<<endl;
        netlist_commands.push_back(command);
    }
    netlist_inFile.close();

}

vector<string> netlist_get_all_word(string s){
    vector<string> v;
    string t;
    int cnt = 0 ;
    while(cnt < s.size()){
        if(s[cnt] != ' ' && s[cnt] != ';')
        t += s[cnt];
        else{
            if(t.size())
            v.push_back(t);
            t = "";
        }
        cnt++;
    }
    return v;
}

void netlist_process_commands(){
    //cout<<"hi"<<endl;
    int signal = 3;

    long long int tsup = 0;
    VAL vsup0 = O;
    VAL vsup1 = I;
    Signal supply0;
    supply0.name = "1'b0";
    Event new0(tsup, vsup0);
    supply0.vaweform.push_back(new0);
    mpsignal[supply0.name] = 0;
    signal_vector.push_back(supply0);
    signal_mark[0] = true;
	signal_vector[0].netlist_input = true;

    Signal supply1;
    supply1.name = "1'b1";
    Event new1(tsup, vsup1);
    supply1.vaweform.push_back(new1);
    mpsignal[supply1.name] = 1;
    signal_vector.push_back(supply1);
    signal_mark[1] = true;
	signal_vector[1].netlist_input = true;

	Signal Fake;
	Fake.name = "Fake";
	Event new2(0, (VAL) O);
	Fake.vaweform.push_back(new2);
	mpsignal[Fake.name] = 2;
	signal_vector.push_back(Fake);
	signal_mark[2] = true;
	signal_vector[2].netlist_input = true;


    //cout<<commands.size()<<endl;
    for(int i = 0; i < netlist_commands.size(); i++){
        string command = netlist_commands[i];
        vector<string> words = netlist_get_all_word(command);
        if(words[0] == "input" || words[0] == "output" || words[0] == "wire"){
            if(words[1][0] == '['){
                pair<int, int> p = gv_brackets(words[1]);
                int upper = p.first;
                int lower = p.second;
                array_mark[words[2]].i = array_vec.size();
				//cout<<"array ."<<words[2]<<". "<<array_mark[words[2]].i<<endl;
                array_name.push_back(words[2]);
                array_start.push_back(signal_vector.size());
                array_vec.push_back(p);
                for(int j = min(lower, upper); j <= max(lower,upper); j++){
                    string num = to_string(j);
                    for(int k = 2; k < words.size(); k++){
                        string t = words[k] + "[" + num + "]";
						Signal signall;
                        if(words[0] == "input"){
                            signal_mark[signal] = true;
							signall.netlist_input = true;
                        }
                        mpsignal[t] = signal++;
                        signall.name = t;
                        signall.type = words[0];
                        signall.array_ind = array_vec.size() - 1;
                        signal_vector.push_back(signall);

                    }
                }
            }
            else{
                for(int k = 1; k < words.size(); k++){
					Signal signall;
                    if(words[0] == "input"){
                        signal_mark[signal] = true;
						signall.netlist_input = true;
                    }
                    mpsignal[words[k]] = signal++;
                    signall.name = words[k];
                    signall.type = words[0];
                    signal_vector.push_back(signall);
                }
            }
        }
        else if(words[0] == "assign"){
            int eq = 3;
            if(words[2] == "="){
                eq = 2;
            }
            string side1 = "";
            string side2 = "";
            for(int j = 1 ; j < eq; j++){
                side1 += words[j];
            }
            for(int j = eq + 1 ; j < words.size(); j++){
                side2 += words[j];
            }
            if(side2[0] == '1' || side2[0] == '0'){
				int sig_idx = mpsignal[side1];
				Signal& signall = signal_vector[sig_idx];
				signall.netlist_input = true;
                signal_mark[sig_idx] = true;
                assigns.push_back(make_pair(sig_idx, side2));
            }
            else{
                mpsignal[side1] = mpsignal[side2];
            }
        }
        else if(words[0].substr(0,3) == "GEN"){
            Gate compo;
            compo.name = words[1];
            compo.type = words[0];
			int cell_id = vlib_names[compo.type];
			int sz = vlib_size[cell_id];
			bool adder = false;
			if(words[0].size() > 6 && words[0].substr(0, 6) == "GEN_FA" || words[0].substr(0, 6) == "GEN_HA"){
				adder = true;
			}
            int x = vlib_names[words[0]];
            int component_id = component_vector.size();
            mpcomp[compo.name] = component_id;
            int k = 2;
            vector<portmap> pm_vec;
			map<int , bool> my_map;
            while(k < words.size()){
                string  port1 = words[k];

                bool deb = false;
                //deb = (port1 == "dout" && compo.name == "tile_ICCADs_dcache_ICCADs_data_ICCADs_data_arrays_0_ICCADs_data_arrays_0_ext_ICCADs_NVRAM");
                bool port_is_array = false;
                //check if the port is array or not
                pair<int, int> boundaries = vlibarrays[x][port1];
                if(boundaries.first != boundaries.second){
                    port_is_array = true;
                }
                if(!port_is_array){
                    portmap po;
                    po.port_name = port1;
					int id_port = vlib_ports[cell_id][port1];
					my_map[id_port] = true;
                    string tmp1 = words[k+1];
                    if(array_mark[tmp1].i != -1){
                        string tmp2 = words[k+2];
                        po.signal_index = mpsignal[tmp1 + tmp2];
                        if(signal_vector[mpsignal[tmp1 + tmp2]].name != tmp1 + tmp2 && po.signal_index == 0){
                            cout<<"WRONG2 "<<tmp1+ tmp2<<endl;
                        }
                        k += 3;
                    }
                    else{
                        po.signal_index = mpsignal[tmp1];
                        if(signal_vector[mpsignal[tmp1]].name != tmp1 && mpsignal[tmp1] == 0  && po.signal_index == 0){
                            cout<<"WRONG1 "<<tmp1<<" "<<signal_vector[mpsignal[tmp1]].name<< " "<<mpsignal[tmp1]<<endl;
                        }
                        k += 2;
                    }

                    pm_vec.push_back(po);
                }
                else{
                    int z = 1;
                    if(boundaries.first < boundaries.second){
                        z = -1;
                    }
                    k++;
                    if(words[k] == "{"){
                        k++;
                    }
                    int cnt = boundaries.first ;
                    while(cnt + z != boundaries.second){
                        string tmp = words[k];
                        if(array_mark[tmp].i == -1){
                            portmap po ;
                            po.port_name = port1 + "[" + to_string(cnt) + "]";
                            po.signal_index = mpsignal[tmp];
                            if(signal_vector[mpsignal[tmp]].name != tmp){
                                cout<<"WRONG3 "<<tmp<<"- "<<port1<<endl;
                            }
                            pm_vec.push_back(po);
                            cnt -= z;
                            k++;
                        }
                        else{
                            pair<int, int> p = array_vec[array_mark[words[k]].i];
                            if(k+1 < words.size() && words[k+1][0] == '['){
                                p = gv_brackets(words[k+1]);
                            }
                            int zz = 1;
                            if(p.first < p.second){
                                zz = -1;
                            }
                            if(p.second == -1){
                                p.second = p.first;
                            }
                            int cnt2 = p.first;
                            while(cnt2 + zz != p.second){
                                portmap po ;
                                po.port_name = port1 + "[" + to_string(cnt) + "]";
                                string tmp2 = words[k] + "[" + to_string(cnt2) + "]";
                                po.signal_index = mpsignal[tmp2];
                                if(signal_vector[mpsignal[tmp2]].name != tmp2){
                                    cout<<"WRONG4 "<<tmp2<<endl;
                                }
                                pm_vec.push_back(po);
                                cnt2 -= zz;
                                cnt -= z;
                                //k++ ?
                            }
                            if(k+1 < words.size() && words[k+1][0] == '['){
                                k++;
                            }
                            k++;
                        }
                    }
                }
                if(k < words.size() && words[k] == "}"){
                    k++;
                }
            }
			bool adder_co = false;
			bool adder_sum = false;
			if(vlibsequential[compo.type] == false){
				for(int j = 0 ; j < sz ; j++){
					if(!my_map[j]){
						string fportname = vlib_ports_revers[cell_id][j];
						cout<<"no port map : "<<compo.name<<" "<<compo.type<<" "<<fportname<<endl;
						portmap pm;
						pm.port_name = fportname;
						pm.signal_index = 2;
						pm_vec.push_back(pm);
						if(vlib_lin[cell_id] > j){
							cout<<"NO WAY , input is not mapped "<<compo.name<<" "<<compo.type<<" "<<j<<endl;
						}
						//com_output.push_back(make_pair(vlib_ports[cell_id][pm.port_name], pm_vec.size() - 1));
					}
				}
			}
			vector<pair<int , int> > com_input, com_output;
            for(int j = 0 ; j < pm_vec.size(); j++){
                portmap pm = pm_vec[j];
                if(vlib_signals[x][pm.port_name] == "input"){
                    com_input.push_back(make_pair(vlib_ports[cell_id][pm.port_name], j));
                    Signal& signall = signal_vector[pm.signal_index];
                    signall.gate_edges.push_back(component_id);
                }
                if(vlib_signals[x][pm.port_name] == "output"){
					if(adder && pm.port_name == "co"){
						adder_co = true;
					}
					if(adder && pm.port_name == "s"){
						adder_sum = true;
					}
                    com_output.push_back(make_pair(vlib_ports[cell_id][pm.port_name], j));
                }
            }
			/*if(adder && !adder_co){
				portmap pm;
				pm.port_name = "co";
				pm.signal_index = 2;
				pm_vec.push_back(pm);
				com_output.push_back(make_pair(vlib_ports[cell_id][pm.port_name], pm_vec.size() - 1));
			}
			if(adder && !adder_sum){
				portmap pm;
				pm.port_name = "s";
				pm.signal_index = 2;
				pm_vec.push_back(pm);
				com_output.push_back(make_pair(vlib_ports[cell_id][pm.port_name], pm_vec.size() - 1));
			}*/
			sort(com_input.begin(), com_input.end());
			sort(com_output.begin(), com_output.end());
			for(int j = 0 ; j < com_input.size() ; j++){
				compo.inputs.push_back(pm_vec[com_input[j].second]);
			}
			for(int j = 0 ; j < com_output.size() ; j++){
				compo.outputs.push_back(pm_vec[com_output[j].second]);
			}
            component_vector.push_back(compo);
        }
    }

    //sequential marking part :
    for(int i = 0 ; i < component_vector.size(); i++){
        Gate& compo = component_vector[i];
        bool sequential = vlibsequential[compo.type];
        if(sequential){
            for(int j = 0 ; j < compo.outputs.size(); j++){
                portmap& po = compo.outputs[j];
                signal_mark[po.signal_index] = true;
				Signal& signall = signal_vector[po.signal_index];
				signall.netlist_input = true;
            }
        }
    }
}
map<int, bool> MARK;

void levelize(){
    vector<int> useless;
    height.push_back(useless);
	dealloc_signal.push_back(useless);
	dealloc_signal.push_back(useless);
    for(int i = 0 ; i < component_vector.size(); i++){
        Gate& compo = component_vector[i];
        int compo_id = i;
        bool bl = false;
        for(int j = 0 ; j < compo.inputs.size(); j++){
            if(signal_mark[compo.inputs[j].signal_index]){
                component_mark[compo_id]++;
            }
        }
        if(component_mark[compo_id] == compo.inputs.size()){
            deq.push_back(compo_id);
            component_level[compo_id] = 0;
			if(vlibsequential[component_vector[compo_id].type] == false)
            height[0].push_back(compo_id);
        }
    }
    while(deq.size()){
        int compo_id = deq.front();
        MARK[compo_id] = true;
        Gate& compo = component_vector[compo_id];
        deq.pop_front();
        bool sequential = vlibsequential[compo.type];
		int compo_level = component_level[compo_id];
		for(int i = 0 ; i < compo.inputs.size(); i++){
			int sig_idx = compo.inputs[i].signal_index;
            Signal& signall = signal_vector[sig_idx];
			signall.last_level = max(signall.last_level, compo_level + 1);
		}
		for(int i = 0 ; i < compo.outputs.size(); i++){
			int sig_idx = compo.outputs[i].signal_index;
            Signal& signall = signal_vector[sig_idx];
			signall.last_level = max(signall.last_level, compo_level + 1);
		}
        if(sequential){
            continue;
        }
        for(int i = 0 ; i < compo.outputs.size(); i++){
            int sig_idx = compo.outputs[i].signal_index;
            Signal& signall = signal_vector[sig_idx];
            signal_mark[sig_idx] = true;
            for(int j = 0; j < signall.gate_edges.size(); j++){
                int gate_id = signall.gate_edges[j];
                component_mark[gate_id]++;
                int tmp = max(component_level[gate_id] ,  component_level[compo_id] + 1);
                if(height.size() <= tmp){
                    height.push_back(useless);
					dealloc_signal.push_back(useless);
                }
                component_level[gate_id] = tmp;
                if(component_mark[gate_id] == component_vector[gate_id].inputs.size()){
					if(vlibsequential[component_vector[gate_id].type] == false){
                    	height[tmp].push_back(gate_id);
					}
                    deq.push_back(gate_id);
                }
            }
        }
    }

}

void process_netlist(string input1){
    netlist_restore_commands(input1);
    netlist_process_commands();
    levelize();

    int sum = 0;
    for(int i = 0 ; i < height.size(); i++){
        //cout<<i<<"--"<<height[i].size()<<endl;
        sum += height[i].size();
    }
    int seq = 0;
    for(int i = 0 ; i < component_vector.size(); i++){
        Gate& compo =  component_vector[i];
        if(vlibsequential[compo.type]){
            seq++;
        }
    }
    for(int i = 0 ; i < component_vector.size(); i++){
        if(!MARK[i]){
            Gate& compo = component_vector[i];
            cout<<"Not marked "<<i<<" "<<compo.type<<" "<<compo.name<<endl;
            for(int j = 0 ; j < compo.inputs.size(); j++){
                portmap po = compo.inputs[j];
                if(!signal_mark[po.signal_index]){
                    cout<<"-> "<<po.port_name<<" "<<signal_vector[po.signal_index].name<<endl;
                }
            }
        }
    }
    //testing part
    cout<<"sequential : "<<seq<<endl;
    cout<<"combinational: "<<sum<<endl;
    cout<<"total : "<<component_vector.size()<<endl;

}


vector<pair<int, string> > gvget_assigns(){
    return assigns;
}
/*
int main(int argc, char *argv[]){

    component_preprocess("../vlib/example.vlib", "../vlib/primitive.vlib");//remove this

    netlist_restore_commands(argv[1]);
    netlist_process_commands();

    levelize();
    cout<<height.size()<<" * "<<endl;
    int sum = 0;
    for(int i = 0 ; i < height.size(); i++){
        cout<<i<<"--"<<height[i].size()<<endl;
        sum += height[i].size();
        //for(int j = 0 ; j < height[i].size(); j++){
            //cout<<height[i][j]<<"  "<<endl;
        //}
    }
    int seq = 0;
    for(int i = 0 ; i < component_vector.size(); i++){
        Gate& compo =  component_vector[i];
        if(vlibsequential[compo.type]){
            seq++;
        }
    }
    //testing part
    for(int i = 0 ; i < signal_vector.size(); i++){
        Signal& signall = signal_vector[i];
    }
    cout<<"sequential : "<<seq<<endl;
    cout<<"sum: "<<sum<<endl;
    cout<<"total : "<<component_vector.size()<<endl;
    if(sum != component_vector.size()){
        cout<<"ERROR : missed some gates!"<<endl;
    }
    //we should return signal_name , singal_type, component_name, component_type,  ..
    // and mp, mpcomp, signal_node_edges, gate_node_input_edges, gate_node_output_edges, height

}
//#endif
*/
