#ifndef gatefunction_H
#define gatefunction_H
#include<bits/stdc++.h>
using namespace std;

int simple_logic(string v);

vector<int> simple_logicv(vector<string> v);

string and_gate(vector<string> v);

string nand_gate(vector<string> v);

string or_gate(vector<string> v);

string nor_gate(vector<string> v);

string xor_gate(vector<string> v);

string xnor_gate(vector<string> v);

string not_gate(string v);

string buf_gate(string v);
#endif
