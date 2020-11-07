#ifndef libraryparser_H
#define libraryparser_H
#include<bits/stdc++.h>
using namespace std;
string erase_extra_space(string line);

vector<string> get_all_word(string s);

pair<int,int> brackets(string s);

bool check_edge(string x, string y);

string check_valid_ascii(string line);

#endif
