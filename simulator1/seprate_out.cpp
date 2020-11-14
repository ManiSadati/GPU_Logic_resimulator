/*
 * Copyright (c) 2020, ManiSadati, MohammadShahidzade All rights reserved.
 *
 * https://github.com/ManiSadati/GPU_Logic_resimulator/blob/master/LICENSE
 *
 */


#include<bits/stdc++.h>
#include "../object.h"

using namespace std;

extern vector<int8_t> t_ans;
extern vector<int8_t> t_edge;
extern map<string,int> t_mp;
extern vector<vector<int> > height;
extern vector<vector<int> > dealloc_signal;
extern vector<Gate> component_vector;
extern vector<Signal> signal_vector;
extern unordered_map<string, int> mpsignal;
extern unordered_map <int, bool> signal_mark;
ofstream out;

void all(){
    out<<t_ans.size()<<" ";
    for(int i=0;i<t_ans.size();i++)
        out<<(int)t_ans[i]<<" ";
    out<<endl;
    out<<t_edge.size()<<" ";
    for(int i=0;i<(int)t_edge.size();i++)
        out<<(int)t_edge[i]<<" ";
    out<<endl;
    out<<t_mp.size()<<" ";
    for(auto it=t_mp.begin();it!=t_mp.end();it++)
        out<<it->first<<" "<<it->second<<" ";

    out<<endl;
    out<<height.size()<<" ";
    for(int i=0;i<height.size();i++){
        out<<height[i].size()<<" ";
        for(int j=0;j<height[i].size();j++)
            out<<height[i][j]<<" ";
    }
    out<<endl;
    out<<dealloc_signal.size()<<" ";
    for(int i=0;i<dealloc_signal.size();i++){
        out<<dealloc_signal[i].size()<<" ";
        for(int j=0;j<dealloc_signal[i].size();j++)
            out<<dealloc_signal[i][j]<<" ";
    }
    out<<endl;
}

void signal_out(){
    out<<signal_vector.size()<<endl;
    for(int i=0;i<signal_vector.size();i++){
        Signal& S=signal_vector[i];
        out<<S.name<<" "<<S.type<<" "<<S.array_ind<<" "<<S.netlist_input<<" "<<S.last_level<<" ";
        out<<S.gate_edges.size()<<" ";
        for(int j=0;j<S.gate_edges.size();j++)
            out<<S.gate_edges[j]<<" ";
        out<<S.vaweform.size()<<" ";
        for(int j=0;j<S.vaweform.size();j++)
            out<<S.vaweform[j].time<<" "<<S.vaweform[j].value<<" ";
        out<<signal_mark[i]<<" ";
        out<<mpsignal[S.name]<<" ";
        out<<endl;
    }

}

void gate_out(){
    out<<component_vector.size()<<endl;
    for(int i=0;i<component_vector.size();i++){
        Gate &g=component_vector[i];
        out<<g.name<<" "<<g.type<<" "<<g.id<<" "<<g.size<<" "<<g.l_in<<" "<<g.l_out<<" "<<g.table_id<<" ";
        out<<g.dl2.size()<<" ";
        for(int j=0;j<g.dl2.size();j++)
            out<<g.dl2[j].in<<" "<<g.dl2[j].out<<" "<<g.dl2[j].edge<<" "<<g.dl2[j].ris<<" "<<g.dl2[j].fal<<" ";
        out<<g.inputs.size()<<" ";
        for(int j=0;j<g.inputs.size();j++)
            out<<g.inputs[j].port_name<<" "<<g.inputs[j].signal_index<<" ";
        out<<g.outputs.size()<<" ";
        for(int j=0;j<g.outputs.size();j++)
            out<<g.outputs[j].port_name<<" "<<g.outputs[j].signal_index<<" ";
        out<<endl;
    }
}

void out_main(){
    out.open("netlist.txt");
    all();
    signal_out();
    gate_out();
}
