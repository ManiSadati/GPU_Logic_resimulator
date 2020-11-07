#include<bits/stdc++.h>
#include"struct.h"

using namespace std;

const int Wheel::maxn=100;

void vcd_struct::add(long long int t,int g){
  time.push_back(t);
  gate.push_back(g);
}

void Wheel::add(long long int time,int comp){
  int add_index=( index+(time-curent_time) )%maxn;
  wl[add_index].insert(comp);
}

int Wheel::get(int in){
  curent_time+=(in-index)%maxn;
  index=in;
  if(wl[index].size()!=0){
    int x=*wl[index].begin();
    wl[index].erase(wl[index].begin());
    return x;
  }
  return -1;
}

void Wheel::read(vcd_struct &vcd,long long int t){
  curent_time=t;
  int time=curent_time+maxn;
  //cout<<vcd.pointer<<" "<<vcd.time.size()<<" "<<curent_time<<" "<<time<<endl;
  for(int i=0;i<maxn;i++)
    if(size(i)!=0)
      cout<<"size: "<<size(i)<<endl;
  while(vcd.pointer<vcd.time.size() && vcd.time[vcd.pointer]<time){
    if(vcd.time[vcd.pointer]-curent_time<0)
      cout<<"waoo i find the problem "<<vcd.time[vcd.pointer]<<" "<<curent_time<<" "<<vcd.gate[vcd.pointer]<<endl;
    wl[vcd.time[vcd.pointer]-curent_time].insert(vcd.gate[vcd.pointer]);
    vcd.pointer++;
  }
  //cout<<vcd.time[vcd.pointer-1]<<" "<<vcd.time[vcd.pointer]<<endl;
  index=0;
}

int Wheel::size(int x){
  return wl[x].size();
}
