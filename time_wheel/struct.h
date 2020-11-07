#ifndef STRUCT_H
#define STRUCT_H
#include<bits/stdc++.h>

using namespace std;

class vcd_struct{
public:
  int pointer=0;
  vector<long long int> time;
  vector<int> gate;
  void add(long long int t,int g);
};

class Wheel{
 public:
  static const int maxn;
  long long int curent_time=0;
  int index=0;
  set<int> wl[100];
  void add(long long int time,int comp);
  int get(int in);
  void read(vcd_struct &vcd,long long int t);
  int size(int i);
};

#endif
