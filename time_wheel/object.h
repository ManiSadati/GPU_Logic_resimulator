#pragma once
#include<bits/stdc++.h>
#include "vlib2/vlib_files/lib.h"

using namespace std;

struct Event{
public:
    long long int time;
    VAL value;
    Event(long long int t, VAL val){
	time = t;
	value = val;
    }
    Event();
};

class Signal{
public:
    vector<int> gate_edges;
    vector<Event> vaweform;
    string name;
    string type;
};

struct delay{
public:
    string in;
    string out;
    string edge;//non pos neg
    int ris;
    int fal;
};

struct portmap{
public:
    string port_name;
    int signal_index;
    int last=0;
};

class Gate{
public:
    string name;
    string type;
    int id;
    GATE* CMP;
    int last;
    vector<delay> dl;
    vector<portmap> inputs;
    vector<portmap> outputs;
};
