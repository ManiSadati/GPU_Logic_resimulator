#include<bits/stdc++.h>

using namespace std;

ofstream co;

int main(){
  co.open("test.txt");
  while(true){
    int num,val;
    cin>>num>>val;
    for(int i=0;i<num;i++)
      co<<val<<endl;
  }
}
