#ifndef VCDPARSER_H
#define VCDPARSER_H
#include<bits/stdc++.h>
#include "../object.h"
using namespace std;

vector< Signal > vcd_get_signals();

void vcd_process(string input1);

VAL toval(string s);

#endif
