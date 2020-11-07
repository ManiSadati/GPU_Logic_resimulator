#ifndef VLIB_H
#define VLIB_H
#include"lib.h"
#include<bits/stdc++.h>
using namespace std;

class GEN_AND2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_AND2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_AND2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_AND2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_AND3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_AND3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_AND3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_AND3_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_AND4_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_AND4_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_AND4_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_AND4_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_AO211_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_AO211_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_AO211_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_AO21_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_AO21_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_AO21_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_AO221_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_AO221_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_AO221_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_AO222_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_AO222_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_AO222_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_AO22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO22_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO31_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_AO31_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_AO31_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_AO32_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO32_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO32_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_AO33_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_AO33_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_AO33_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_AOI211_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_AOI211_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_AOI211_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_AOI21_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_AOI21_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_AOI21_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_AOI221_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_AOI221_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_AOI221_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_AOI222_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_AOI222_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_AOI222_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_AOI22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI31_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_AOI31_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_AOI31_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_AOI32_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI32_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI32_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_AOI33_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_AOI33_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_AOI33_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_BUF_D1:public GATE{
public:
  VAL i=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &z);
};
class GEN_BUF_D2:public GATE{
public:
  VAL i=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &z);
};
class GEN_BUF_D4:public GATE{
public:
  VAL i=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &z);
};
class GEN_BUF_D8:public GATE{
public:
  VAL i=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &z);
};
class GEN_FA_D1:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL ci=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co);
};
class GEN_FA_D2:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL ci=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co);
};
class GEN_FA_D4:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL ci=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co);
};
class GEN_HA_D1:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &s,VAL &co);
};
class GEN_HA_D2:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &s,VAL &co);
};
class GEN_HA_D4:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL s=X;
  VAL co=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &s,VAL &co);
};
class GEN_INV_D1:public GATE{
public:
  VAL i=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &zn);
};
class GEN_INV_D2:public GATE{
public:
  VAL i=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &zn);
};
class GEN_INV_D4:public GATE{
public:
  VAL i=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &zn);
};
class GEN_INV_D8:public GATE{
public:
  VAL i=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i,VAL &zn);
};
class GEN_MAJORITYAOI222_D1:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &c,VAL &zn);
};
class GEN_MAJORITYAOI222_D2:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &c,VAL &zn);
};
class GEN_MAJORITYAOI222_D4:public GATE{
public:
  VAL a=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a,VAL &b,VAL &c,VAL &zn);
};
class GEN_MAJORITYAOI22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_MAJORITYAOI22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_MAJORITYAOI22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_MAJORITYOAI22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_MAJORITYOAI22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_MAJORITYOAI22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_LATCH_D1:public GATE{
public:
  VAL d=X;
  VAL e=X;
  VAL q=X;
  VAL notifier=X;
udp_tlat udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &e,VAL &q);
};
class GEN_LATCH_D2:public GATE{
public:
  VAL d=X;
  VAL e=X;
  VAL q=X;
  VAL notifier=X;
udp_tlat udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &e,VAL &q);
};
class GEN_LATCH_D4:public GATE{
public:
  VAL d=X;
  VAL e=X;
  VAL q=X;
  VAL notifier=X;
udp_tlat udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &e,VAL &q);
};
class GEN_DFCLR_D1:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_DFCLR_D2:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_DFCLR_D4:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_DFCLR_D8:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_DF_D1:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &q);
};
class GEN_DF_D2:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &q);
};
class GEN_DF_D4:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &q);
};
class GEN_DF_D8:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &q);
};
class GEN_DFSET_D1:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_DFSET_D2:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_DFSET_D4:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_DFSET_D8:public GATE{
public:
  VAL d=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_dff udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &d,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_MUX2_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL z=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &z);
};
class GEN_MUX2_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL z=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &z);
};
class GEN_MUX2_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL z=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &z);
};
class GEN_MUX2N_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL zn=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &zn);
};
class GEN_MUX2N_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL zn=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &zn);
};
class GEN_MUX2N_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL s=X;
  VAL zn=X;
udp_mux2 udpi0;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &s,VAL &zn);
};
class GEN_MUX3_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX3_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX3_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX3N_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_MUX3N_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_MUX3N_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_MUX4_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX4_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX4_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL z=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z);
};
class GEN_MUX4N_D1:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_MUX4N_D2:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_MUX4N_D4:public GATE{
public:
  VAL i0=X;
  VAL i1=X;
  VAL i2=X;
  VAL i3=X;
  VAL s0=X;
  VAL s1=X;
  VAL zn=X;
udp_mux2 udpi0;
udp_mux2 udpi1;
udp_mux2 udpi2;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn);
};
class GEN_NAND2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NAND2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NAND2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NAND2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NAND3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NAND3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NAND3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NAND3_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NAND4_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NAND4_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NAND4_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NAND4_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NOR2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NOR2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NOR2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NOR2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_NOR3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NOR3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NOR3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NOR3_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_NOR4_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NOR4_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NOR4_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_NOR4_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn);
};
class GEN_OA211_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_OA211_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_OA211_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z);
};
class GEN_OA21_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_OA21_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_OA21_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &z);
};
class GEN_OA221_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_OA221_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_OA221_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z);
};
class GEN_OA222_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_OA222_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_OA222_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z);
};
class GEN_OA22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA31_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_OA31_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_OA31_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z);
};
class GEN_OA32_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA32_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA32_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z);
};
class GEN_OA33_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_OA33_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_OA33_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z);
};
class GEN_OAI211_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_OAI211_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_OAI211_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn);
};
class GEN_OAI21_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_OAI21_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_OAI21_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b,VAL &zn);
};
class GEN_OAI221_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_OAI221_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_OAI221_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn);
};
class GEN_OAI222_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_OAI222_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_OAI222_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL c1=X;
  VAL c2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn);
};
class GEN_OAI22_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI22_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI22_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI31_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_OAI31_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_OAI31_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn);
};
class GEN_OAI32_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI32_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI32_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn);
};
class GEN_OAI33_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_OAI33_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_OAI33_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL b1=X;
  VAL b2=X;
  VAL b3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn);
};
class GEN_OR2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_OR2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_OR2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_OR2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_OR3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_OR3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_OR3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_OR3_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_OR4_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_OR4_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_OR4_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_OR4_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL a4=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z);
};
class GEN_SCAN_DFCLR_D1:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_SCAN_DFCLR_D2:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_SCAN_DFCLR_D4:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_SCAN_DFCLR_D8:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL cdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q);
};
class GEN_SCAN_DF_D1:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q);
};
class GEN_SCAN_DF_D2:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q);
};
class GEN_SCAN_DF_D4:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q);
};
class GEN_SCAN_DF_D8:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q);
};
class GEN_SCAN_DFSET_D1:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_SCAN_DFSET_D2:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_SCAN_DFSET_D4:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_SCAN_DFSET_D8:public GATE{
public:
  VAL si=X;
  VAL d=X;
  VAL se=X;
  VAL cp=X;
  VAL sdn=X;
  VAL q=X;
  VAL notifier=X;
udp_mux2 udpi0;
udp_dff udpi1;
udp_xbuf udpi2;
udp_xbuf udpi3;
udp_xbuf udpi4;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q);
};
class GEN_XNOR2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_XNOR2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_XNOR2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_XNOR2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &zn);
};
class GEN_XNOR3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_XNOR3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_XNOR3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL zn=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &zn);
};
class GEN_XOR2_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_XOR2_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_XOR2_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_XOR2_D8:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &z);
};
class GEN_XOR3_D1:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_XOR3_D2:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_XOR3_D4:public GATE{
public:
  VAL a1=X;
  VAL a2=X;
  VAL a3=X;
  VAL z=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &a1,VAL &a2,VAL &a3,VAL &z);
};
class GEN_CLKGATE_D1:public GATE{
public:
  VAL te=X;
  VAL e=X;
  VAL cp=X;
  VAL q=X;
  VAL qd=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &te,VAL &e,VAL &cp,VAL &q);
};
class GEN_SYNC2C_D1:public GATE{
public:
  VAL clk=X;
  VAL d=X;
  VAL clr_=X;
  VAL q=X;
  VAL d0=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &clk,VAL &d,VAL &clr_,VAL &q);
};
class GEN_SYNC3_D1:public GATE{
public:
  VAL clk=X;
  VAL d=X;
  VAL q=X;
  VAL d1=X, d0=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &clk,VAL &d,VAL &q);
};
class GEN_SYNC3S_D1:public GATE{
public:
  VAL clk=X;
  VAL d=X;
  VAL set_=X;
  VAL q=X;
  VAL d1=X,d0=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &clk,VAL &d,VAL &set_,VAL &q);
};
class GEN_RAMS_16X272:public GATE{
public:
  VAL clk=X;
  VAL ra [4];
  VAL re=X;
  VAL wa [4];
  VAL we=X;
  VAL di [272];
  VAL dout [272];
  VAL ra_d [4];
  VAL M [16] [272];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_16X256:public GATE{
public:
  VAL clk=X;
  VAL ra [4];
  VAL re=X;
  VAL wa [4];
  VAL we=X;
  VAL di [256];
  VAL dout [256];
  VAL ra_d [4];
  VAL M [16] [256];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_80x14:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [14];
  VAL dout [14];
  VAL ra_d [7];
  VAL M [80] [14];
  VAL dout_r [14];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_80x65:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [65];
  VAL dout [65];
  VAL ra_d [7];
  VAL M [80] [65];
  VAL dout_r [65];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_160x16:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL ore=X;
  VAL wa [8];
  VAL we=X;
  VAL di [16];
  VAL dout [16];
  VAL ra_d [8];
  VAL M [160] [16];
  VAL dout_r [16];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_160x65:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL ore=X;
  VAL wa [8];
  VAL we=X;
  VAL di [65];
  VAL dout [65];
  VAL ra_d [8];
  VAL M [160] [65];
  VAL dout_r [65];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_8x65:public GATE{
public:
  VAL clk=X;
  VAL ra [3];
  VAL re=X;
  VAL ore=X;
  VAL wa [3];
  VAL we=X;
  VAL di [65];
  VAL dout [65];
  VAL ra_d [3];
  VAL M [8] [65];
  VAL dout_r [65];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_128x6:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [6];
  VAL dout [6];
  VAL ra_d [7];
  VAL M [128] [6];
  VAL dout_r [6];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_256x64:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL wa [8];
  VAL we=X;
  VAL di [64];
  VAL dout [64];
  VAL ra_d [8];
  VAL M [256] [64];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_16x64:public GATE{
public:
  VAL clk=X;
  VAL ra [4];
  VAL re=X;
  VAL wa [4];
  VAL we=X;
  VAL di [64];
  VAL dout [64];
  VAL ra_d [4];
  VAL M [16] [64];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_128x11:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [11];
  VAL dout [11];
  VAL ra_d [7];
  VAL M [128] [11];
  VAL dout_r [11];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_61x65:public GATE{
public:
  VAL clk=X;
  VAL ra [6];
  VAL re=X;
  VAL ore=X;
  VAL wa [6];
  VAL we=X;
  VAL di [65];
  VAL dout [65];
  VAL ra_d [6];
  VAL M [61] [65];
  VAL dout_r [65];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_80x9:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [9];
  VAL byp_sel=X;
  VAL dbyp [9];
  VAL dout [9];
  VAL ra_d [7];
  VAL M [80] [9];
  VAL dout_r [9];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_80x15:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL ore=X;
  VAL wa [7];
  VAL we=X;
  VAL di [15];
  VAL byp_sel=X;
  VAL dbyp [15];
  VAL dout [15];
  VAL ra_d [7];
  VAL M [80] [15];
  VAL dout_r [15];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_60x21:public GATE{
public:
  VAL clk=X;
  VAL ra [6];
  VAL re=X;
  VAL ore=X;
  VAL wa [6];
  VAL we=X;
  VAL di [21];
  VAL byp_sel=X;
  VAL dbyp [21];
  VAL dout [21];
  VAL ra_d [6];
  VAL M [60] [21];
  VAL dout_r [21];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_256x8:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL wa [8];
  VAL we=X;
  VAL di [8];
  VAL dout [8];
  VAL ra_d [8];
  VAL M [256] [8];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_256x7:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL wa [8];
  VAL we=X;
  VAL di [7];
  VAL dout [7];
  VAL ra_d [8];
  VAL M [256] [7];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_256x3:public GATE{
public:
  VAL clk=X;
  VAL ra [8];
  VAL re=X;
  VAL wa [8];
  VAL we=X;
  VAL di [3];
  VAL dout [3];
  VAL ra_d [8];
  VAL M [256] [3];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_19x4:public GATE{
public:
  VAL clk=X;
  VAL ra [5];
  VAL re=X;
  VAL ore=X;
  VAL wa [5];
  VAL we=X;
  VAL di [4];
  VAL byp_sel=X;
  VAL dbyp [4];
  VAL dout [4];
  VAL ra_d [5];
  VAL M [19] [4];
  VAL dout_r [4];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_128x18:public GATE{
public:
  VAL clk=X;
  VAL ra [7];
  VAL re=X;
  VAL wa [7];
  VAL we=X;
  VAL di [18];
  VAL dout [18];
  VAL ra_d [7];
  VAL M [128] [18];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_SYNC3C_D1:public GATE{
public:
  VAL clk ;
  VAL d ;
  VAL clr_ ;
  VAL q ;
  VAL d1=X,d0=X;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &clk,VAL &d,VAL &clr_,VAL &q);
};
class GEN_SYNC3C_STRICT_D1:public GATE{
public:
  VAL src_d_next ;
  VAL src_clk ;
  VAL src_clrn ;
  VAL dst_clk ;
  VAL dst_clrn ;
  VAL atpg_ctl ;
  VAL test_mode ;
  VAL src_d ;
  VAL dst_q ;
  VAL  src_d_f=X;
GEN_SYNC3C_D1 sync3d;
void revert()override;
VAL* pos()override;
void function()override;
void function(VAL &src_d_next,VAL &src_clk,VAL &src_clrn,VAL &dst_clk,VAL &dst_clrn,VAL &src_d,VAL &dst_q,VAL &atpg_ctl,VAL &test_mode);
};
class GEN_RAMS_512x256:public GATE{
public:
VAL clk=X;
VAL ra [9];
VAL re=X;
VAL wa [9];
VAL we=X;
VAL di [256];
VAL dout [256];
VAL ra_d [9];
VAL M [512] [256];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_64x116:public GATE{
public:
VAL clk=X;
VAL ra [6];
VAL re=X;
VAL wa [6];
VAL we=X;
VAL di [116];
VAL dout [116];
VAL ra_d [6];
VAL M [64] [116];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_64x1088:public GATE{
public:
VAL clk=X;
VAL ra [6];
VAL re=X;
VAL wa [6];
VAL we=X;
VAL di [1088];
VAL dout [1088];
VAL ra_d [6];
VAL M [64] [1088];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_64x1024:public GATE{
public:
VAL clk=X;
VAL ra [6];
VAL re=X;
VAL wa [6];
VAL we=X;
VAL di [1024];
VAL dout [1024];
VAL ra_d [6];
VAL M [64] [1024];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_256x14:public GATE{
public:
VAL clk=X;
VAL ra [8];
VAL re=X;
VAL ore=X;
VAL wa [8];
VAL we=X;
VAL di [14];
VAL dout [14];
VAL ra_d [8];
VAL M [256] [14];
  VAL dout_r [14];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_256x16:public GATE{
public:
VAL clk=X;
VAL ra [8];
VAL re=X;
VAL ore=X;
VAL wa [8];
VAL we=X;
VAL di [16];
VAL dout [16];
VAL ra_d [8];
VAL M [256] [16];
  VAL dout_r [16];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_256x257:public GATE{
public:
VAL clk=X;
VAL ra [8];
VAL re=X;
VAL ore=X;
VAL wa [8];
VAL we=X;
VAL di [257];
VAL dout [257];
VAL ra_d [8];
VAL M [256] [257];
  VAL dout_r [257];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_OLAT_8x257:public GATE{
public:
VAL clk=X;
VAL ra [3];
VAL re=X;
VAL ore=X;
VAL wa [3];
VAL we=X;
VAL di [257];
VAL dout [257];
VAL ra_d [3];
VAL M [8] [257];
  VAL dout_r [257];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_80x72:public GATE{
public:
VAL clk=X;
VAL ra [7];
VAL re=X;
VAL ore=X;
VAL wa [7];
VAL we=X;
VAL di [72];
VAL byp_sel=X;
VAL dbyp [72];
VAL dout [72];
VAL ra_d [7];
VAL M [80] [72];
  VAL dout_r [72];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_80x17:public GATE{
public:
VAL clk=X;
VAL ra [7];
VAL re=X;
VAL ore=X;
VAL wa [7];
VAL we=X;
VAL di [17];
VAL byp_sel=X;
VAL dbyp [17];
VAL dout [17];
VAL ra_d [7];
VAL M [80] [17];
  VAL dout_r [17];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_60x168:public GATE{
public:
VAL clk=X;
VAL ra [6];
VAL re=X;
VAL ore=X;
VAL wa [6];
VAL we=X;
VAL di [168];
VAL byp_sel=X;
VAL dbyp [168];
VAL dout [168];
VAL ra_d [6];
VAL M [60] [168];
  VAL dout_r [168];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_WT_IPASS_OLAT_20x32:public GATE{
public:
VAL clk=X;
VAL ra [5];
VAL re=X;
VAL ore=X;
VAL wa [5];
VAL we=X;
VAL di [32];
VAL byp_sel=X;
VAL dbyp [32];
VAL dout [32];
VAL ra_d [5];
VAL M [20] [32];
  VAL dout_r [32];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE21_64x21:public GATE{
public:
VAL clk=X;
VAL a [6];
VAL we=X;
VAL wce=X;
VAL re=X;
VAL di [21];
VAL dout [21];
VAL    M [64][21];
VAL ra_d [6];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE32_1024x32:public GATE{
public:
VAL clk=X;
VAL a [10];
VAL we=X;
VAL wce=X;
VAL re=X;
VAL di [32];
VAL dout [32];
VAL    M [1024][32];
VAL ra_d [10];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE8_4096x32:public GATE{
public:
VAL clk=X;
VAL a [12];
VAL we [4];
VAL wce=X;
VAL re=X;
VAL di [32];
VAL dout [32];
VAL    M [4096][32];
VAL ra_d [12];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE22_64x88:public GATE{
public:
VAL clk=X;
VAL a [6];
VAL we [4];
VAL wce=X;
VAL re=X;
VAL di [88];
VAL dout [88];
VAL    M [64][88];
VAL ra_d [6];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE8_512x256:public GATE{
public:
VAL clk=X;
VAL a [9];
VAL we [32];
VAL wce=X;
VAL re=X;
VAL di [256];
VAL dout [256];
VAL    M [512][256];
VAL ra_d [9];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE21_64x84:public GATE{
public:
VAL clk=X;
VAL a [6];
VAL we [4];
VAL wce=X;
VAL re=X;
VAL di [84];
VAL dout [84];
VAL    M [64][84];
VAL ra_d [6];
void revert()override;
VAL* pos()override;
void function()override;
};
class GEN_RAMS_SP_WENABLE32_512x128:public GATE{
public:
VAL clk=X;
VAL a [9];
VAL we [4];
VAL wce=X;
VAL re=X;
VAL di [128];
VAL dout [128];
VAL    M [512][128];
VAL ra_d [9];
void revert()override;
VAL* pos()override;
void function()override;
};

GATE* fgate(string s);
#endif
