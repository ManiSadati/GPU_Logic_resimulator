#include<bits/stdc++.h>
#include"lib.h"

using namespace std;

VAL operator ! (VAL const &v1){
  if(v1%3==0)
    return I;
  if(v1%3==1)
    return O;
  if(v1%3==2)
    return X;
  return X;
}

int num(VAL* v,int n){
  int x=0;
  for(int i=n-1;i>=0;i--){
    x*=2;
    x+=v[i]%2;
  }
  return x;
}

VAL operator & (VAL const &v1,VAL const &v2){
  int x1=(int)(v1%3);
  int x2=(int)(v2%3);
  if(v1==Z)
    x1=2;
  if(v2==Z)
    x2=2;
  if(x1==0 || x2==0)
    return O;
  if(x1==2 || x2==2)
    return X;
  return I;
}

VAL operator | (VAL const &v1,VAL const &v2){
  int x1=(int)(v1%3);
  int x2=(int)(v2%3);
  if(v1==Z)
    x1=2;
  if(v2==Z)
    x2=2;
  if(x1==1 || x2==1)
    return I;
  if(x1==2 || x2==2)
    return X;
  return O;
}


VAL operator ^ (VAL const &v1,VAL const &v2){
  int x1=(int)(v1%3);
  int x2=(int)(v2%3);
  if(v1==Z)
    x1=2;
  if(v2==Z)
    x2=2;
  if(x1==2 || x2==2)
    return X;
  if(x1==x2)
    return O;
  return I;
}

VAL first(VAL v){
  if(v==O || v==I || v==X || v==Z)
    return v;
  if(v==IO || v==IX)
    return I;
  if(v==OI || v==OX)
    return O;
  if(v==XI || v==XO)
    return X;
  return X;
}


VAL second(VAL v){
  if(v==O || v==I || v==X || v==Z)
    return v;
  if(v==OI || v==XI)
    return I;
  if(v==IO || v==XO)
    return O;
  if(v==IX || v==OX)
    return X;
  return X;
}

VAL join(VAL z1,VAL z2){
  if(z1==z2)
    return z1;
  if(z1==I && z2==O)
    return IO;
  if(z1==O && z2==I)
    return OI;
  if(z1==I && z2==X)
    return IX;
  if(z1==X && z2==I)
    return XI;
  if(z1==O && z2==X)
    return OX;
  if(z1==X && z2==O)
    return XO;
  if(z1==Z || z2==Z)
    return z2;
  return X;
}

bool p_edge(VAL v){
  if(v==OI || v==OX || v==XI)
    return true;
  return false;
}

bool n_edge(VAL v){
  if(v==IO || v==XO || v==IX)
    return true;
  return false;
}

bool pn_edge(VAL v){
  if(p_edge(v) || n_edge(v))
    return true;
  return false;
}

VAL AND_(VAL x1,VAL x2){
  VAL y1,y2;
  y1=first(x1);
  y2=first(x2);
  VAL z1=y1&y2;
  y1=second(x1);
  y2=second(x2);
  VAL z2=y1&y2;
  return join(z1,z2);
}

VAL OR_(VAL x1,VAL x2){
  VAL y1,y2;
  y1=first(x1);
  y2=first(x2);
  VAL z1=y1|y2;
  y1=second(x1);
  y2=second(x2);
  VAL z2=y1|y2;
  return join(z1,z2);
}

VAL XOR_(VAL x1,VAL x2){
  VAL y1,y2;
  y1=first(x1);
  y2=first(x2);
  VAL z1=y1^y2;
  y1=second(x1);
  y2=second(x2);
  VAL z2=y1^y2;
  return join(z1,z2);
}

VAL NOT_(VAL x1){
  VAL y1;
  y1=first(x1);
  VAL z1=!y1;
  y1=second(x1);
  VAL z2=!y1;
  return join(z1,z2);
}

void AND(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=AND_(AND_(AND_(x1,x2),x3),x4);
}
void OR(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=OR_(OR_(OR_(x1,x2),x3),x4);
}
void NOR(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=NOT_(OR_(OR_(OR_(x1,x2),x3),x4));
}
void NAND(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=NOT_(AND_(AND_(AND_(x1,x2),x3),x4));
}
void NOT(VAL &z,VAL x1){
  z=NOT_(x1);
}
void BUF(VAL &z,VAL x1){
  if(x1==Z)
    z=X;
  else
    z=x1;
}
void XOR(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=XOR_(XOR_(XOR_(x1,x2),x3),x4);
}
void XNOR(VAL &z,VAL x1,VAL x2,VAL x3,VAL x4){
  z=NOT_(XOR_(XOR_(XOR_(x1,x2),x3),x4));
}

bool part(VAL v,string s){
  if(s=="0" && v==O)//ehtemalan faghat baiad O bashe baiad beporsam
    return true;
  if(s=="1" && v==I)//baiad faghat I bashe
    return true;
  if(s=="x" && v==X)//baiad faghat X bashe
    return true;
  if(s=="?" &&( v==I || v==X || v==O))
    return true;
  if(s=="*" && v!=I && v!=X && v!=O)//shaiad majbor basham z am azash joda konm.
    return true;
  if(s=="b" && (v==I || v==O))//inam age ona ro doros nakonm eshtebahe
    return true;
  if(s=="01" && v==OI)
    return true;
  if(s=="10" && v==IO)
    return true;
  if(s=="1?" && (v==IO || v==IX))
    return true;
  if(s=="0?" && (v==OI || v==OX))
    return true;
  if(s=="?0" && (v==IO || v==XO))
    return true;
  if(s=="?1" && (v==OI || v==XI))
    return true;
  if(s=="?x" && (v==IX || v==OX))
    return true;
  if(s=="x?" && (v==XO || v==XI))
    return true;
  return false;
}

string udp_dff::s[17][7]={
  { "?" , "?" , "0" , "?" , "?" , "?" , "0" },
  { "?" , "?" , "1" , "0" , "?" , "?" , "1" },
  { "?" , "?" , "1" , "x" , "?" , "0" , "x" },
  { "0" , "01" , "?" , "1" , "?" , "?" , "0" },
  { "0" , "*" , "?" , "1" , "?" , "0" , "0" },
  { "1" , "01" , "1" , "?" , "?" , "?" , "1" },
  { "1" , "*" , "1" , "?" , "?" , "1" , "1" },
  { "?" , "1?" , "1" , "1" , "?" , "?" , "-" },
  { "?" , "?0" , "1" , "1" , "?" , "?" , "-" },
  { "?" , "?" , "?1" , "?" , "?" , "?" , "-" },
  { "?" , "?" , "?" , "?1" , "?" , "?" , "-" },
  { "*" , "?" , "?" , "?" , "?" , "?" , "-" },
  { "?" , "?" , "?" , "?" , "*" , "?" , "x" },
  { "x" , "*" , "?" , "?" , "?" , "1" , "1" },
  { "x" , "*" , "?" , "?" , "?" , "0" , "0" },
  { "x" , "*" , "?" , "?" , "?" , "x" , "0" },
  { "?" , "?" , "1" , "1" , "0" , "x" , "0" }//notifire shoulde be ? or 0?
};

void udp_dff::revert(){
  q=p;
}

void udp_dff::function(VAL &qp,VAL d,VAL clk,VAL clr,VAL set,VAL notifier){
  //cout<<d<<" "<<clk<<" "<<clr<<" "<<set<<" "<<notifier<<" "<<q<<endl;
  //cout<<s[3][0]<<" "<<s[3][1]<<" "<<s[3][2]<<" "<<s[3][3]<<" "<<s[3][4]<<" "<<s[3][5]<<endl;
  for(int i=0;i<17;i++){
    if(part(d,s[i][0]) && part(clk,s[i][1]) && part(clr,s[i][2]) && part(set,s[i][3]) && part(notifier,s[i][4]) && part(q,s[i][5])){
      //cout<<"row "<<i<<endl;
      if(s[i][6]=="1")
	qp=I;
      if(s[i][6]=="0")
	qp=O;
      if(s[i][6]=="x")
	qp=X;
      if(s[i][6]=="-")
	qp=q;
      p=q;
      q=qp;
      return;
    }
  }
  for(int i=0;i<17;i++){
    if(part(second(d),s[i][0]) && part(second(clk),s[i][1]) && part(second(clr),s[i][2]) && part(second(set),s[i][3]) && part(second(notifier),s[i][4]) && part(second(q),s[i][5])){
      //cout<<"row "<<i<<endl;
      if(s[i][6]=="1")
	qp=I;
      if(s[i][6]=="0")
	qp=O;
      if(s[i][6]=="x")
	qp=X;
      if(s[i][6]=="-")
	qp=q;
      p=q;
      q=qp;
      return;
    }
  }
  qp=X;
  p=q;
  q=qp;
  //qp=q;
}

string udp_tlat::s[13][7]={
  { "1" , "1" , "1" , "1" , "?" , "?" , "1" },
  { "0" , "1" , "1" , "1" , "?" , "?" , "0" },
  { "0" , "10" , "1" , "1" , "?" , "?" , "0" },
  { "1" , "10" , "1" , "1" , "?" , "?" , "1" },
  { "*" , "0" , "?" , "?" , "?" , "?" , "-" },
  { "?" , "?" , "?" , "0" , "?" , "?" , "1" },
  { "?" , "0" , "1" , "*" , "?" , "1" , "1" },
  { "1" , "?" , "1" , "*" , "?" , "1" , "1" },
  { "1" , "*" , "1" , "?" , "?" , "1" , "1" },
  { "?" , "?" , "0" , "1" , "?" , "?" , "0" },
  { "?" , "0" , "*" , "1" , "?" , "0" , "0" },
  { "0" , "?" , "*" , "1" , "?" , "0" , "0" },
  { "0" , "*" , "?" , "1" , "?" , "0" , "0" }
};

void udp_tlat::revert(){
  q=p;
}

void udp_tlat::function(VAL &qp,VAL d,VAL clk,VAL clr,VAL set,VAL notifier){
  for(int i=0;i<13;i++){
    //cout<<i<<endl;
    if(part(d,s[i][0]) && part(clk,s[i][1]) && part(clr,s[i][2]) && part(set,s[i][3]) && part(notifier,s[i][4]) && part(q,s[i][5])){
      //cout<<"row "<<i<<endl;
      if(s[i][6]=="1")
	qp=I;
      if(s[i][6]=="0")
	qp=O;
      if(s[i][6]=="x")
	qp=X;
      if(s[i][6]=="-")
	qp=q;
      p=q;
      q=qp;
      return;
    }
  }
  
  for(int i=0;i<17;i++){
    if(part(second(d),s[i][0]) && part(second(clk),s[i][1]) && part(second(clr),s[i][2]) && part(second(set),s[i][3]) && part(second(notifier),s[i][4]) && part(second(q),s[i][5])){
      //cout<<"row "<<i<<endl;
      if(s[i][6]=="1")
	qp=I;
      if(s[i][6]=="0")
	qp=O;
      if(s[i][6]=="x")
	qp=X;
      if(s[i][6]=="-")
	qp=q;
      p=q;
      q=qp;
      return;
    }
  }
  qp=X;
  p=q;
  q=qp;
  //qp=q;
}

string udp_mux2::s[6][4]={
  { "1" , "?" , "0" , "1" },
  { "0" , "?" , "0" , "0" },
  { "?" , "1" , "1" , "1" },
  { "?" , "0" , "1" , "0" },
  { "0" , "0" , "x" , "0" },
  { "1" , "1" , "x" , "1" }
};

void udp_mux2::function(VAL &z,VAL i0,VAL i1,VAL S){
  VAL z1=Z,z2=Z;
  for(int i=0;i<6;i++){
    if(part(second(i0),s[i][0]) && part(second(i1),s[i][1]) && part(second(S),s[i][2])){
      if(s[i][3]=="1")
	z1=I;
      if(s[i][3]=="0")
	z1=O;
      if(s[i][3]=="x")
	z1=X;
      //return;
    }
  }
  if(z1==Z)
    z1=X;
  for(int i=0;i<6;i++){
    if(part(first(i0),s[i][0]) && part(first(i1),s[i][1]) && part(first(S),s[i][2])){
      if(s[i][3]=="1")
	z2=I;
      if(s[i][3]=="0")
	z2=O;
      if(s[i][3]=="x")
	z2=X;
      //return;
    }
  }
  if(z2=Z)
    z2=X;
  z=join(z2,z1);
}

string udp_xbuf::s[3][3]={
  { "0" , "1" , "0" },
  { "1" , "1" , "1" },
  { "x" , "1" , "1" }
};


void udp_xbuf::function(VAL &o,VAL i0,VAL check_signal){
  VAL o1=Z,o2=Z;
  for(int i=0;i<3;i++){
    if(part(second(i0),s[i][0]) && part(second(check_signal),s[i][1])){
      if(s[i][2]=="1")
	o2=I;
      if(s[i][2]=="0")
	o2=O;
      if(s[i][2]=="x")
	o2=X;
      //return;
    }
  }
  if(o2==Z)
    o2=X;
  for(int i=0;i<3;i++){
    if(part(first(i0),s[i][0]) && part(first(check_signal),s[i][1])){
      if(s[i][2]=="1")
	o1=I;
      if(s[i][2]=="0")
	o1=O;
      if(s[i][2]=="x")
	o1=X;
      //return;
    }
  }
  if(o1==Z)
    o1=X;
  o=join(o1,o2);
}
/*
int main(){
  VAL x1,x2,x3,x4;
  while(true){
    int x;
    cin>>x;
    x1=(VAL)x;
    cin>>x;
    x2=(VAL)x;
    cin>>x;
    x3=(VAL)x;
    cin>>x;
    x4=(VAL)x;
    VAL z;
    OR(z,x1,x2,x3,x4);
    cout<<z<<endl;
  }
  udp_tlat df;
  VAL z;
  VAL a[5];
  while(true){
    for(int i=0;i<5;i++){
      int x;
      cin>>x;
      a[i]=(VAL)x;
    }
    df.function(z,a[0],a[1],a[2],a[3],a[4]);
    cout<<z<<endl;
  }
}
*/
