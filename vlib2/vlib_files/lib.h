#ifndef LIB_H
#define LIB_H
#include<bits/stdc++.h>

using namespace std;

enum VAL: uint8_t{
  O=0,
  I=1,
  X=2,//unknown
  IO=11,//N
  OI=4,//P
  OX=5,//P
  XO=6,//N
  XI=7,//P
  IX=8,//N
  Z=3
};


int num(VAL* v,int n);
VAL operator ! (VAL const &v1);
VAL operator & (VAL const &v1,VAL const &v2);
VAL operator | (VAL const &v1,VAL const &v2);
VAL operator ^ (VAL const &v1,VAL const &v2);
void AND(VAL &z,VAL x1,VAL x2,VAL x3=I,VAL x4=I);
void OR(VAL &z,VAL x1,VAL x2,VAL x3=O,VAL x4=O);
void NOR(VAL &z,VAL x1,VAL x2,VAL x3=O,VAL x4=O);
void NAND(VAL &z,VAL x1,VAL x2,VAL x3=I,VAL x4=I);
void NOT(VAL &z,VAL x1);
void BUF(VAL &z,VAL x1);
void XOR(VAL &z,VAL x1,VAL x2,VAL x3=O,VAL x4=O);
void XNOR(VAL &z,VAL x1,VAL x2,VAL x3=O,VAL x4=O);

class udp_dff{
public:
  static string s[17][7];
  VAL q=X;
  VAL p=X;
  void revert();
  void function(VAL &qp,VAL d,VAL clk,VAL clr,VAL set,VAL notifier);
};


class udp_tlat{
public:
  static string s[13][7];
  VAL q=X;
  VAL p=X;
  void revert();
  void function(VAL &qp,VAL d,VAL clk,VAL clr,VAL set,VAL notifier);
};


class udp_mux2{
public:
  static string s[6][4];
  void function(VAL &z,VAL i0,VAL i1,VAL S);
};


class udp_xbuf{
public:
  static string s[3][3];
  void function(VAL &o,VAL i0,VAL check_signal);
};


class GATE{
public:
  virtual void function() = 0;
  virtual VAL* pos() = 0;
  virtual void revert() = 0;
};


bool part(VAL v,string s);
VAL first(VAL v);
VAL second(VAL v);
VAL join(VAL z1,VAL z2);
bool p_edge(VAL v);
bool n_edge(VAL v);
bool pn_edge(VAL v);
#endif
