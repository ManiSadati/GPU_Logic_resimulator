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
#include "saif.h"

extern vector<Signal> signal_vector;

extern unordered_map<string, int> mpsignal;


string saif_start(long long int min,long long int max){
  string s="(SAIFILE\n(SAIFVERSION \"2.0\")\n(DIRECTION \"backward\")\n(DESIGN )\n(DATE \"Sun Feb 16 18:43:23 2020\")\n(VENDOR \"Synopsys, Inc\")\n(PROGRAM_NAME \"VCS K-2015.09-SP2_Full64\")\n(VERSION \"1.0\")\n(DIVIDER / )\n(TIMESCALE 1 ps)\n(DURATION "+to_string(max-min)+")\n(INSTANCE tbench_NV_NVDLA_partition_o\n   (INSTANCE u_partition_o\n      (NET\n";
  return s;
}

string saif_output(long long int ti,long long int to,long long int tx,string name){
  string s="";
  string t="";
  for(int i=0;i<name.size();i++){
    if(name[i]=='[' || name[i]==']')
      t+="\\";
    t+=name[i];
  }
  s+="("+t+"\n";
  s+="(T0 "+to_string(to)+") ";
  s+="(T1 "+to_string(ti)+") ";
  s+="(TX "+to_string(tx)+") \n";
  s+="(TC 0) ";
  s+="(IG 0)\n";
  s+=")\n";
  return s;
}
ofstream fout;
void saif_process(long long int min,long long int max){
  fout.open("saiff.saif");
  string s=saif_start(min,max);
  fout<<s<<endl;
  for(int i=3;i<signal_vector.size();i++){
    long long int ti=0;
    long long int to=0;
    long long int tx=0;
    Signal& tsig = signal_vector[i];
	int map_ind = mpsignal[tsig.name];
	Signal& sig = signal_vector[map_ind];
	bool b = true;
	bool same_name = false;
	if(sig.name == tsig.name){
		same_name = true;
	}
	if(same_name && map_ind != i){
		continue;
	}
    string name = tsig.name;
    vector<Event> &ev=sig.vaweform;
    long int j=0;
    if(sig.o_val + sig.i_val + sig.x_val==0 && name[name.size()-1]!=']'){
        //cout<<"name: "<<name<<endl;
        continue;
    }
	if(sig.o_val + sig.i_val + sig.x_val==0 && name[name.size()-1] == ']'){
		sig.x_val = max - min;
    }
    //cout<<j<<" "<<ti<<" "<<to<<" "<<tx<<endl;
    string s=saif_output(sig.i_val, sig.o_val, sig.x_val,name);
    fout<<s<<endl;
  }
  fout<<")"<<endl;
  fout<<")"<<endl;
  fout<<")"<<endl;
  fout<<")"<<endl;
  fout.close();
}
