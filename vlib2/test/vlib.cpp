#include<bits/stdc++.h>
#include"lib.h"
#include"vlib.h"
using namespace std;

VAL* GEN_AND2_D1::pos(){
  return &a1;
}
void GEN_AND2_D1::function(){
  AND (z, a1, a2);
}
void GEN_AND2_D1::function(VAL &a1,VAL &a2,VAL &z){
  AND (z, a1, a2);
}
VAL* GEN_AND2_D2::pos(){
  return &a1;
}
void GEN_AND2_D2::function(){
  AND (z, a1, a2);
}
void GEN_AND2_D2::function(VAL &a1,VAL &a2,VAL &z){
  AND (z, a1, a2);
}
VAL* GEN_AND2_D4::pos(){
  return &a1;
}
void GEN_AND2_D4::function(){
  AND (z, a1, a2);
}
void GEN_AND2_D4::function(VAL &a1,VAL &a2,VAL &z){
  AND (z, a1, a2);
}
VAL* GEN_AND2_D8::pos(){
  return &a1;
}
void GEN_AND2_D8::function(){
  AND (z, a1, a2);
}
void GEN_AND2_D8::function(VAL &a1,VAL &a2,VAL &z){
  AND (z, a1, a2);
}
VAL* GEN_AND3_D1::pos(){
  return &a1;
}
void GEN_AND3_D1::function(){
  AND (z, a1, a2, a3);
}
void GEN_AND3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  AND (z, a1, a2, a3);
}
VAL* GEN_AND3_D2::pos(){
  return &a1;
}
void GEN_AND3_D2::function(){
  AND (z, a1, a2, a3);
}
void GEN_AND3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  AND (z, a1, a2, a3);
}
VAL* GEN_AND3_D4::pos(){
  return &a1;
}
void GEN_AND3_D4::function(){
  AND (z, a1, a2, a3);
}
void GEN_AND3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  AND (z, a1, a2, a3);
}
VAL* GEN_AND3_D8::pos(){
  return &a1;
}
void GEN_AND3_D8::function(){
  AND (z, a1, a2, a3);
}
void GEN_AND3_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  AND (z, a1, a2, a3);
}
VAL* GEN_AND4_D1::pos(){
  return &a1;
}
void GEN_AND4_D1::function(){
  AND (z, a1, a2, a3, a4);
}
void GEN_AND4_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  AND (z, a1, a2, a3, a4);
}
VAL* GEN_AND4_D2::pos(){
  return &a1;
}
void GEN_AND4_D2::function(){
  AND (z, a1, a2, a3, a4);
}
void GEN_AND4_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  AND (z, a1, a2, a3, a4);
}
VAL* GEN_AND4_D4::pos(){
  return &a1;
}
void GEN_AND4_D4::function(){
  AND (z, a1, a2, a3, a4);
}
void GEN_AND4_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  AND (z, a1, a2, a3, a4);
}
VAL* GEN_AND4_D8::pos(){
  return &a1;
}
void GEN_AND4_D8::function(){
  AND (z, a1, a2, a3, a4);
}
void GEN_AND4_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  AND (z, a1, a2, a3, a4);
}
VAL* GEN_AO211_D1::pos(){
  return &a1;
}
void GEN_AO211_D1::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
void GEN_AO211_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
VAL* GEN_AO211_D2::pos(){
  return &a1;
}
void GEN_AO211_D2::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
void GEN_AO211_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
VAL* GEN_AO211_D4::pos(){
  return &a1;
}
void GEN_AO211_D4::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
void GEN_AO211_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b, c);
}
VAL* GEN_AO21_D1::pos(){
  return &a1;
}
void GEN_AO21_D1::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
void GEN_AO21_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
VAL* GEN_AO21_D2::pos(){
  return &a1;
}
void GEN_AO21_D2::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
void GEN_AO21_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
VAL* GEN_AO21_D4::pos(){
  return &a1;
}
void GEN_AO21_D4::function(){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
void GEN_AO21_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2);
  OR (z, net0, b);
}
VAL* GEN_AO221_D1::pos(){
  return &a1;
}
void GEN_AO221_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
void GEN_AO221_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
VAL* GEN_AO221_D2::pos(){
  return &a1;
}
void GEN_AO221_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
void GEN_AO221_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
VAL* GEN_AO221_D4::pos(){
  return &a1;
}
void GEN_AO221_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
void GEN_AO221_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (z, net0, net1, c);
}
VAL* GEN_AO222_D1::pos(){
  return &a1;
}
void GEN_AO222_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
void GEN_AO222_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
VAL* GEN_AO222_D2::pos(){
  return &a1;
}
void GEN_AO222_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
void GEN_AO222_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
VAL* GEN_AO222_D4::pos(){
  return &a1;
}
void GEN_AO222_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
void GEN_AO222_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR  (z, net0, net1, net2);
}
VAL* GEN_AO22_D1::pos(){
  return &a1;
}
void GEN_AO22_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
void GEN_AO22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
VAL* GEN_AO22_D2::pos(){
  return &a1;
}
void GEN_AO22_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
void GEN_AO22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
VAL* GEN_AO22_D4::pos(){
  return &a1;
}
void GEN_AO22_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
void GEN_AO22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
VAL* GEN_AO22_D8::pos(){
  return &a1;
}
void GEN_AO22_D8::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
void GEN_AO22_D8::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2);
  OR  (z, net0, net1);
}
VAL* GEN_AO31_D1::pos(){
  return &a1;
}
void GEN_AO31_D1::function(){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
void GEN_AO31_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
VAL* GEN_AO31_D2::pos(){
  return &a1;
}
void GEN_AO31_D2::function(){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
void GEN_AO31_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
VAL* GEN_AO31_D4::pos(){
  return &a1;
}
void GEN_AO31_D4::function(){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
void GEN_AO31_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  AND (net0, a1, a2, a3);
  OR (z, net0, b);
}
VAL* GEN_AO32_D1::pos(){
  return &a1;
}
void GEN_AO32_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO32_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AO32_D2::pos(){
  return &a1;
}
void GEN_AO32_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO32_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AO32_D4::pos(){
  return &a1;
}
void GEN_AO32_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO32_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AO33_D1::pos(){
  return &a1;
}
void GEN_AO33_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO33_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AO33_D2::pos(){
  return &a1;
}
void GEN_AO33_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO33_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AO33_D4::pos(){
  return &a1;
}
void GEN_AO33_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
void GEN_AO33_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  AND (net0, b1, b2, b3);
  AND (net1, a1, a2, a3);
  OR (z, net0, net1);
}
VAL* GEN_AOI211_D1::pos(){
  return &a1;
}
void GEN_AOI211_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_AOI211_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_AOI211_D2::pos(){
  return &a1;
}
void GEN_AOI211_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_AOI211_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_AOI211_D4::pos(){
  return &a1;
}
void GEN_AOI211_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_AOI211_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_AOI21_D1::pos(){
  return &a1;
}
void GEN_AOI21_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI21_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI21_D2::pos(){
  return &a1;
}
void GEN_AOI21_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI21_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI21_D4::pos(){
  return &a1;
}
void GEN_AOI21_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI21_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI221_D1::pos(){
  return &a1;
}
void GEN_AOI221_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_AOI221_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_AOI221_D2::pos(){
  return &a1;
}
void GEN_AOI221_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_AOI221_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_AOI221_D4::pos(){
  return &a1;
}
void GEN_AOI221_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_AOI221_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_AOI222_D1::pos(){
  return &a1;
}
void GEN_AOI222_D1::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_AOI222_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_AOI222_D2::pos(){
  return &a1;
}
void GEN_AOI222_D2::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_AOI222_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_AOI222_D4::pos(){
  return &a1;
}
void GEN_AOI222_D4::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_AOI222_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, c1, c2);
  AND (net1, a1, a2);
  AND (net2, b1, b2);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_AOI22_D1::pos(){
  return &a1;
}
void GEN_AOI22_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI22_D2::pos(){
  return &a1;
}
void GEN_AOI22_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI22_D4::pos(){
  return &a1;
}
void GEN_AOI22_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI31_D1::pos(){
  return &a1;
}
void GEN_AOI31_D1::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI31_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI31_D2::pos(){
  return &a1;
}
void GEN_AOI31_D2::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI31_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI31_D4::pos(){
  return &a1;
}
void GEN_AOI31_D4::function(){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
void GEN_AOI31_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  AND (net0, a1, a2, a3);
  OR (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_AOI32_D1::pos(){
  return &a1;
}
void GEN_AOI32_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI32_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI32_D2::pos(){
  return &a1;
}
void GEN_AOI32_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI32_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI32_D4::pos(){
  return &a1;
}
void GEN_AOI32_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI32_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI33_D1::pos(){
  return &a1;
}
void GEN_AOI33_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI33_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI33_D2::pos(){
  return &a1;
}
void GEN_AOI33_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI33_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_AOI33_D4::pos(){
  return &a1;
}
void GEN_AOI33_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_AOI33_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2, a3);
  AND (net1, b1, b2, b3);
  OR (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_BUF_D1::pos(){
  return &i;
}
void GEN_BUF_D1::function(){
  BUF (z, i);
}
void GEN_BUF_D1::function(VAL &i,VAL &z){
  BUF (z, i);
}
VAL* GEN_BUF_D2::pos(){
  return &i;
}
void GEN_BUF_D2::function(){
  BUF (z, i);
}
void GEN_BUF_D2::function(VAL &i,VAL &z){
  BUF (z, i);
}
VAL* GEN_BUF_D4::pos(){
  return &i;
}
void GEN_BUF_D4::function(){
  BUF (z, i);
}
void GEN_BUF_D4::function(VAL &i,VAL &z){
  BUF (z, i);
}
VAL* GEN_BUF_D8::pos(){
  return &i;
}
void GEN_BUF_D8::function(){
  BUF (z, i);
}
void GEN_BUF_D8::function(VAL &i,VAL &z){
  BUF (z, i);
}
VAL* GEN_FA_D1::pos(){
  return &a;
}
void GEN_FA_D1::function(){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
void GEN_FA_D1::function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
VAL* GEN_FA_D2::pos(){
  return &a;
}
void GEN_FA_D2::function(){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
void GEN_FA_D2::function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
VAL* GEN_FA_D4::pos(){
  return &a;
}
void GEN_FA_D4::function(){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
void GEN_FA_D4::function(VAL &a,VAL &b,VAL &ci,VAL &s,VAL &co){
  VAL net0=X, net1=X, net2=X;
  XOR (s, a, b, ci);
  AND (net0, a, b);
  AND (net1, a, ci);
  AND (net2, b, ci);
  OR (co, net0, net1, net2);
}
VAL* GEN_HA_D1::pos(){
  return &a;
}
void GEN_HA_D1::function(){
  XOR (s, a, b);
  AND (co, a, b);
}
void GEN_HA_D1::function(VAL &a,VAL &b,VAL &s,VAL &co){
  XOR (s, a, b);
  AND (co, a, b);
}
VAL* GEN_HA_D2::pos(){
  return &a;
}
void GEN_HA_D2::function(){
  XOR (s, a, b);
  AND (co, a, b);
}
void GEN_HA_D2::function(VAL &a,VAL &b,VAL &s,VAL &co){
  XOR (s, a, b);
  AND (co, a, b);
}
VAL* GEN_HA_D4::pos(){
  return &a;
}
void GEN_HA_D4::function(){
  XOR (s, a, b);
  AND (co, a, b);
}
void GEN_HA_D4::function(VAL &a,VAL &b,VAL &s,VAL &co){
  XOR (s, a, b);
  AND (co, a, b);
}
VAL* GEN_INV_D1::pos(){
  return &i;
}
void GEN_INV_D1::function(){
  NOT (zn, i);
}
void GEN_INV_D1::function(VAL &i,VAL &zn){
  NOT (zn, i);
}
VAL* GEN_INV_D2::pos(){
  return &i;
}
void GEN_INV_D2::function(){
  NOT (zn, i);
}
void GEN_INV_D2::function(VAL &i,VAL &zn){
  NOT (zn, i);
}
VAL* GEN_INV_D4::pos(){
  return &i;
}
void GEN_INV_D4::function(){
  NOT (zn, i);
}
void GEN_INV_D4::function(VAL &i,VAL &zn){
  NOT (zn, i);
}
VAL* GEN_INV_D8::pos(){
  return &i;
}
void GEN_INV_D8::function(){
  NOT (zn, i);
}
void GEN_INV_D8::function(VAL &i,VAL &zn){
  NOT (zn, i);
}
VAL* GEN_MAJORITYAOI222_D1::pos(){
  return &a;
}
void GEN_MAJORITYAOI222_D1::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_MAJORITYAOI222_D1::function(VAL &a,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_MAJORITYAOI222_D2::pos(){
  return &a;
}
void GEN_MAJORITYAOI222_D2::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_MAJORITYAOI222_D2::function(VAL &a,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_MAJORITYAOI222_D4::pos(){
  return &a;
}
void GEN_MAJORITYAOI222_D4::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_MAJORITYAOI222_D4::function(VAL &a,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  AND (net0, a, b);
  AND (net1, b, c);
  AND (net2, c, a);
  OR (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_MAJORITYAOI22_D1::pos(){
  return &a1;
}
void GEN_MAJORITYAOI22_D1::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
void GEN_MAJORITYAOI22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
VAL* GEN_MAJORITYAOI22_D2::pos(){
  return &a1;
}
void GEN_MAJORITYAOI22_D2::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
void GEN_MAJORITYAOI22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
VAL* GEN_MAJORITYAOI22_D4::pos(){
  return &a1;
}
void GEN_MAJORITYAOI22_D4::function(){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
void GEN_MAJORITYAOI22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  AND (net0, a1, a2);
  NOT (net1, net0);
  OR (net2, b1, b2);
  AND (zn, net1, net2);
}
VAL* GEN_MAJORITYOAI22_D1::pos(){
  return &a1;
}
void GEN_MAJORITYOAI22_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
void GEN_MAJORITYOAI22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
VAL* GEN_MAJORITYOAI22_D2::pos(){
  return &a1;
}
void GEN_MAJORITYOAI22_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
void GEN_MAJORITYOAI22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
VAL* GEN_MAJORITYOAI22_D4::pos(){
  return &a1;
}
void GEN_MAJORITYOAI22_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
void GEN_MAJORITYOAI22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR  (net0, a1, a2);
  NOT (net1, net0);
  AND (net2, b1, b2);
  OR (zn, net1, net2);
}
VAL* GEN_LATCH_D1::pos(){
  return &d;
}
void GEN_LATCH_D1::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
void GEN_LATCH_D1::function(VAL &d,VAL &e,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
VAL* GEN_LATCH_D2::pos(){
  return &d;
}
void GEN_LATCH_D2::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
void GEN_LATCH_D2::function(VAL &d,VAL &e,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
VAL* GEN_LATCH_D4::pos(){
  return &d;
}
void GEN_LATCH_D4::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
void GEN_LATCH_D4::function(VAL &d,VAL &e,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, e, cdn, sdn, notifier);
}
VAL* GEN_DFCLR_D1::pos(){
  return &d;
}
void GEN_DFCLR_D1::function(){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFCLR_D1::function(VAL &d,VAL &cp,VAL &cdn,VAL &q){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFCLR_D2::pos(){
  return &d;
}
void GEN_DFCLR_D2::function(){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFCLR_D2::function(VAL &d,VAL &cp,VAL &cdn,VAL &q){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFCLR_D4::pos(){
  return &d;
}
void GEN_DFCLR_D4::function(){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFCLR_D4::function(VAL &d,VAL &cp,VAL &cdn,VAL &q){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFCLR_D8::pos(){
  return &d;
}
void GEN_DFCLR_D8::function(){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFCLR_D8::function(VAL &d,VAL &cp,VAL &cdn,VAL &q){
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DF_D1::pos(){
  return &d;
}
void GEN_DF_D1::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DF_D1::function(VAL &d,VAL &cp,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DF_D2::pos(){
  return &d;
}
void GEN_DF_D2::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DF_D2::function(VAL &d,VAL &cp,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DF_D4::pos(){
  return &d;
}
void GEN_DF_D4::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DF_D4::function(VAL &d,VAL &cp,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DF_D8::pos(){
  return &d;
}
void GEN_DF_D8::function(){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DF_D8::function(VAL &d,VAL &cp,VAL &q){
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFSET_D1::pos(){
  return &d;
}
void GEN_DFSET_D1::function(){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFSET_D1::function(VAL &d,VAL &cp,VAL &sdn,VAL &q){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFSET_D2::pos(){
  return &d;
}
void GEN_DFSET_D2::function(){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFSET_D2::function(VAL &d,VAL &cp,VAL &sdn,VAL &q){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFSET_D4::pos(){
  return &d;
}
void GEN_DFSET_D4::function(){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFSET_D4::function(VAL &d,VAL &cp,VAL &sdn,VAL &q){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_DFSET_D8::pos(){
  return &d;
}
void GEN_DFSET_D8::function(){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
void GEN_DFSET_D8::function(VAL &d,VAL &cp,VAL &sdn,VAL &q){
  VAL cdn=I;
  udpi0.function(q, d, cp, cdn, sdn, notifier);
}
VAL* GEN_MUX2_D1::pos(){
  return &i0;
}
void GEN_MUX2_D1::function(){
  udpi0.function(z, i0, i1, s);
}
void GEN_MUX2_D1::function(VAL &i0,VAL &i1,VAL &s,VAL &z){
  udpi0.function(z, i0, i1, s);
}
VAL* GEN_MUX2_D2::pos(){
  return &i0;
}
void GEN_MUX2_D2::function(){
  udpi0.function(z, i0, i1, s);
}
void GEN_MUX2_D2::function(VAL &i0,VAL &i1,VAL &s,VAL &z){
  udpi0.function(z, i0, i1, s);
}
VAL* GEN_MUX2_D4::pos(){
  return &i0;
}
void GEN_MUX2_D4::function(){
  udpi0.function(z, i0, i1, s);
}
void GEN_MUX2_D4::function(VAL &i0,VAL &i1,VAL &s,VAL &z){
  udpi0.function(z, i0, i1, s);
}
VAL* GEN_MUX2N_D1::pos(){
  return &i0;
}
void GEN_MUX2N_D1::function(){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
void GEN_MUX2N_D1::function(VAL &i0,VAL &i1,VAL &s,VAL &zn){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
VAL* GEN_MUX2N_D2::pos(){
  return &i0;
}
void GEN_MUX2N_D2::function(){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
void GEN_MUX2N_D2::function(VAL &i0,VAL &i1,VAL &s,VAL &zn){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
VAL* GEN_MUX2N_D4::pos(){
  return &i0;
}
void GEN_MUX2N_D4::function(){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
void GEN_MUX2N_D4::function(VAL &i0,VAL &i1,VAL &s,VAL &zn){
  VAL z=X;
  udpi0.function(z, i0, i1, s);
  NOT (zn, z);
}
VAL* GEN_MUX3_D1::pos(){
  return &i0;
}
void GEN_MUX3_D1::function(){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
void GEN_MUX3_D1::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
VAL* GEN_MUX3_D2::pos(){
  return &i0;
}
void GEN_MUX3_D2::function(){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
void GEN_MUX3_D2::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
VAL* GEN_MUX3_D4::pos(){
  return &i0;
}
void GEN_MUX3_D4::function(){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
void GEN_MUX3_D4::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(z, net0, i2, s1);
}
VAL* GEN_MUX3N_D1::pos(){
  return &i0;
}
void GEN_MUX3N_D1::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
void GEN_MUX3N_D1::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
VAL* GEN_MUX3N_D2::pos(){
  return &i0;
}
void GEN_MUX3N_D2::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
void GEN_MUX3N_D2::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
VAL* GEN_MUX3N_D4::pos(){
  return &i0;
}
void GEN_MUX3N_D4::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
void GEN_MUX3N_D4::function(VAL &i0,VAL &i1,VAL &i2,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X;
  udpi0.function(net0, i0, i1, s0);
  udpi1.function(net1, net0, i2, s1);
  NOT (zn, net1);
}
VAL* GEN_MUX4_D1::pos(){
  return &i0;
}
void GEN_MUX4_D1::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
void GEN_MUX4_D1::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
VAL* GEN_MUX4_D2::pos(){
  return &i0;
}
void GEN_MUX4_D2::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
void GEN_MUX4_D2::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
VAL* GEN_MUX4_D4::pos(){
  return &i0;
}
void GEN_MUX4_D4::function(){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
void GEN_MUX4_D4::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &z){
  VAL net0=X, net1=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(z, net1, net0, s1);
}
VAL* GEN_MUX4N_D1::pos(){
  return &i0;
}
void GEN_MUX4N_D1::function(){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
void GEN_MUX4N_D1::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
VAL* GEN_MUX4N_D2::pos(){
  return &i0;
}
void GEN_MUX4N_D2::function(){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
void GEN_MUX4N_D2::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
VAL* GEN_MUX4N_D4::pos(){
  return &i0;
}
void GEN_MUX4N_D4::function(){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
void GEN_MUX4N_D4::function(VAL &i0,VAL &i1,VAL &i2,VAL &i3,VAL &s0,VAL &s1,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  udpi0.function(net0, i2, i3, s0);
  udpi1.function(net1, i0, i1, s0);
  udpi2.function(net2, net1, net0, s1);
  NOT (zn, net2);
}
VAL* GEN_NAND2_D1::pos(){
  return &a1;
}
void GEN_NAND2_D1::function(){
  NAND (zn, a1, a2);
}
void GEN_NAND2_D1::function(VAL &a1,VAL &a2,VAL &zn){
  NAND (zn, a1, a2);
}
VAL* GEN_NAND2_D2::pos(){
  return &a1;
}
void GEN_NAND2_D2::function(){
  NAND (zn, a1, a2);
}
void GEN_NAND2_D2::function(VAL &a1,VAL &a2,VAL &zn){
  NAND (zn, a1, a2);
}
VAL* GEN_NAND2_D4::pos(){
  return &a1;
}
void GEN_NAND2_D4::function(){
  NAND (zn, a1, a2);
}
void GEN_NAND2_D4::function(VAL &a1,VAL &a2,VAL &zn){
  NAND (zn, a1, a2);
}
VAL* GEN_NAND2_D8::pos(){
  return &a1;
}
void GEN_NAND2_D8::function(){
  NAND (zn, a1, a2);
}
void GEN_NAND2_D8::function(VAL &a1,VAL &a2,VAL &zn){
  NAND (zn, a1, a2);
}
VAL* GEN_NAND3_D1::pos(){
  return &a1;
}
void GEN_NAND3_D1::function(){
  NAND (zn, a1, a2, a3);
}
void GEN_NAND3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NAND (zn, a1, a2, a3);
}
VAL* GEN_NAND3_D2::pos(){
  return &a1;
}
void GEN_NAND3_D2::function(){
  NAND (zn, a1, a2, a3);
}
void GEN_NAND3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NAND (zn, a1, a2, a3);
}
VAL* GEN_NAND3_D4::pos(){
  return &a1;
}
void GEN_NAND3_D4::function(){
  NAND (zn, a1, a2, a3);
}
void GEN_NAND3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NAND (zn, a1, a2, a3);
}
VAL* GEN_NAND3_D8::pos(){
  return &a1;
}
void GEN_NAND3_D8::function(){
  NAND (zn, a1, a2, a3);
}
void GEN_NAND3_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NAND (zn, a1, a2, a3);
}
VAL* GEN_NAND4_D1::pos(){
  return &a1;
}
void GEN_NAND4_D1::function(){
  NAND (zn, a1, a2, a3, a4);
}
void GEN_NAND4_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NAND (zn, a1, a2, a3, a4);
}
VAL* GEN_NAND4_D2::pos(){
  return &a1;
}
void GEN_NAND4_D2::function(){
  NAND (zn, a1, a2, a3, a4);
}
void GEN_NAND4_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NAND (zn, a1, a2, a3, a4);
}
VAL* GEN_NAND4_D4::pos(){
  return &a1;
}
void GEN_NAND4_D4::function(){
  NAND (zn, a1, a2, a3, a4);
}
void GEN_NAND4_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NAND (zn, a1, a2, a3, a4);
}
VAL* GEN_NAND4_D8::pos(){
  return &a1;
}
void GEN_NAND4_D8::function(){
  NAND (zn, a1, a2, a3, a4);
}
void GEN_NAND4_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NAND (zn, a1, a2, a3, a4);
}
VAL* GEN_NOR2_D1::pos(){
  return &a1;
}
void GEN_NOR2_D1::function(){
  NOR (zn, a1, a2);
}
void GEN_NOR2_D1::function(VAL &a1,VAL &a2,VAL &zn){
  NOR (zn, a1, a2);
}
VAL* GEN_NOR2_D2::pos(){
  return &a1;
}
void GEN_NOR2_D2::function(){
  NOR (zn, a1, a2);
}
void GEN_NOR2_D2::function(VAL &a1,VAL &a2,VAL &zn){
  NOR (zn, a1, a2);
}
VAL* GEN_NOR2_D4::pos(){
  return &a1;
}
void GEN_NOR2_D4::function(){
  NOR (zn, a1, a2);
}
void GEN_NOR2_D4::function(VAL &a1,VAL &a2,VAL &zn){
  NOR (zn, a1, a2);
}
VAL* GEN_NOR2_D8::pos(){
  return &a1;
}
void GEN_NOR2_D8::function(){
  NOR (zn, a1, a2);
}
void GEN_NOR2_D8::function(VAL &a1,VAL &a2,VAL &zn){
  NOR (zn, a1, a2);
}
VAL* GEN_NOR3_D1::pos(){
  return &a1;
}
void GEN_NOR3_D1::function(){
  NOR (zn, a1, a2, a3);
}
void GEN_NOR3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NOR (zn, a1, a2, a3);
}
VAL* GEN_NOR3_D2::pos(){
  return &a1;
}
void GEN_NOR3_D2::function(){
  NOR (zn, a1, a2, a3);
}
void GEN_NOR3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NOR (zn, a1, a2, a3);
}
VAL* GEN_NOR3_D4::pos(){
  return &a1;
}
void GEN_NOR3_D4::function(){
  NOR (zn, a1, a2, a3);
}
void GEN_NOR3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NOR (zn, a1, a2, a3);
}
VAL* GEN_NOR3_D8::pos(){
  return &a1;
}
void GEN_NOR3_D8::function(){
  NOR (zn, a1, a2, a3);
}
void GEN_NOR3_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  NOR (zn, a1, a2, a3);
}
VAL* GEN_NOR4_D1::pos(){
  return &a1;
}
void GEN_NOR4_D1::function(){
  NOR (zn, a1, a2, a3, a4);
}
void GEN_NOR4_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NOR (zn, a1, a2, a3, a4);
}
VAL* GEN_NOR4_D2::pos(){
  return &a1;
}
void GEN_NOR4_D2::function(){
  NOR (zn, a1, a2, a3, a4);
}
void GEN_NOR4_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NOR (zn, a1, a2, a3, a4);
}
VAL* GEN_NOR4_D4::pos(){
  return &a1;
}
void GEN_NOR4_D4::function(){
  NOR (zn, a1, a2, a3, a4);
}
void GEN_NOR4_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NOR (zn, a1, a2, a3, a4);
}
VAL* GEN_NOR4_D8::pos(){
  return &a1;
}
void GEN_NOR4_D8::function(){
  NOR (zn, a1, a2, a3, a4);
}
void GEN_NOR4_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &zn){
  NOR (zn, a1, a2, a3, a4);
}
VAL* GEN_OA211_D1::pos(){
  return &a1;
}
void GEN_OA211_D1::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
void GEN_OA211_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
VAL* GEN_OA211_D2::pos(){
  return &a1;
}
void GEN_OA211_D2::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
void GEN_OA211_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
VAL* GEN_OA211_D4::pos(){
  return &a1;
}
void GEN_OA211_D4::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
void GEN_OA211_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b, c);
}
VAL* GEN_OA21_D1::pos(){
  return &a1;
}
void GEN_OA21_D1::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
void GEN_OA21_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
VAL* GEN_OA21_D2::pos(){
  return &a1;
}
void GEN_OA21_D2::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
void GEN_OA21_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
VAL* GEN_OA21_D4::pos(){
  return &a1;
}
void GEN_OA21_D4::function(){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
void GEN_OA21_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2);
  AND (z, net0, b);
}
VAL* GEN_OA221_D1::pos(){
  return &a1;
}
void GEN_OA221_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
void GEN_OA221_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
VAL* GEN_OA221_D2::pos(){
  return &a1;
}
void GEN_OA221_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
void GEN_OA221_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
VAL* GEN_OA221_D4::pos(){
  return &a1;
}
void GEN_OA221_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
void GEN_OA221_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1, c);
}
VAL* GEN_OA222_D1::pos(){
  return &a1;
}
void GEN_OA222_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
void GEN_OA222_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
VAL* GEN_OA222_D2::pos(){
  return &a1;
}
void GEN_OA222_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
void GEN_OA222_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
VAL* GEN_OA222_D4::pos(){
  return &a1;
}
void GEN_OA222_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
void GEN_OA222_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &z){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, c1, c2);
  OR (net2, b1, b2);
  AND (z, net0, net1, net2);
}
VAL* GEN_OA22_D1::pos(){
  return &a1;
}
void GEN_OA22_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
void GEN_OA22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
VAL* GEN_OA22_D2::pos(){
  return &a1;
}
void GEN_OA22_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
void GEN_OA22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
VAL* GEN_OA22_D4::pos(){
  return &a1;
}
void GEN_OA22_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
void GEN_OA22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2);
  AND (z, net0, net1);
}
VAL* GEN_OA31_D1::pos(){
  return &a1;
}
void GEN_OA31_D1::function(){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
void GEN_OA31_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
VAL* GEN_OA31_D2::pos(){
  return &a1;
}
void GEN_OA31_D2::function(){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
void GEN_OA31_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
VAL* GEN_OA31_D4::pos(){
  return &a1;
}
void GEN_OA31_D4::function(){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
void GEN_OA31_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &z){
  VAL net0=X;
  OR (net0, a1, a2, a3);
  AND (z, net0, b);
}
VAL* GEN_OA32_D1::pos(){
  return &a1;
}
void GEN_OA32_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA32_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OA32_D2::pos(){
  return &a1;
}
void GEN_OA32_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA32_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OA32_D4::pos(){
  return &a1;
}
void GEN_OA32_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA32_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OA33_D1::pos(){
  return &a1;
}
void GEN_OA33_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA33_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OA33_D2::pos(){
  return &a1;
}
void GEN_OA33_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA33_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OA33_D4::pos(){
  return &a1;
}
void GEN_OA33_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
void GEN_OA33_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &z){
  VAL net0=X, net1=X;
  OR (net0, b1, b2, b3);
  OR (net1, a1, a2, a3);
  AND (z, net0, net1);
}
VAL* GEN_OAI211_D1::pos(){
  return &a1;
}
void GEN_OAI211_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_OAI211_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_OAI211_D2::pos(){
  return &a1;
}
void GEN_OAI211_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_OAI211_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_OAI211_D4::pos(){
  return &a1;
}
void GEN_OAI211_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
void GEN_OAI211_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &c,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b, c);
  NOT (zn, net1);
}
VAL* GEN_OAI21_D1::pos(){
  return &a1;
}
void GEN_OAI21_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI21_D1::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI21_D2::pos(){
  return &a1;
}
void GEN_OAI21_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI21_D2::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI21_D4::pos(){
  return &a1;
}
void GEN_OAI21_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI21_D4::function(VAL &a1,VAL &a2,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI221_D1::pos(){
  return &a1;
}
void GEN_OAI221_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_OAI221_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_OAI221_D2::pos(){
  return &a1;
}
void GEN_OAI221_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_OAI221_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_OAI221_D4::pos(){
  return &a1;
}
void GEN_OAI221_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
void GEN_OAI221_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1, c);
  NOT (zn, net2);
}
VAL* GEN_OAI222_D1::pos(){
  return &a1;
}
void GEN_OAI222_D1::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_OAI222_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_OAI222_D2::pos(){
  return &a1;
}
void GEN_OAI222_D2::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_OAI222_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_OAI222_D4::pos(){
  return &a1;
}
void GEN_OAI222_D4::function(){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
void GEN_OAI222_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &c1,VAL &c2,VAL &zn){
  VAL net0=X, net1=X, net2=X, net3=X;
  OR (net0, c1, c2);
  OR (net1, a1, a2);
  OR (net2, b1, b2);
  AND (net3, net0, net1, net2);
  NOT (zn, net3);
}
VAL* GEN_OAI22_D1::pos(){
  return &a1;
}
void GEN_OAI22_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI22_D1::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI22_D2::pos(){
  return &a1;
}
void GEN_OAI22_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI22_D2::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI22_D4::pos(){
  return &a1;
}
void GEN_OAI22_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI22_D4::function(VAL &a1,VAL &a2,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI31_D1::pos(){
  return &a1;
}
void GEN_OAI31_D1::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI31_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI31_D2::pos(){
  return &a1;
}
void GEN_OAI31_D2::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI31_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI31_D4::pos(){
  return &a1;
}
void GEN_OAI31_D4::function(){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
void GEN_OAI31_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b,VAL &zn){
  VAL net0=X, net1=X;
  OR (net0, a1, a2, a3);
  AND (net1, net0, b);
  NOT (zn, net1);
}
VAL* GEN_OAI32_D1::pos(){
  return &a1;
}
void GEN_OAI32_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI32_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI32_D2::pos(){
  return &a1;
}
void GEN_OAI32_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI32_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI32_D4::pos(){
  return &a1;
}
void GEN_OAI32_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI32_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI33_D1::pos(){
  return &a1;
}
void GEN_OAI33_D1::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI33_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI33_D2::pos(){
  return &a1;
}
void GEN_OAI33_D2::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI33_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OAI33_D4::pos(){
  return &a1;
}
void GEN_OAI33_D4::function(){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
void GEN_OAI33_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &b1,VAL &b2,VAL &b3,VAL &zn){
  VAL net0=X, net1=X, net2=X;
  OR (net0, a1, a2, a3);
  OR (net1, b1, b2, b3);
  AND (net2, net0, net1);
  NOT (zn, net2);
}
VAL* GEN_OR2_D1::pos(){
  return &a1;
}
void GEN_OR2_D1::function(){
  OR (z, a1, a2);
}
void GEN_OR2_D1::function(VAL &a1,VAL &a2,VAL &z){
  OR (z, a1, a2);
}
VAL* GEN_OR2_D2::pos(){
  return &a1;
}
void GEN_OR2_D2::function(){
  OR (z, a1, a2);
}
void GEN_OR2_D2::function(VAL &a1,VAL &a2,VAL &z){
  OR (z, a1, a2);
}
VAL* GEN_OR2_D4::pos(){
  return &a1;
}
void GEN_OR2_D4::function(){
  OR (z, a1, a2);
}
void GEN_OR2_D4::function(VAL &a1,VAL &a2,VAL &z){
  OR (z, a1, a2);
}
VAL* GEN_OR2_D8::pos(){
  return &a1;
}
void GEN_OR2_D8::function(){
  OR (z, a1, a2);
}
void GEN_OR2_D8::function(VAL &a1,VAL &a2,VAL &z){
  OR (z, a1, a2);
}
VAL* GEN_OR3_D1::pos(){
  return &a1;
}
void GEN_OR3_D1::function(){
  OR (z, a1, a2, a3);
}
void GEN_OR3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  OR (z, a1, a2, a3);
}
VAL* GEN_OR3_D2::pos(){
  return &a1;
}
void GEN_OR3_D2::function(){
  OR (z, a1, a2, a3);
}
void GEN_OR3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  OR (z, a1, a2, a3);
}
VAL* GEN_OR3_D4::pos(){
  return &a1;
}
void GEN_OR3_D4::function(){
  OR (z, a1, a2, a3);
}
void GEN_OR3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  OR (z, a1, a2, a3);
}
VAL* GEN_OR3_D8::pos(){
  return &a1;
}
void GEN_OR3_D8::function(){
  OR (z, a1, a2, a3);
}
void GEN_OR3_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  OR (z, a1, a2, a3);
}
VAL* GEN_OR4_D1::pos(){
  return &a1;
}
void GEN_OR4_D1::function(){
  OR (z, a1, a2, a3, a4);
}
void GEN_OR4_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  OR (z, a1, a2, a3, a4);
}
VAL* GEN_OR4_D2::pos(){
  return &a1;
}
void GEN_OR4_D2::function(){
  OR (z, a1, a2, a3, a4);
}
void GEN_OR4_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  OR (z, a1, a2, a3, a4);
}
VAL* GEN_OR4_D4::pos(){
  return &a1;
}
void GEN_OR4_D4::function(){
  OR (z, a1, a2, a3, a4);
}
void GEN_OR4_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  OR (z, a1, a2, a3, a4);
}
VAL* GEN_OR4_D8::pos(){
  return &a1;
}
void GEN_OR4_D8::function(){
  OR (z, a1, a2, a3, a4);
}
void GEN_OR4_D8::function(VAL &a1,VAL &a2,VAL &a3,VAL &a4,VAL &z){
  OR (z, a1, a2, a3, a4);
}
VAL* GEN_SCAN_DFCLR_D1::pos(){
  return &si;
}
void GEN_SCAN_DFCLR_D1::function(){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
void GEN_SCAN_DFCLR_D1::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
VAL* GEN_SCAN_DFCLR_D2::pos(){
  return &si;
}
void GEN_SCAN_DFCLR_D2::function(){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
void GEN_SCAN_DFCLR_D2::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
VAL* GEN_SCAN_DFCLR_D4::pos(){
  return &si;
}
void GEN_SCAN_DFCLR_D4::function(){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
void GEN_SCAN_DFCLR_D4::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
VAL* GEN_SCAN_DFCLR_D8::pos(){
  return &si;
}
void GEN_SCAN_DFCLR_D8::function(){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
void GEN_SCAN_DFCLR_D8::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &cdn,VAL &q){
  VAL cdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, se1=X, se_check=X, xsi_check=X, xd_check=X, xcdn_i=X;
  BUF (cdn_i, cdn);
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn_i, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, cdn_i, se);
  AND (d_check, cdn_i, sd);
  XOR (se1, si, d);
  AND (se_check, se1, cdn_i);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xcdn_i, cdn_i, I);
}
VAL* GEN_SCAN_DF_D1::pos(){
  return &si;
}
void GEN_SCAN_DF_D1::function(){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
void GEN_SCAN_DF_D1::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
VAL* GEN_SCAN_DF_D2::pos(){
  return &si;
}
void GEN_SCAN_DF_D2::function(){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
void GEN_SCAN_DF_D2::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
VAL* GEN_SCAN_DF_D4::pos(){
  return &si;
}
void GEN_SCAN_DF_D4::function(){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
void GEN_SCAN_DF_D4::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
VAL* GEN_SCAN_DF_D8::pos(){
  return &si;
}
void GEN_SCAN_DF_D8::function(){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
void GEN_SCAN_DF_D8::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &q){
  VAL d_i=X, q_buf=X, sd=X, xse=X, xsd=X;
  VAL cdn=I;
  VAL sdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  udpi2.function(xse, se, I);
  udpi3.function(xsd, sd, I);
}
VAL* GEN_SCAN_DFSET_D1::pos(){
  return &si;
}
void GEN_SCAN_DFSET_D1::function(){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
void GEN_SCAN_DFSET_D1::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
VAL* GEN_SCAN_DFSET_D2::pos(){
  return &si;
}
void GEN_SCAN_DFSET_D2::function(){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
void GEN_SCAN_DFSET_D2::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
VAL* GEN_SCAN_DFSET_D4::pos(){
  return &si;
}
void GEN_SCAN_DFSET_D4::function(){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
void GEN_SCAN_DFSET_D4::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
VAL* GEN_SCAN_DFSET_D8::pos(){
  return &si;
}
void GEN_SCAN_DFSET_D8::function(){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
void GEN_SCAN_DFSET_D8::function(VAL &si,VAL &d,VAL &se,VAL &cp,VAL &sdn,VAL &q){
  VAL sdn_i=X, d_i=X, q_buf=X, sd=X, si_check=X, d_check=X, xsi_check=X, xd_check=X, xsdn_i=X;
  BUF (sdn_i, sdn);
  VAL cdn=I;
  udpi0.function(d_i, d, si, se);
  udpi1.function(q_buf, d_i, cp, cdn, sdn_i, notifier);
  BUF (q, q_buf);
  NOT (sd, se);
  AND (si_check, sdn_i, se);
  AND (d_check, sdn_i, sd);
  udpi2.function(xsi_check, si_check, I);
  udpi3.function(xd_check, d_check, I);
  udpi4.function(xsdn_i, sdn_i, I);
}
VAL* GEN_XNOR2_D1::pos(){
  return &a1;
}
void GEN_XNOR2_D1::function(){
  XNOR (zn, a1, a2);
}
void GEN_XNOR2_D1::function(VAL &a1,VAL &a2,VAL &zn){
  XNOR (zn, a1, a2);
}
VAL* GEN_XNOR2_D2::pos(){
  return &a1;
}
void GEN_XNOR2_D2::function(){
  XNOR (zn, a1, a2);
}
void GEN_XNOR2_D2::function(VAL &a1,VAL &a2,VAL &zn){
  XNOR (zn, a1, a2);
}
VAL* GEN_XNOR2_D4::pos(){
  return &a1;
}
void GEN_XNOR2_D4::function(){
  XNOR (zn, a1, a2);
}
void GEN_XNOR2_D4::function(VAL &a1,VAL &a2,VAL &zn){
  XNOR (zn, a1, a2);
}
VAL* GEN_XNOR2_D8::pos(){
  return &a1;
}
void GEN_XNOR2_D8::function(){
  XNOR (zn, a1, a2);
}
void GEN_XNOR2_D8::function(VAL &a1,VAL &a2,VAL &zn){
  XNOR (zn, a1, a2);
}
VAL* GEN_XNOR3_D1::pos(){
  return &a1;
}
void GEN_XNOR3_D1::function(){
  XNOR (zn, a1, a2, a3);
}
void GEN_XNOR3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  XNOR (zn, a1, a2, a3);
}
VAL* GEN_XNOR3_D2::pos(){
  return &a1;
}
void GEN_XNOR3_D2::function(){
  XNOR (zn, a1, a2, a3);
}
void GEN_XNOR3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  XNOR (zn, a1, a2, a3);
}
VAL* GEN_XNOR3_D4::pos(){
  return &a1;
}
void GEN_XNOR3_D4::function(){
  XNOR (zn, a1, a2, a3);
}
void GEN_XNOR3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &zn){
  XNOR (zn, a1, a2, a3);
}
VAL* GEN_XOR2_D1::pos(){
  return &a1;
}
void GEN_XOR2_D1::function(){
  XOR (z, a1, a2);
}
void GEN_XOR2_D1::function(VAL &a1,VAL &a2,VAL &z){
  XOR (z, a1, a2);
}
VAL* GEN_XOR2_D2::pos(){
  return &a1;
}
void GEN_XOR2_D2::function(){
  XOR (z, a1, a2);
}
void GEN_XOR2_D2::function(VAL &a1,VAL &a2,VAL &z){
  XOR (z, a1, a2);
}
VAL* GEN_XOR2_D4::pos(){
  return &a1;
}
void GEN_XOR2_D4::function(){
  XOR (z, a1, a2);
}
void GEN_XOR2_D4::function(VAL &a1,VAL &a2,VAL &z){
  XOR (z, a1, a2);
}
VAL* GEN_XOR2_D8::pos(){
  return &a1;
}
void GEN_XOR2_D8::function(){
  XOR (z, a1, a2);
}
void GEN_XOR2_D8::function(VAL &a1,VAL &a2,VAL &z){
  XOR (z, a1, a2);
}
VAL* GEN_XOR3_D1::pos(){
  return &a1;
}
void GEN_XOR3_D1::function(){
  XOR (z, a1, a2, a3);
}
void GEN_XOR3_D1::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  XOR (z, a1, a2, a3);
}
VAL* GEN_XOR3_D2::pos(){
  return &a1;
}
void GEN_XOR3_D2::function(){
  XOR (z, a1, a2, a3);
}
void GEN_XOR3_D2::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  XOR (z, a1, a2, a3);
}
VAL* GEN_XOR3_D4::pos(){
  return &a1;
}
void GEN_XOR3_D4::function(){
  XOR (z, a1, a2, a3);
}
void GEN_XOR3_D4::function(VAL &a1,VAL &a2,VAL &a3,VAL &z){
  XOR (z, a1, a2, a3);
}
VAL* GEN_CLKGATE_D1::pos(){
  return &te;
}
void GEN_CLKGATE_D1::function(){
  if ( IO == cp || IX == cp || XO == cp)
    {
      qd = te | e;
    }
  q = cp & qd;
}
void GEN_CLKGATE_D1::function(VAL &te,VAL &e,VAL &cp,VAL &q){
  if ( IO == cp || IX == cp || XO == cp)
    {
      qd = te | e;
    }
  q = cp & qd;
}
VAL* GEN_SYNC2C_D1::pos(){
  return &clk;
}
void GEN_SYNC2C_D1::function(){
  if ( OI == clk || OX == clk || XI == clk ||  IO == clr_ || IX == clr_ || XO == clr_)
    {
      if(!clr_ %3== I )
        q = O;
      else
        q = d0;
      if(!clr_ %3== I )
	d0 = O ;
      else
	d0 = d;
    }
}
void GEN_SYNC2C_D1::function(VAL &clk,VAL &d,VAL &clr_,VAL &q){
  if ( OI == clk || OX == clk || XI == clk ||  IO == clr_ || IX == clr_ || XO == clr_)
    {
      if(!clr_ %3== I )
        q = O;
      else
        q = d0;
      if(!clr_ %3== I )
	d0 = O ;
      else
	d0 = d;
    }
}
VAL* GEN_SYNC3_D1::pos(){
  return &clk;
}
void GEN_SYNC3_D1::function(){
  if ( OI == clk || OX == clk || XI == clk)
    {
      q = d1;
      d1 = d0;
      d0 = d;
    }
}
void GEN_SYNC3_D1::function(VAL &clk,VAL &d,VAL &q){
  if ( OI == clk || OX == clk || XI == clk)
    {
      q = d1;
      d1 = d0;
      d0 = d;
    }
}
VAL* GEN_SYNC3S_D1::pos(){
  return &clk;
}
void GEN_SYNC3S_D1::function(){
  if ( OI == clk || OX == clk || XI == clk ||  IO == set_ || IX == set_ || XO == set_)
    {
      if(!set_ %3== I )
        q = I;
      else
        q = d1;
      if(!set_ %3== I )
	d1 = I;
      else
	d1 = d0;
      if(!set_ %3== I )
	d0 = I;
      else
	d0 = d;
    }
}
void GEN_SYNC3S_D1::function(VAL &clk,VAL &d,VAL &set_,VAL &q){
  if ( OI == clk || OX == clk || XI == clk ||  IO == set_ || IX == set_ || XO == set_)
    {
      if(!set_ %3== I )
        q = I;
      else
        q = d1;
      if(!set_ %3== I )
	d1 = I;
      else
	d1 = d0;
      if(!set_ %3== I )
	d0 = I;
      else
	d0 = d;
    }
}
VAL* GEN_RAMS_16X272::pos(){
  return &clk;
}
void GEN_RAMS_16X272::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_16X256::pos(){
  return &clk;
}
void GEN_RAMS_16X256::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_OLAT_80x14::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_80x14::function(){

  VAL dout_ram [14];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_80x65::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_80x65::function(){

  VAL dout_ram [65];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_160x16::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_160x16::function(){

  VAL dout_ram [16];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_160x65::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_160x65::function(){

  VAL dout_ram [65];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_8x65::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_8x65::function(){

  VAL dout_ram [65];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_128x6::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_128x6::function(){

  VAL dout_ram [6];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_256x64::pos(){
  return &clk;
}
void GEN_RAMS_256x64::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_16x64::pos(){
  return &clk;
}
void GEN_RAMS_16x64::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_OLAT_128x11::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_128x11::function(){

  VAL dout_ram [11];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_61x65::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_61x65::function(){

  VAL dout_ram [65];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_80x9::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_80x9::function(){

  VAL dout_ram [9] ;
  VAL fbypass_dout_ram [9];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_80x15::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_80x15::function(){

  VAL dout_ram [15];
  VAL fbypass_dout_ram [15];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_60x21::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_60x21::function(){

  VAL dout_ram [21] ;
  VAL fbypass_dout_ram [21];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_256x8::pos(){
  return &clk;
}
void GEN_RAMS_WT_256x8::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_256x7::pos(){
  return &clk;
}
void GEN_RAMS_256x7::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_256x3::pos(){
  return &clk;
}
void GEN_RAMS_256x3::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_19x4::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_19x4::function(){

  VAL dout_ram [4];
  VAL fbypass_dout_ram [4] ;
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_128x18::pos(){
  return &clk;
}
void GEN_RAMS_128x18::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_SYNC3C_D1::pos(){
  return &clk;
}
void GEN_SYNC3C_D1::function(){
  if ( OI == clk || OX == clk || XI == clk ||  IO == clr_ || IX == clr_ || XO == clr_)
    {
      if(!clr_ %3== I )
	q = O;
      else
	q = d1;
      if(!clr_ %3== I )
        d1 = O;
      else
        d1 = d0;
      if(!clr_ %3== I )
	d0 = O;
      else
	d0 = d;
    }
}
void GEN_SYNC3C_D1::function(VAL &clk,VAL &d,VAL &clr_,VAL &q){
  if ( OI == clk || OX == clk || XI == clk ||  IO == clr_ || IX == clr_ || XO == clr_)
    {
      if(!clr_ %3== I )
	q = O;
      else
	q = d1;
      if(!clr_ %3== I )
        d1 = O;
      else
        d1 = d0;
      if(!clr_ %3== I )
	d0 = O;
      else
	d0 = d;
    }
}
VAL* GEN_SYNC3C_STRICT_D1::pos(){
  return &src_d_next;
}
void GEN_SYNC3C_STRICT_D1::function(){
  VAL src_sel=X,dst_sel=X;
  src_sel = src_d_next;
  if ( OI == src_clk || OX == src_clk || XI == src_clk ||  IO == src_clrn || IX == src_clrn || XO == src_clrn)
    {
      if(!src_clrn %3== I )
	src_d_f = O;
      else
	src_d_f = src_sel;
    }
  src_d = src_d_f;
  dst_sel = src_d_f;
  sync3d.function(dst_clk,dst_sel,dst_clrn,dst_q);
}
void GEN_SYNC3C_STRICT_D1::function(VAL &src_d_next,VAL &src_clk,VAL &src_clrn,VAL &dst_clk,VAL &dst_clrn,VAL &src_d,VAL &dst_q,VAL &atpg_ctl,VAL &test_mode){
  VAL src_sel=X,dst_sel=X;
  src_sel = src_d_next;
  if ( OI == src_clk || OX == src_clk || XI == src_clk ||  IO == src_clrn || IX == src_clrn || XO == src_clrn)
    {
      if(!src_clrn %3== I )
	src_d_f = O;
      else
	src_d_f = src_sel;
    }
  src_d = src_d_f;
  dst_sel = src_d_f;
  sync3d.function(dst_clk,dst_sel,dst_clrn,dst_q);
}
VAL* GEN_RAMS_512x256::pos(){
  return &clk;
}
void GEN_RAMS_512x256::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_64x116::pos(){
  return &clk;
}
void GEN_RAMS_64x116::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_64x1088::pos(){
  return &clk;
}
void GEN_RAMS_64x1088::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_64x1024::pos(){
  return &clk;
}
void GEN_RAMS_64x1024::function(){

  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_OLAT_256x14::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_256x14::function(){

  VAL dout_ram [14];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_256x16::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_256x16::function(){

  VAL dout_ram [16];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_256x257::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_256x257::function(){

  VAL dout_ram [257];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_OLAT_8x257::pos(){
  return &clk;
}
void GEN_RAMS_OLAT_8x257::function(){

  VAL dout_ram [257];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( dout_ram);i++)
	dout_r [i] =  dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_80x72::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_80x72::function(){

  VAL dout_ram [72] ;
  VAL fbypass_dout_ram [72];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_80x17::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_80x17::function(){

  VAL dout_ram [17] ;
  VAL fbypass_dout_ram [17] ;
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_60x168::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_60x168::function(){

  VAL dout_ram [168];
  VAL fbypass_dout_ram [168] ;
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_WT_IPASS_OLAT_20x32::pos(){
  return &clk;
}
void GEN_RAMS_WT_IPASS_OLAT_20x32::function(){

  VAL dout_ram [32];
  VAL fbypass_dout_ram [32] ;
  if (  OI == clk || OX == clk || XI == clk ) {
    if (we %3== I )
      for(int i=0;i<sizeof( di);i++)
	M[num(wa,sizeof(wa))] [i] =  di[i];
  }
  if (  OI == clk || OX == clk || XI == clk ) {
    if (re %3== I )
      for(int i=0;i<sizeof( ra);i++)
	ra_d [i] =  ra[i];
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout_ram [i] =  M[num(ra_d,sizeof(ra_d))][i];
  if(byp_sel %3== I )
    for(int i=0;i<sizeof( dbyp);i++)
      fbypass_dout_ram [i] =  dbyp[i];
  else
    for(int i=0;i<sizeof( dout_ram);i++)
      fbypass_dout_ram [i] =  dout_ram[i];
  if (  OI == clk || OX == clk || XI == clk ) {
    if (ore %3== I )
      for(int i=0;i<sizeof( fbypass_dout_ram);i++)
	dout_r [i] =  fbypass_dout_ram[i];
  }
  for(int i=0;i<sizeof( dout_r);i++)
    dout [i] =  dout_r[i];
}
VAL* GEN_RAMS_SP_WENABLE21_64x21::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE21_64x21::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we & wce ) %3== 1 ) {
      for(int i=0;i<sizeof( di);i++)
	M[num(a,sizeof(a))] [i] =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE32_1024x32::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE32_1024x32::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we & wce ) %3== 1 ) {
      for(int i=0;i<sizeof( di);i++)
	M[num(a,sizeof(a))] [i] =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE8_4096x32::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE8_4096x32::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we[0] & wce ) %3== 1 ) {
      for(int i=0;i<=7;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[1] & wce ) %3== 1 ) {
      for(int i=8;i<=15;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[2] & wce ) %3== 1 ) {
      for(int i=16;i<=23;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[3] & wce ) %3== 1 ) {
      for(int i=24;i<=31;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE22_64x88::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE22_64x88::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we[0] & wce ) %3== 1 ) {
      for(int i=0;i<=21;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[1] & wce ) %3== 1 ) {
      for(int i=22;i<=43;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[2] & wce ) %3== 1 ) {
      for(int i=44;i<=65;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[3] & wce ) %3== 1 ) {
      for(int i=66;i<=87;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE8_512x256::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE8_512x256::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we[0] & wce ) %3== 1 ) {
      for(int i=0;i<=7;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[1] & wce ) %3== 1 ) {
      for(int i=8;i<=15;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[2] & wce ) %3== 1 ) {
      for(int i=16;i<=23;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[3] & wce ) %3== 1 ) {
      for(int i=24;i<=31;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[4] & wce ) %3== 1 ) {
      for(int i=32;i<=39;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[5] & wce ) %3== 1 ) {
      for(int i=40;i<=47;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[6] & wce ) %3== 1 ) {
      for(int i=48;i<=55;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[7] & wce ) %3== 1 ) {
      for(int i=56;i<=63;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[8] & wce ) %3== 1 ) {
      for(int i=64;i<=71;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[9] & wce ) %3== 1 ) {
      for(int i=72;i<=79;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[10] & wce ) %3== 1 ) {
      for(int i=80;i<=87;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[11] & wce ) %3== 1 ) {
      for(int i=88;i<=95;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[12] & wce ) %3== 1 ) {
      for(int i=96;i<=103;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[13] & wce ) %3== 1 ) {
      for(int i=104;i<=111;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[14] & wce ) %3== 1 ) {
      for(int i=112;i<=119;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[15] & wce ) %3== 1 ) {
      for(int i=120;i<=127;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[16] & wce ) %3== 1 ) {
      for(int i=128;i<=135;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[17] & wce ) %3== 1 ) {
      for(int i=136;i<=143;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[18] & wce ) %3== 1 ) {
      for(int i=144;i<=151;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[19] & wce ) %3== 1 ) {
      for(int i=152;i<=159;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[20] & wce ) %3== 1 ) {
      for(int i=160;i<=167;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[21] & wce ) %3== 1 ) {
      for(int i=168;i<=175;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[22] & wce ) %3== 1 ) {
      for(int i=176;i<=183;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[23] & wce ) %3== 1 ) {
      for(int i=184;i<=191;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[24] & wce ) %3== 1 ) {
      for(int i=192;i<=199;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[25] & wce ) %3== 1 ) {
      for(int i=200;i<=207;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[26] & wce ) %3== 1 ) {
      for(int i=208;i<=215;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[27] & wce ) %3== 1 ) {
      for(int i=216;i<=223;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[28] & wce ) %3== 1 ) {
      for(int i=224;i<=231;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[29] & wce ) %3== 1 ) {
      for(int i=232;i<=239;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[30] & wce ) %3== 1 ) {
      for(int i=240;i<=247;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[31] & wce ) %3== 1 ) {
      for(int i=248;i<=255;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE21_64x84::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE21_64x84::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we[0] & wce ) %3== 1 ) {
      for(int i=0;i<=20;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[1] & wce ) %3== 1 ) {
      for(int i=21;i<=41;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[2] & wce ) %3== 1 ) {
      for(int i=42;i<=62;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[3] & wce ) %3== 1 ) {
      for(int i=63;i<=83;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
VAL* GEN_RAMS_SP_WENABLE32_512x128::pos(){
  return &clk;
}
void GEN_RAMS_SP_WENABLE32_512x128::function(){
  if (  OI == clk || OX == clk || XI == clk ) {
    if ( ( we[0] & wce ) %3== 1 ) {
      for(int i=0;i<=31;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[1] & wce ) %3== 1 ) {
      for(int i=32;i<=63;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[2] & wce ) %3== 1 ) {
      for(int i=64;i<=95;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( ( we[3] & wce ) %3== 1 ) {
      for(int i=96;i<=127;i++)
	M[num(a,sizeof(a))][i]  =  di[i];
    }
    if ( re %3== 1 ) {
      for(int i=0;i<sizeof( a);i++)
	ra_d [i] =  a[i];
    }
  }
  for(int i=0;i<sizeof( M[num(ra_d,sizeof(ra_d))]);i++)
    dout [i] =  M[num(ra_d,sizeof(ra_d))][i];
}
GATE* fgate(string s){
  GATE* g;
  if(s=="GEN_AND2_D1"){
    GEN_AND2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AND2_D2"){
    GEN_AND2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AND2_D4"){
    GEN_AND2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AND2_D8"){
    GEN_AND2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_AND3_D1"){
    GEN_AND3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AND3_D2"){
    GEN_AND3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AND3_D4"){
    GEN_AND3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AND3_D8"){
    GEN_AND3_D8 g1;
    g=&g1;
  }
  if(s=="GEN_AND4_D1"){
    GEN_AND4_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AND4_D2"){
    GEN_AND4_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AND4_D4"){
    GEN_AND4_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AND4_D8"){
    GEN_AND4_D8 g1;
    g=&g1;
  }
  if(s=="GEN_AO211_D1"){
    GEN_AO211_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO211_D2"){
    GEN_AO211_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO211_D4"){
    GEN_AO211_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO21_D1"){
    GEN_AO21_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO21_D2"){
    GEN_AO21_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO21_D4"){
    GEN_AO21_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO221_D1"){
    GEN_AO221_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO221_D2"){
    GEN_AO221_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO221_D4"){
    GEN_AO221_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO222_D1"){
    GEN_AO222_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO222_D2"){
    GEN_AO222_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO222_D4"){
    GEN_AO222_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO22_D1"){
    GEN_AO22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO22_D2"){
    GEN_AO22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO22_D4"){
    GEN_AO22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO22_D8"){
    GEN_AO22_D8 g1;
    g=&g1;
  }
  if(s=="GEN_AO31_D1"){
    GEN_AO31_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO31_D2"){
    GEN_AO31_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO31_D4"){
    GEN_AO31_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO32_D1"){
    GEN_AO32_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO32_D2"){
    GEN_AO32_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO32_D4"){
    GEN_AO32_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AO33_D1"){
    GEN_AO33_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AO33_D2"){
    GEN_AO33_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AO33_D4"){
    GEN_AO33_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI211_D1"){
    GEN_AOI211_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI211_D2"){
    GEN_AOI211_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI211_D4"){
    GEN_AOI211_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI21_D1"){
    GEN_AOI21_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI21_D2"){
    GEN_AOI21_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI21_D4"){
    GEN_AOI21_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI221_D1"){
    GEN_AOI221_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI221_D2"){
    GEN_AOI221_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI221_D4"){
    GEN_AOI221_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI222_D1"){
    GEN_AOI222_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI222_D2"){
    GEN_AOI222_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI222_D4"){
    GEN_AOI222_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI22_D1"){
    GEN_AOI22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI22_D2"){
    GEN_AOI22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI22_D4"){
    GEN_AOI22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI31_D1"){
    GEN_AOI31_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI31_D2"){
    GEN_AOI31_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI31_D4"){
    GEN_AOI31_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI32_D1"){
    GEN_AOI32_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI32_D2"){
    GEN_AOI32_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI32_D4"){
    GEN_AOI32_D4 g1;
    g=&g1;
  }
  if(s=="GEN_AOI33_D1"){
    GEN_AOI33_D1 g1;
    g=&g1;
  }
  if(s=="GEN_AOI33_D2"){
    GEN_AOI33_D2 g1;
    g=&g1;
  }
  if(s=="GEN_AOI33_D4"){
    GEN_AOI33_D4 g1;
    g=&g1;
  }
  if(s=="GEN_BUF_D1"){
    GEN_BUF_D1 g1;
    g=&g1;
  }
  if(s=="GEN_BUF_D2"){
    GEN_BUF_D2 g1;
    g=&g1;
  }
  if(s=="GEN_BUF_D4"){
    GEN_BUF_D4 g1;
    g=&g1;
  }
  if(s=="GEN_BUF_D8"){
    GEN_BUF_D8 g1;
    g=&g1;
  }
  if(s=="GEN_FA_D1"){
    GEN_FA_D1 g1;
    g=&g1;
  }
  if(s=="GEN_FA_D2"){
    GEN_FA_D2 g1;
    g=&g1;
  }
  if(s=="GEN_FA_D4"){
    GEN_FA_D4 g1;
    g=&g1;
  }
  if(s=="GEN_HA_D1"){
    GEN_HA_D1 g1;
    g=&g1;
  }
  if(s=="GEN_HA_D2"){
    GEN_HA_D2 g1;
    g=&g1;
  }
  if(s=="GEN_HA_D4"){
    GEN_HA_D4 g1;
    g=&g1;
  }
  if(s=="GEN_INV_D1"){
    GEN_INV_D1 g1;
    g=&g1;
  }
  if(s=="GEN_INV_D2"){
    GEN_INV_D2 g1;
    g=&g1;
  }
  if(s=="GEN_INV_D4"){
    GEN_INV_D4 g1;
    g=&g1;
  }
  if(s=="GEN_INV_D8"){
    GEN_INV_D8 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI222_D1"){
    GEN_MAJORITYAOI222_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI222_D2"){
    GEN_MAJORITYAOI222_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI222_D4"){
    GEN_MAJORITYAOI222_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI22_D1"){
    GEN_MAJORITYAOI22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI22_D2"){
    GEN_MAJORITYAOI22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYAOI22_D4"){
    GEN_MAJORITYAOI22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYOAI22_D1"){
    GEN_MAJORITYOAI22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYOAI22_D2"){
    GEN_MAJORITYOAI22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MAJORITYOAI22_D4"){
    GEN_MAJORITYOAI22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_LATCH_D1"){
    GEN_LATCH_D1 g1;
    g=&g1;
  }
  if(s=="GEN_LATCH_D2"){
    GEN_LATCH_D2 g1;
    g=&g1;
  }
  if(s=="GEN_LATCH_D4"){
    GEN_LATCH_D4 g1;
    g=&g1;
  }
  if(s=="GEN_DFCLR_D1"){
    GEN_DFCLR_D1 g1;
    g=&g1;
  }
  if(s=="GEN_DFCLR_D2"){
    GEN_DFCLR_D2 g1;
    g=&g1;
  }
  if(s=="GEN_DFCLR_D4"){
    GEN_DFCLR_D4 g1;
    g=&g1;
  }
  if(s=="GEN_DFCLR_D8"){
    GEN_DFCLR_D8 g1;
    g=&g1;
  }
  if(s=="GEN_DF_D1"){
    GEN_DF_D1 g1;
    g=&g1;
  }
  if(s=="GEN_DF_D2"){
    GEN_DF_D2 g1;
    g=&g1;
  }
  if(s=="GEN_DF_D4"){
    GEN_DF_D4 g1;
    g=&g1;
  }
  if(s=="GEN_DF_D8"){
    GEN_DF_D8 g1;
    g=&g1;
  }
  if(s=="GEN_DFSET_D1"){
    GEN_DFSET_D1 g1;
    g=&g1;
  }
  if(s=="GEN_DFSET_D2"){
    GEN_DFSET_D2 g1;
    g=&g1;
  }
  if(s=="GEN_DFSET_D4"){
    GEN_DFSET_D4 g1;
    g=&g1;
  }
  if(s=="GEN_DFSET_D8"){
    GEN_DFSET_D8 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2_D1"){
    GEN_MUX2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2_D2"){
    GEN_MUX2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2_D4"){
    GEN_MUX2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2N_D1"){
    GEN_MUX2N_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2N_D2"){
    GEN_MUX2N_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX2N_D4"){
    GEN_MUX2N_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3_D1"){
    GEN_MUX3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3_D2"){
    GEN_MUX3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3_D4"){
    GEN_MUX3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3N_D1"){
    GEN_MUX3N_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3N_D2"){
    GEN_MUX3N_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX3N_D4"){
    GEN_MUX3N_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4_D1"){
    GEN_MUX4_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4_D2"){
    GEN_MUX4_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4_D4"){
    GEN_MUX4_D4 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4N_D1"){
    GEN_MUX4N_D1 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4N_D2"){
    GEN_MUX4N_D2 g1;
    g=&g1;
  }
  if(s=="GEN_MUX4N_D4"){
    GEN_MUX4N_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NAND2_D1"){
    GEN_NAND2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NAND2_D2"){
    GEN_NAND2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NAND2_D4"){
    GEN_NAND2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NAND2_D8"){
    GEN_NAND2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_NAND3_D1"){
    GEN_NAND3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NAND3_D2"){
    GEN_NAND3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NAND3_D4"){
    GEN_NAND3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NAND3_D8"){
    GEN_NAND3_D8 g1;
    g=&g1;
  }
  if(s=="GEN_NAND4_D1"){
    GEN_NAND4_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NAND4_D2"){
    GEN_NAND4_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NAND4_D4"){
    GEN_NAND4_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NAND4_D8"){
    GEN_NAND4_D8 g1;
    g=&g1;
  }
  if(s=="GEN_NOR2_D1"){
    GEN_NOR2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NOR2_D2"){
    GEN_NOR2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NOR2_D4"){
    GEN_NOR2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NOR2_D8"){
    GEN_NOR2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_NOR3_D1"){
    GEN_NOR3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NOR3_D2"){
    GEN_NOR3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NOR3_D4"){
    GEN_NOR3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NOR3_D8"){
    GEN_NOR3_D8 g1;
    g=&g1;
  }
  if(s=="GEN_NOR4_D1"){
    GEN_NOR4_D1 g1;
    g=&g1;
  }
  if(s=="GEN_NOR4_D2"){
    GEN_NOR4_D2 g1;
    g=&g1;
  }
  if(s=="GEN_NOR4_D4"){
    GEN_NOR4_D4 g1;
    g=&g1;
  }
  if(s=="GEN_NOR4_D8"){
    GEN_NOR4_D8 g1;
    g=&g1;
  }
  if(s=="GEN_OA211_D1"){
    GEN_OA211_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA211_D2"){
    GEN_OA211_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA211_D4"){
    GEN_OA211_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA21_D1"){
    GEN_OA21_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA21_D2"){
    GEN_OA21_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA21_D4"){
    GEN_OA21_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA221_D1"){
    GEN_OA221_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA221_D2"){
    GEN_OA221_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA221_D4"){
    GEN_OA221_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA222_D1"){
    GEN_OA222_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA222_D2"){
    GEN_OA222_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA222_D4"){
    GEN_OA222_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA22_D1"){
    GEN_OA22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA22_D2"){
    GEN_OA22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA22_D4"){
    GEN_OA22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA31_D1"){
    GEN_OA31_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA31_D2"){
    GEN_OA31_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA31_D4"){
    GEN_OA31_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA32_D1"){
    GEN_OA32_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA32_D2"){
    GEN_OA32_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA32_D4"){
    GEN_OA32_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OA33_D1"){
    GEN_OA33_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OA33_D2"){
    GEN_OA33_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OA33_D4"){
    GEN_OA33_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI211_D1"){
    GEN_OAI211_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI211_D2"){
    GEN_OAI211_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI211_D4"){
    GEN_OAI211_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI21_D1"){
    GEN_OAI21_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI21_D2"){
    GEN_OAI21_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI21_D4"){
    GEN_OAI21_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI221_D1"){
    GEN_OAI221_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI221_D2"){
    GEN_OAI221_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI221_D4"){
    GEN_OAI221_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI222_D1"){
    GEN_OAI222_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI222_D2"){
    GEN_OAI222_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI222_D4"){
    GEN_OAI222_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI22_D1"){
    GEN_OAI22_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI22_D2"){
    GEN_OAI22_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI22_D4"){
    GEN_OAI22_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI31_D1"){
    GEN_OAI31_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI31_D2"){
    GEN_OAI31_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI31_D4"){
    GEN_OAI31_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI32_D1"){
    GEN_OAI32_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI32_D2"){
    GEN_OAI32_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI32_D4"){
    GEN_OAI32_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OAI33_D1"){
    GEN_OAI33_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OAI33_D2"){
    GEN_OAI33_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OAI33_D4"){
    GEN_OAI33_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OR2_D1"){
    GEN_OR2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OR2_D2"){
    GEN_OR2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OR2_D4"){
    GEN_OR2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OR2_D8"){
    GEN_OR2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_OR3_D1"){
    GEN_OR3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OR3_D2"){
    GEN_OR3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OR3_D4"){
    GEN_OR3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OR3_D8"){
    GEN_OR3_D8 g1;
    g=&g1;
  }
  if(s=="GEN_OR4_D1"){
    GEN_OR4_D1 g1;
    g=&g1;
  }
  if(s=="GEN_OR4_D2"){
    GEN_OR4_D2 g1;
    g=&g1;
  }
  if(s=="GEN_OR4_D4"){
    GEN_OR4_D4 g1;
    g=&g1;
  }
  if(s=="GEN_OR4_D8"){
    GEN_OR4_D8 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFCLR_D1"){
    GEN_SCAN_DFCLR_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFCLR_D2"){
    GEN_SCAN_DFCLR_D2 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFCLR_D4"){
    GEN_SCAN_DFCLR_D4 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFCLR_D8"){
    GEN_SCAN_DFCLR_D8 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DF_D1"){
    GEN_SCAN_DF_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DF_D2"){
    GEN_SCAN_DF_D2 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DF_D4"){
    GEN_SCAN_DF_D4 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DF_D8"){
    GEN_SCAN_DF_D8 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFSET_D1"){
    GEN_SCAN_DFSET_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFSET_D2"){
    GEN_SCAN_DFSET_D2 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFSET_D4"){
    GEN_SCAN_DFSET_D4 g1;
    g=&g1;
  }
  if(s=="GEN_SCAN_DFSET_D8"){
    GEN_SCAN_DFSET_D8 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR2_D1"){
    GEN_XNOR2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR2_D2"){
    GEN_XNOR2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR2_D4"){
    GEN_XNOR2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR2_D8"){
    GEN_XNOR2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR3_D1"){
    GEN_XNOR3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR3_D2"){
    GEN_XNOR3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_XNOR3_D4"){
    GEN_XNOR3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_XOR2_D1"){
    GEN_XOR2_D1 g1;
    g=&g1;
  }
  if(s=="GEN_XOR2_D2"){
    GEN_XOR2_D2 g1;
    g=&g1;
  }
  if(s=="GEN_XOR2_D4"){
    GEN_XOR2_D4 g1;
    g=&g1;
  }
  if(s=="GEN_XOR2_D8"){
    GEN_XOR2_D8 g1;
    g=&g1;
  }
  if(s=="GEN_XOR3_D1"){
    GEN_XOR3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_XOR3_D2"){
    GEN_XOR3_D2 g1;
    g=&g1;
  }
  if(s=="GEN_XOR3_D4"){
    GEN_XOR3_D4 g1;
    g=&g1;
  }
  if(s=="GEN_CLKGATE_D1"){
    GEN_CLKGATE_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SYNC2C_D1"){
    GEN_SYNC2C_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SYNC3_D1"){
    GEN_SYNC3_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SYNC3S_D1"){
    GEN_SYNC3S_D1 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_16X272"){
    GEN_RAMS_16X272 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_16X256"){
    GEN_RAMS_16X256 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_80x14"){
    GEN_RAMS_OLAT_80x14 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_80x65"){
    GEN_RAMS_OLAT_80x65 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_160x16"){
    GEN_RAMS_OLAT_160x16 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_160x65"){
    GEN_RAMS_OLAT_160x65 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_8x65"){
    GEN_RAMS_OLAT_8x65 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_128x6"){
    GEN_RAMS_OLAT_128x6 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_256x64"){
    GEN_RAMS_256x64 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_16x64"){
    GEN_RAMS_16x64 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_128x11"){
    GEN_RAMS_OLAT_128x11 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_61x65"){
    GEN_RAMS_OLAT_61x65 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_80x9"){
    GEN_RAMS_WT_IPASS_OLAT_80x9 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_80x15"){
    GEN_RAMS_WT_IPASS_OLAT_80x15 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_60x21"){
    GEN_RAMS_WT_IPASS_OLAT_60x21 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_256x8"){
    GEN_RAMS_WT_256x8 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_256x7"){
    GEN_RAMS_256x7 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_256x3"){
    GEN_RAMS_256x3 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_19x4"){
    GEN_RAMS_WT_IPASS_OLAT_19x4 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_128x18"){
    GEN_RAMS_128x18 g1;
    g=&g1;
  }
  if(s=="GEN_SYNC3C_D1"){
    GEN_SYNC3C_D1 g1;
    g=&g1;
  }
  if(s=="GEN_SYNC3C_STRICT_D1"){
    GEN_SYNC3C_STRICT_D1 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_512x256"){
    GEN_RAMS_512x256 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_64x116"){
    GEN_RAMS_64x116 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_64x1088"){
    GEN_RAMS_64x1088 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_64x1024"){
    GEN_RAMS_64x1024 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_256x14"){
    GEN_RAMS_OLAT_256x14 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_256x16"){
    GEN_RAMS_OLAT_256x16 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_256x257"){
    GEN_RAMS_OLAT_256x257 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_OLAT_8x257"){
    GEN_RAMS_OLAT_8x257 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_80x72"){
    GEN_RAMS_WT_IPASS_OLAT_80x72 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_80x17"){
    GEN_RAMS_WT_IPASS_OLAT_80x17 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_60x168"){
    GEN_RAMS_WT_IPASS_OLAT_60x168 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_WT_IPASS_OLAT_20x32"){
    GEN_RAMS_WT_IPASS_OLAT_20x32 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE21_64x21"){
    GEN_RAMS_SP_WENABLE21_64x21 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE32_1024x32"){
    GEN_RAMS_SP_WENABLE32_1024x32 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE8_4096x32"){
    GEN_RAMS_SP_WENABLE8_4096x32 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE22_64x88"){
    GEN_RAMS_SP_WENABLE22_64x88 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE8_512x256"){
    GEN_RAMS_SP_WENABLE8_512x256 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE21_64x84"){
    GEN_RAMS_SP_WENABLE21_64x84 g1;
    g=&g1;
  }
  if(s=="GEN_RAMS_SP_WENABLE32_512x128"){
    GEN_RAMS_SP_WENABLE32_512x128 g1;
    g=&g1;
  }
  return g;
}
