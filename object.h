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
    string type="UN";
    int array_ind = -1;
    int alloc_ptr_first = -1;
    int alloc_ptr_last = -1;
    long long int o_val = 0;
    long long int i_val = 0;
    long long int x_val = 0;
    bool netlist_input = false;
    int last_level = 0;
};

struct delay{
public:
    string in;
    string out;
    string edge;//non pos neg
    int ris;
    int fal;
};

struct delay2{
public:
	int in;
	int out;
	int edge;
	int ris;
	int fal;
};

struct portmap{
public:
    string port_name;
    int signal_index;
};

class Gate{
public:
    string name;
    string type;
    int id;
    int size;
    int l_in;
    int l_out;
    int table_id;
	vector<delay> dl;
	vector<delay2> dl2;
    vector<portmap> inputs;
    vector<portmap> outputs;
};
