#include<bits/stdc++.h>
#include "libraryparser.h"
#include "primitiveparser.h"

using namespace std;


vector<string> udp_commands, udp_name;
vector<vector<vector<string> > > udp_input_table;
vector<vector<string> > udp_output_table;
vector<vector<string> > udp_outputp_table;
vector<vector<pair<string, string> > > udp_signals;

void restore_commands_udp(string input){
    ifstream udp_inFile;
    udp_inFile.open(input);
    if (!udp_inFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    string command;
    while (getline(udp_inFile, line)) {
        line = erase_extra_space(line);
        if(line.size() == 0 || line.substr(0,2) == "//")
        continue;
        command = erase_extra_space(line);
        udp_commands.push_back(command);
    }
    udp_inFile.close();

}

int process_table(int id){
    vector<vector<string> > v;
    vector<string> v1;
    vector<string> v2;
    while(true){
        vector<string> words = get_all_word(udp_commands[id]);
        vector<string> v0;
        if(words[0] == "endtable"){
            break;
        }
        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            if(words[i] == ":"){
                cnt++;
                continue;
            }
            if(words[i] == ";"){
                break;
            }
            if(cnt == 0){
                v0.push_back(words[i]);
            }
            if(cnt == 1){
                v1.push_back(words[i]);
            }
            if(cnt == 2){
                v2.push_back(words[i]);
            }
        }
        v.push_back(v0);
        id++;
    }
    udp_input_table.push_back(v);
    if(v2.size() == 0){
        for(int i = 0;i < v1.size(); i++){
            v2.push_back("?");
        }
        udp_output_table.push_back(v2);
        udp_outputp_table.push_back(v1);
    }
    else{
        udp_output_table.push_back(v1);
        udp_outputp_table.push_back(v2);
    }
    return id;
}

int preprocess_udp(int ind){
    vector<string> Words = get_all_word(udp_commands[ind]);
    vector<pair<string, string> > v;
    udp_name.push_back(Words[1]);
    v.push_back(make_pair("output" , Words[2]));
    for(int i = 3 ; i < Words.size(); i++){
        v.push_back(make_pair("input" , Words[i]));
    }
    udp_signals.push_back(v);
    int id = ind + 1;
    while(true){
        vector<string> words = get_all_word(udp_commands[id]);
        if(words[0] == "endprimitive"){
            break;
        }
        if(words[0] == "table"){
            id = process_table(id + 1);
        }
        id++;
    }
    return id;
}

void preprocess_primitive(string input){
    restore_commands_udp(input);
    for(int i = 0; i < udp_commands.size(); i++){
        vector<string> words = get_all_word(udp_commands[i]);
        if(words[0] == "primitive"){
            i = preprocess_udp(i);
        }
    }
}

string abbr(string x){
    if(x == "*") x = "??";
    if(x.size() > 1 && x[0] == x[1] && x[0] != '?' )
    return x.substr(1,0);
    return x;
}

bool sub(string x, string y){
    x = abbr(x);
    y = abbr(y);

    for(int i = 0; i < x.size(); i++){
        if(x[i] == 'z'){
            x[i] = 'x';
        }
    }
    for(int i = 0; i < y.size(); i++){
        if(y[i] == 'z'){
            y[i] = 'x';
        }
    }
    if(x.size() != y.size()){
        return false;
    }
    if(x.size() == 2){
        bool b1 = sub(x.substr(0,1), y.substr(0,1));
        bool b2 = sub(x.substr(1,1), y.substr(1,1));
        return b1 & b2;
    }
    if(x == "?"){
        return true;
    }
    if(x.size() == 1){
        return (x[0] == y[0]);
    }

    return false;
}

string udp_gate(string gate_name, vector<string> inputs, string q ){
    int ind ;
    for(int i = 0; i < 4; i++){
        if(gate_name == udp_name[i]){
            ind = i;
        }
    }
    if(q.size() == 2){
        q = q.substr(1,1);
    }
    string qp = "x";
    for(int i = 0 ; i < udp_input_table[ind].size(); i++){
        bool b = true;
        //cout<<"line "<<i<<endl;
        for(int j = 0 ; j < udp_input_table[ind][i].size(); j++){
            //cout<<udp_input_table[ind][i][j]<<" "<< inputs[j]<<" - ";
            if(sub(udp_input_table[ind][i][j], inputs[j]) == false){
                b = false;
                break;
            }
        }
        //cout<<b<<endl;
        if(b && sub(udp_output_table[ind][i],q) == true){
            //cout<<"SSSS"<<endl;
            qp = udp_outputp_table[ind][i];
            if(qp == "-"){
                qp = q;
            }
        }
    }
    return q+qp;

}



void test(){
    string name = "udp_dff";
    vector<string>inputs;
    inputs.push_back("0");
    inputs.push_back("1");
    inputs.push_back("01");
    inputs.push_back("0");
    inputs.push_back("x");
    string q = "z";
    cout<<udp_gate(name, inputs, q)<<endl;
}
