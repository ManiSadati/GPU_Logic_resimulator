#include<bits/stdc++.h>
#include "../object.h"
#include "libraryparser.h"
#include "type1component.h"

using namespace std;

ifstream parserFile;

extern unordered_map<string, int> vlib_names ;
extern vector<unordered_map<string, string> > vlib_signals;
unordered_map<int, int> vlib_size, vlib_lin, vlib_lout;
vector<unordered_map<string, int> >vlib_ports ;
vector<unordered_map<int, string> >vlib_ports_revers ;
vector<string> portcommands;

void port_restore_commands(string input){
    parserFile.open(input);
    if (!parserFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    while (getline(parserFile, line)) {
        if(line.size() == 0){
            continue;
        }
		line = check_valid_ascii(line);
        portcommands.push_back(line);
    }
    parserFile.close();
}

pair<string, string> devide(string s){
    string t = "";
    string z = "";
    int cnt = 0;
    while(cnt < s.size() && s[cnt] != ' '){
        t += s[cnt];
        cnt++;
    }
    cnt ++;
    while(cnt < s.size() && s[cnt] != ' '){
        z += s[cnt];
        cnt++;
    }
    return make_pair(t, z);
}


int process_port_cell(int ind){
    string cellword = portcommands[ind];
    int cnt = 0;
    int lin = 0;
    int lout = 0;
    unordered_map<string, int> this_port;
    unordered_map<int, string> this_port_revers;
    int x = vlib_names[cellword];
    for(int i = ind + 1; i < portcommands.size(); i++){
        string line = portcommands[i];
        if(line.substr(0,3) == "GEN"){
            ind = i - 1;
            break;
        }
        pair<string, string> ps = devide(line);
        string t = ps.second;
        string port_type = ps.first;
        if(port_type == "input"){
            lin = cnt + 1;
        }
        else if (port_type == "output"){
            lout = cnt + 1;
        }
        else{
            cout<<"WARN "<<t<<" "<<port_type<<endl;
        }
        this_port_revers[cnt] = t;
        this_port[t] = cnt++;
    }
    vlib_size[x] = cnt;
    vlib_lin[x] = lin;
    vlib_lout[x] = lout;
    vlib_ports_revers[x] = this_port_revers;
    vlib_ports[x] = this_port;
    return ind;
}

void portparser_process(){
    vlib_ports.resize(vlib_signals.size());
    vlib_ports_revers.resize(vlib_signals.size());
    for(int i = 0 ; i < portcommands.size(); i++){
        string& line = portcommands[i];
        if(line.substr(0,3) == "GEN"){
            i = process_port_cell(i);
        }
    }
}

void process_port_parser(string input){
    port_restore_commands(input);
    portparser_process();
}

/*
int main(int argc, char *argv[]){
    component_preprocess("example.vlib", "primitive.vlib");//remove this

    port_restore_commands(argv[1]);
    portparser_process();
}
*/
