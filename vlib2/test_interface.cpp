#include<bits/stdc++.h>

using namespace std;

enum value{
  O=0,
  I=1,
  X=2,//unknown
  b=3,//0 or 1
  q=4,//? 0 or 1 or x
  m=5,//- nochange
  vw=6,//
  s=7,//*
  r=8,//
  f=9,//
  p=10,//
  n=11//
};

class GATE{
public:
  virtual void f() =0;
  virtual int* pos() =0;
  virtual void make(GATE* G) =0;
};

class gate:public GATE{
public:
  int n=4;
  void f() override {
    n=50;
  }
  int* pos(){
    return &n;
  }
  void make(GATE* G)override {
    gate g=(*this);
    cout<<this<<" "<<&g<<endl;
    G=&g;
  }
  
};


int main(){
  gate g;
  GATE* G=&g;
  g.make(G);
  int* x=G->pos();
  cout<<x[0]<<endl;
  x[0]=10;
  cout<<x[0]<<endl;
  G->f();
  cout<<x[0]<<endl;
}
