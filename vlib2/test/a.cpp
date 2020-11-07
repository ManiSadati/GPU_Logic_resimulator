#include<bits/stdc++.h>
#include"vlib.h"
#include"lib.h"

using namespace std;

int main(){
  string s;
  cin>>s;
  GATE* g=fgate(s);
  int n,m;
  cin>>n>>m;
  while(true){
    VAL* v=g->pos();
    int x;
    for(int i=0;i<n;i++){
      cin>>x;
      cout<<i<<"th"<<endl;
      v[i]=(VAL)x;
    }
    g->function();
    for(int i=n;i<n+m;i++)
      cout<<v[i]<<endl;
  }
}
