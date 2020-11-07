#ifndef type1parser_H
#define type1parser_H
#include<bits/stdc++.h>
using namespace std;

void pre_process_modules(string arg1);

vector<string> get_module_names();

vector<vector<pair<string, string> > > get_module_signals();

vector< vector< pair< string, pair<int, int> > > > get_module_arrays();

vector< vector< pair< string, vector<string> > > > get_module_operations();

vector<unordered_map<string, string> > get_module_signals_map();

unordered_map<string, int> get_module_names_map();

#endif
