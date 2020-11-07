#include<bits/stdc++.h>
#include "libraryparser.h"
#include "type1parser.h"

using namespace std;

ifstream inFile;
vector<string> commands;
vector<string> module_name;
vector< vector< pair< string, pair<int, int> > > > module_arrays;
vector< vector< pair< string, string> > > module_signals;
vector< vector< pair< string, vector<string> > > > module_operations;
unordered_map<string, int> vlib_names ;
unordered_map<string, bool> vlibsequential;
vector<unordered_map<string, string> > vlib_signals;
vector<unordered_map<string, pair<int,int > > > vlibarrays;

string operations[11] = { "and", "or", "not", "nand", "nor", "xor", "xnor" , "udp_xbuf", "udp_dff", "udp_tlat", "udp_mux2"};


int process_module(int id){
    vector<string> module_words = get_all_word(commands[id]);
    vector< pair< string, vector<string> > >v;
    vector< pair< string, string> > v1;
    vector< pair<string, pair<int, int> > > arrv;
    unordered_map<string, string> this_module_signals_map;
    unordered_map<string, pair<int, int > > this_module_arrays_map;
    int ind = id + 1;
    vlib_names[module_words[1]] = module_name.size();
    //cout<<"-*- "<<module_words[1]<<" "<<module_name.size()<<endl;
    module_name.push_back(module_words[1]);

    while(true){
		//cout<<"! "<<commands[ind]<<" "<<commands[ind].size()<<endl;
		if(commands[ind].size() == 0){
			ind++;
			continue;
		}
        vector<string> words = get_all_word(commands[ind]);
		//cout<<"!!"<<endl;
		//cout<<"--"<<endl;
		//cout<<commands[ind]<<endl;
		//cout<<ind<<" ."<<words[0]<<". "<<words.size()<<endl;
		//cout<<"-"<<ind<<"*"<<endl;
		//cout<<words.size()<<" w1"<<words[0]<<"w2"<<endl;
		//cout<<"--"<<endl;
        vector<string> assign_words;
        bool op = false;
        int opid = 0;
        for(int i = 0; i < 11; i++){
            if(words[0] == operations[i]){
                op = true;
                opid = i;
            }
        }

        if(words[0] == "endmodule"){
			//cout<<"HEY I SEE endmodule but idgaf"<<endl;
			break;
		}

        if(words[0] == "specify"){
            while(commands[ind].substr(0,10) != "endspecify")
            ind++;
        }


        if(op){
            if(words[0] == "upd_dff" || words[0] == "udp_tlat"){
                vlibsequential[module_words[1]] = true;
            }
            vector<string> v2;
            int x = 0;
            if(opid >= 7){
                x++;
            }
            for(int k = 1 + x ; k < words.size(); k++){
                v2.push_back(words[k]);
            }
            v.push_back(make_pair(words[0], v2));
        }


        if(words[0] == "input" || words[0] == "output" || words[0] == "wire" || words[0] == "supply1" || words[0] == "reg"){
            if(words[0] == "reg"){
                vlibsequential[module_words[1]] = true;
            }
            else if(words[1][0] == '['){
                pair<int, int> p = brackets(words[1]);
                int upper = p.first;
                int lower = p.second;
                if(words[0] == "input" || words[0] == "output"){
                    this_module_arrays_map[words[2]] = p;
                }
                int x = 1;
                //arrv.push_back(make_pair(words[2], make_pair(max(upper, lower) - min(upper, lower) + 1,0)));
                arrv.push_back(make_pair(words[2], make_pair(upper, 0)));
                /*if(upper < lower){
                    for(int j = upper; j <= lower; j++){
                        string num = to_string(j);
                        string t = words[2] + "[" + num + "]";
                        v1.push_back(make_pair(words[0], t));
                        if(words[0] == "input" || words[0] == "output"){
                            this_module_signals_map[t] = words[0];
                        }
                    }
                }*/
                if(upper >= lower){
                    for(int j = upper; j >= lower; j--){
                        string num = to_string(j);

                        string t = words[2] + "[" + num + "]";
                        v1.push_back(make_pair(words[0], t));
                        if(words[0] == "input" || words[0] == "output"){
                            this_module_signals_map[t] = words[0];
                            //cout<<"-*- "<<t <<" "<<words[0]<<endl;
                        }
                    }
                }
            }
            else{
                for(int k = 1; k < 2; k++){
                    v1.push_back(make_pair(words[0], words[k]));
                    if(words[0] == "input" || words[0] == "output"){
                        this_module_signals_map[words[k]] = words[0];
                    }
                }
            }
        }
        ind++;
    }
    vlib_signals.push_back(this_module_signals_map);
    vlibarrays.push_back(this_module_arrays_map);
    module_operations.push_back(v);
    module_signals.push_back(v1);
    module_arrays.push_back(arrv);
    return ind;

}

void process_commands(){
    int signal = 0;
	//cout<<"**"<<endl;
    for(int i = 0; i < commands.size(); i++){
        string command = commands[i];
        vector<string> words = get_all_word(command);
        if(words[0] == "module"){
			//cout<<words[0]<<" "<<words[1]<<" "<<i<<endl;
            i = process_module(i);
        }
    }
	//cout<<"**"<<endl;
}

void restore_commands(string input){
    inFile.open(input);
    if (!inFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    string command;
    while (getline(inFile, line)) {
		line = check_valid_ascii(line);
        line = erase_extra_space(line);
        if(line.size() == 0 || line.substr(0,2) == "//")
        continue;
        command = erase_extra_space(line);
        commands.push_back(command);
    }
    inFile.close();

}

void pre_process_modules(string arg1){
    restore_commands(arg1);
    process_commands();
}

vector<string> get_module_names(){
    return module_name;
}

vector<vector<pair<string, string> > > get_module_signals(){
    return module_signals;
}

vector< vector< pair< string, pair<int, int> > > > get_module_arrays(){
    return module_arrays;
}

vector< vector< pair< string, vector<string> > > > get_module_operations(){
    return module_operations;
}

/*
int main(int argc, char *argv[]){
restore_commands(argv[1]);
process_commands();
for(int i = 0 ; i < module_name.size(); i++){
//if(module_name[i] != "GEN_RAMS_SP_WENABLE21_64x21")continue;
cout<<module_name[i]<<endl;
for(int j = 0; j < module_arrays[i].size(); j++){
cout<<module_arrays[i][j].first<<" "<<module_arrays[i][j].second.first<<" "<<module_arrays[i][j].second.second<<endl;
}
}
}
*/
int test(int x){
    return x+1;
}
