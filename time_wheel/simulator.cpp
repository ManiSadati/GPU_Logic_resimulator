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
#include "struct.h"
#include "vcdoutput.h"

#define debug 0

vector<pair<int, string> > sim_gv_assigns;

vector< Signal > tmp_vcd_signals;

extern vector< pair<string, Event> > total_vaweforms;

extern vector<Signal> signal_vector;

extern vector<Gate> component_vector;

extern unordered_map<string, int> mpsignal, mpcomp;

extern vector<vector<int> > height;

extern vector<Gate> delays_vec;

extern unordered_map<string, int> vlib_names ;

extern vector<unordered_map<string, string> > vlib_signals;

extern vector<unordered_map<string, int> >vlib_ports ;

extern vector<unordered_map<int ,string> >vlib_ports_revers ;

extern unordered_map<int, int> vlib_size;

long long int mx = 20000000;

Wheel wl;
vcd_struct vs;

int numberofevent=0;

void insert_edge(int ind, long long int time, VAL value, GATE* COMPO, bool init = false){
  Signal& signall = signal_vector[ind];
  int cnt = signall.vaweform.size();
  if((cnt>0 && signall.vaweform[cnt-1].value == value)){
    return;
  }
  while(cnt && signall.vaweform[cnt-1].time >= time){
    cnt--;
    signall.vaweform.pop_back();
    if(!init){
      COMPO->revert();
    }
  }
  numberofevent++;
  Event ev(time, value);
  signall.vaweform.push_back(ev);
  for(int i=0;i<signall.gate_edges.size();i++){
    int g=signall.gate_edges[i];
    if(!init){
      wl.add(time,g);
    }
    else if(time<mx){
      vs.add(time,g);
    }
  }
}

void output(){ //////////////////////////?????????????????????
  for(int i = 0 ; i < signal_vector.size(); i++){
    Signal& signall = signal_vector[i];
    if(signall.type=="output"){
      cout<<signall.name<<"------------"<<endl;
      for(int j = 0; j < signall.vaweform.size(); j++){
	if(100000-50<signall.vaweform[j].time)
	  cout<<signall.vaweform[j].time<<" "<<signall.vaweform[j].value<<endl;
      }
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
  cout<<"#1"<<endl;
  sim_gv_assigns = gvget_assigns();
  cout<<"#1"<<endl;
  tmp_vcd_signals = vcd_get_signals();
  cout<<"#1"<<endl;
  GATE *COMPO;
  
  for(int i = 0 ; i < signal_vector.size(); i++){//initializing non input signal vaweforms
    if(signal_vector[i].vaweform.size() == 0){
      Event ev(-1, Z);
      signal_vector[i].vaweform.push_back(ev);
    }
  }
  
  cout<<"#1"<<endl;
  for(int i = 0 ; i < sim_gv_assigns.size(); i++){//transfering gv assigns to simulation
    int x = sim_gv_assigns[i].first;
    string y = sim_gv_assigns[i].second;
    string z = y.substr(y.size() - 1, 1);
    Event ev(0, toval(z));
    //signal_vector[x].vaweform.push_back(ev);
    insert_edge(x, ev.time , ev.value, COMPO, true);
    //vs.add(ev.time,x);
  }
  cout<<"#1"<<endl;
  cout<<total_vaweforms.size()<<endl;
  for(int i=0;i<total_vaweforms.size();i++){
    int ind=mpsignal[total_vaweforms[i].first];
    insert_edge(ind, total_vaweforms[i].second.time , total_vaweforms[i].second.value, COMPO, true);
  }
  cout<<"#1"<<endl;
  
  cout<<"numberof event after adding inputs"<<numberofevent<<endl;
  for(int i = 0 ; i < delays_vec.size(); i++){ //transfering information from sdf to simulation
    Gate& gatee = delays_vec[i];
    int comp_ind = mpcomp[gatee.name];
    Gate& compo = component_vector[comp_ind];
    if(compo.name != gatee.name){
      //cout<<"IMPOSSIBLE "<<gatee.name<<endl;
    }
    else{
      compo.dl = gatee.dl;//it s not optimized
    }
  }
}

string no_indx(string s){
  string t = "";
  int n = s.size();
  int cnt = 0;
  while(cnt < n && s[cnt] != '['){
    t += s[cnt];
    cnt++;
  }
  return t;
}

void single_gate_initialization(int comp_ind){
  if(comp_ind==93248)
    cout<<"na khoda vakiliiii vaghean miaii inja am!"<<endl;
  Gate& compo = component_vector[comp_ind];
  int cell_id = vlib_names[compo.type];
  GATE* COMPO = fgate(compo.type);
  VAL* var = COMPO->pos();
  compo.CMP = COMPO; //check here
  compo.id = cell_id;
  for(int i = 0 ; i < compo.inputs.size(); i++){
    portmap& po = compo.inputs[i];
    po.last=0;
    string& portname = po.port_name;
    int& signal_id = po.signal_index;
    Signal& signall = signal_vector[signal_id];
    //long long int time_ = signall.vaweform[0].time;
    int port_id = vlib_ports[compo.id][portname];
    po.port_id=port_id;
    var[port_id] = X;
  }
  for(int i = 0 ; i < compo.outputs.size(); i++){
    portmap& po = compo.outputs[i];
    po.last=0;
    string& portname = po.port_name;
    int& signal_id = po.signal_index;
    int port_id = vlib_ports[compo.id][portname];
    po.port_id=port_id;
    Signal& signall = signal_vector[signal_id];
    var[port_id] = X;
  }
}

void gates_initialization(){
  for(int i=0;i<component_vector.size();i++)
    single_gate_initialization(i);
}

int delay_time(vector<delay> &dl,int in_edge,int out_edge,string in,string out){
  //if(in_edge==-1 || out_edge==-1)
  //cout<<"how it is possible!"<<endl;
  for(int i=0;i<dl.size();i++)
    if(dl[i].in==in && dl[i].out==out){
      if(dl[i].edge=="non" ||(dl[i].edge=="pos" && in_edge==1)||(dl[i].edge=="neg" && in_edge==0))
	if(out_edge==1)
	  return dl[i].ris;
	else if(out_edge==0)
	  return dl[i].fal;
    }
  return 0;
	
}

bool single_gate_simulation(int comp_ind,long long int time){
  Gate& compo = component_vector[comp_ind];
  GATE* COMPO = compo.CMP;
  //cout<<compo.type<<" "<<comp_ind<<endl;
  VAL* var = COMPO->pos();
  int cell_id = compo.id;
  for(int i = 0 ; i < compo.inputs.size(); i++){//synchronizing?
    portmap& po = compo.inputs[i];
    int& last=po.last;
    string& portname = po.port_name;
    int& signal_id = po.signal_index;
    Signal& signall = signal_vector[signal_id];
    //cout<<compo.id<<" "<<comp_ind<<endl;
    //int port_id = vlib_ports[compo.id][portname];
    int port_id = po.port_id;
    //cout<<last<<" "<<signall.vaweform[last].time<<endl;
    //cout<<last<<endl;
    VAL v1=X;
    if(signall.vaweform.size()>last)
      v1=signall.vaweform[last].value;
    //else
      //cout<<"WHYYYYYYYYYYYYYYYYYYYYYYYYY"<<endl;
    if(signall.vaweform.size()>last+1 && signall.vaweform[last+1].time==time){
      VAL v2=signall.vaweform[last+1].value;
      //cout<<"should "<<time<<" "<<v1<<" "<<v2<<endl;
      v1=join(v1,v2);
      last++;
    }
    var[port_id]=v1;
  }
  //cout<<"befor function"<<endl;
  COMPO->function();
  //cout<<"after function"<<endl;
  //log(var,comp_ind);
  int dl[10];
  for(int i=0;i<10;i++)
    dl[i]=10000;//infint
  
  if(compo.dl.size()!=0){
    //cout<<"even they have delays!!!!!!!"<<endl;
    for(int i = 0 ; i < compo.inputs.size(); i++){//synchronizing?
      portmap& po = compo.inputs[i];
      int& last=po.last;
      string& portname = po.port_name;
      int& signal_id = po.signal_index;
      Signal& signall = signal_vector[signal_id];
      int port_id = po.port_id;
      //cout<<"de1"<<endl;
      //cout<<"de2"<<endl;
      VAL v1=X;
      //cout<<"last in delay :"<<last<<endl;
      if(signall.vaweform.size()>last && signall.vaweform[last].time==time){
	//cout<<"even they have equals"<<endl;
	VAL v1=signall.vaweform[last-1].value;
	VAL v2=signall.vaweform[last].value;
	v1=join(v1,v2);
	int in_edge=-1;
	if(p_edge(v1))
	  in_edge=1;
	else if(n_edge(v1))
	  in_edge=0;
	for(int j = 0 ; j < compo.outputs.size(); j++){//synchronizing?
	  portmap& out_po = compo.outputs[j];
	  int& out_last=out_po.last;
	  string& out_portname = out_po.port_name;
	  int& out_signal_id = out_po.signal_index;
	  Signal& out_signall = signal_vector[out_signal_id];
	  int out_port_id = vlib_ports[compo.id][out_portname];
	  int port_id = out_po.port_id;
	  VAL v22=var[out_port_id];
	  //cout<<"output "<<v22<<endl;
	  VAL v21=X;
	  //cout<<"de3"<<endl;
	  if(out_signall.vaweform.size()!=0)
	    v21=out_signall.vaweform[out_signall.vaweform.size()-1].value;
	  
	  //cout<<"output "<<v22<<" "<<v21<<endl;
	  if(second(v22)!=v21){
	    int out_edge=-1;
	    if(p_edge(join(v21,second(v22))))
	      out_edge=1;
	    else if(n_edge(join(v21,second(v22))))
	      out_edge=0;
	    dl[j]=min(dl[j],delay_time(compo.dl,in_edge,out_edge,portname,out_portname));//initialaize delay array to inf and get it out of this scope

	    //cout<<"de4"<<endl;
	  }
	}
      }
    }
  }
  //cout<<"de5"<<endl;
  for(int i = 0 ; i < compo.outputs.size(); i++){//synchronizing?
    portmap& po = compo.outputs[i];
    int& last=po.last;
    string& portname = po.port_name;
    int& signal_id = po.signal_index;
    Signal& signall = signal_vector[signal_id];
    int port_id = po.port_id;
    VAL v1=var[port_id];
    //cout<<time<<" "<<dl[i]<<" "<<time+dl[i]<<endl;
    if(compo.dl.size()!=0 && dl[i]!=10000)
      insert_edge(signal_id,time+dl[i],second(v1),COMPO);
    else
      insert_edge(signal_id,time,second(v1),COMPO);
  }
  //cout<<"end of it"<<endl;
}

int numberofevents=0;

bool simulation(){
  //cout<<"in simulation"<<endl;
  for(int j=0;j<(int)(mx/wl.maxn);j++){
    //cout<<(long long)j*wl.maxn<<endl;
    wl.read(vs,(long long)j*wl.maxn);
    //cout<<"in simulation"<<endl;
    for(int i=0;i<wl.maxn;i++)
      while(true){
	long long int time=j*wl.maxn+i;
	int id=wl.get(i);//component_ind
	//if(id==-1 && wl.size(i)!=0)
	//  cout<<"how it is possible i think ith impossible"<<endl;
	if(id==-1)
	  break;
	//cout<<"id: "<<id<<endl;
	numberofevents++;
	if(numberofevents%1000000==0)
	  cout<<"event: "<<numberofevents<<endl;
	//cout<<"befor"<<endl;
	//cout<<id<<" "<<time<<endl;
	single_gate_simulation(id,time);
	//cout<<"after"<<endl;
      }
  }
}


void total_simulation(){
  gates_initialization();
  simulation();
}

int main(int argc, char *argv[]){
  mx = stoi(argv[4]);
  cout<<"phase1"<<endl;
  component_preprocess("../vlib/example.vlib", "../vlib/primitive.vlib");
  cout<<"phase2"<<endl;
  process_port_parser("../vlib/pars2.txt");
  cout<<"phase3"<<endl;
  process_netlist(argv[1]);
  cout<<"phase4"<<endl;
  vcd_process(argv[2]);
  cout<<"phase5"<<endl;
  sdf_process(argv[3]);
  cout<<"phase6"<<endl;
  initialization();
  cout<<"phase7"<<endl;
  total_simulation();
  cout<<"phase8"<<endl;
  output();
  cout<<"SIMUALTION DONE \n\\0\\\n/-/\n\\ \\"<<endl;
  cout<<numberofevent<<endl;
  cout<<"phase9"<<endl;
  //output_process();
}
