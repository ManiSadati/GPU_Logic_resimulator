#include<bits/stdc++.h>
#include "libraryparser.h"

using namespace std;

string check_valid_ascii(string line){
	string s = "";
	for(int i = 0 ; i < line.size(); i++){
		int x = line[i];
		if(x > 31 && x < 127){
			s += line[i];
		}
	}
	return s;
}

bool check_edge(string x, string y){
    if(x == "posedge"){
        if(y == "01" || y == "0x" || y== "x1" || y== "1z" || y== "z1")
            return true;
    }
    if(x == "negedge"){
        if(y == "10" || y == "x0" || y== "1x" || y== "0z" || y== "z0")
            return true;
    }
    return false;
}

string erase_extra_space(string line){
  int n = line.size();
  string s = "";
  int cnt = 0;
  while(line[cnt] == ' '){
    cnt++;
  }
  for(int i = cnt; i < n; i++){
	  bool b = false;
	  int ss = line[i];
	  if(ss == 13 || ss == 9){
		  //cout<<"EE"<<endl;
		  line[i] = ' ';
	  }
    if(line[i] == '(' || line[i] == ')' || line[i] == ',' || line[i] == '.')
      line[i] = ' ';
    if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
      continue;
    if(line[i] == '{' || line[i] == '}' || line[i] == '~' || line[i] == '[')
      s += " ";
    s += line[i];
    if(line[i] == '{' || line[i] == '}' || line[i] == '~' || line[i] == ']')
      s += " ";
  }
  return s;
}

vector<string> get_all_word(string s){
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
  if(t.size())
	v.push_back(t);
  return v;
}

pair<int,int> brackets(string s){
  int cnt = 1;
  int x = 0;
  int y = 0;
  while(s[cnt]<= '9' && s[cnt] >='0'){
    x *= 10;
    x += s[cnt] - '0';
    cnt++;
  }
  cnt++;
  while(cnt < s.size() && s[cnt]<= '9' && s[cnt] >='0'){
    y *= 10;
    y += s[cnt] - '0';
    cnt++;
  }
  return make_pair(x,y);
}
