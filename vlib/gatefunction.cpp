#include<bits/stdc++.h>
#include "gatefunction.h"

using namespace std;

// 0->0 1->1 x->2 z->3

string and_table[4][4] = {{"0","0","0","0"},{"0","1","x","x"},{"0","x","x","x"},{"0","x","x","x"}};
string or_table[4][4] = {{"0","1","x","x"},{"1","1","1","1"},{"x","1","x","x"},{"x","1","x","x"}};
string xor_table[4][4] = {{"0","1","x","x"},{"1","0","x","x"},{"x","x","x","x"},{"x","x","x","x"}};

string not_table[4] = {"1","0","x","x"};
string buf_table[4] = {"0","1","x","x"};

vector<int> simple_logicv(vector<string> v){
  vector<int> v1;
  for(int i = 0; i < v.size() ; i++){
    int sz = v[i].size();
    v1.push_back(1);
    if(v[i][sz - 1] == '0'){
      v1[i] = 0;
    }
    if(v[i][sz - 1] == '1'){
      v1[i] = 1;
    }
    if(v[i][sz - 1] == 'x'){
      v1[i] = 2;
    }
    if(v[i][sz - 1] == 'z'){
      v1[i] = 2;
    }
    if(v[i][sz - 1] == '?'){
      v1[i] = 0;
    }
  }
  return v1;
}

int simple_logic(string v){
  int sz = v.size();
  int v1;
  if(v[sz - 1] == '0'){
    v1 = 0;
  }
  if(v[sz - 1] == '1'){
    v1 = 1;
  }
  if(v[sz - 1] == 'x'){
    v1 = 2;
  }
  if(v[sz - 1] == 'z'){
    v1 = 2;
  }
  if(v[sz - 1] == '?'){
    v1 = 2;
  }
  return v1;
}

string and_gate(vector<string> v1){
  vector<int> v = simple_logicv(v1);
  string ans = v1[0];
  for(int i = 1; i < v.size(); i++){
    ans = and_table[simple_logic(ans)][v[i]];
  }
  return ans;
}

string or_gate(vector<string> v1){
  vector<int> v = simple_logicv(v1);
  string ans = v1[0];
  for(int i = 1; i < v.size(); i++){
    ans = or_table[simple_logic(ans)][v[i]];
  }
  return ans;
}

string xor_gate(vector<string> v1){
  vector<int> v = simple_logicv(v1);
  string ans = v1[0];
  for(int i = 1; i < v.size(); i++){
    ans = xor_table[simple_logic(ans)][v[i]];
  }
  return ans;
}

string not_gate(string v1){
  int v = simple_logic(v1);
  string ans = not_table[v];
  return ans;
}

string buf_gate(string v1){
  int v = simple_logic(v1);
  string ans = buf_table[v];
  return ans;
}

string nand_gate(vector<string> v1){
  string ans = and_gate(v1);
  return not_gate(ans);
}

string nor_gate(vector<string> v1){
  string ans = or_gate(v1);
  return not_gate(ans);
}

string xnor_gate(vector<string> v1){
  string ans = xor_gate(v1);
  return not_gate(ans);
}
