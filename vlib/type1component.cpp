#include<bits/stdc++.h>
#include "gatefunction.h"
#include "type1parser.h"
#include "libraryparser.h"
#include "primitiveparser.h"


using namespace std;
map<string, int> Module_map;// I could use unordered_map
vector<string> Module_name;
vector< vector< pair< string, string> > > Module_signals;
vector< vector< pair< string, vector<string> > > > Module_operations;
vector< vector< pair< string, pair<int, int> > > > Module_arrays;

struct Node {
    int index = -1;
};

void pre_process(string input){
    pre_process_modules(input);
    Module_name = get_module_names();
    Module_signals = get_module_signals();
    Module_operations = get_module_operations();
    Module_arrays = get_module_arrays();

    for(int i = 0; i < Module_name.size(); i++){
        Module_map[Module_name[i]] = i;
    }
}

int reg_to_int(vector<string> x){
    int ans = 0;
    for(int i = 0 ; i < x.size(); i++){
        ans *= 2;
        int sz = x[i].size();
        ans += x[i][sz-1] - '0';
    }
    return ans;
}

string EVENT(string pastval, string newval){
    string p1 = "";
    string p2 = "";
    if(pastval.size()){
        p1 = pastval[pastval.size() - 1];
    }
    if(newval.size()){
        p2 = newval[newval.size() - 1];
    }
    string  ans = p1;
    if(p1 != p2){
        ans += p2;
    }
    return ans;
}

vector<pair<string, string> > component_func(string comp_name, vector<pair<string, string> > vars){
    int ind = Module_map[comp_name];
    //cout<<ind<<endl;
    map<string, Node > map_signal;
    map<string, Node > map_array;
    string val[Module_signals[ind].size()];
    for(int i = 0; i < Module_signals[ind].size(); i++){
        map_signal[Module_signals[ind][i].second].index = i;
        val[i] = "x" ;
        if(Module_signals[ind][i].first == "supply1")
        val[i] = "1";
        //cout<<Module_signals[ind][i].first<<" "<<Module_signals[ind][i].second<<endl;
    }


    for(int i = 0; i < Module_arrays[ind].size(); i++){
        map_array[Module_arrays[ind][i].first].index = i;
    }
    //cout<<"----------------------\n";
    for(int i = 0; i < vars.size(); i++){
        val[map_signal[vars[i].first].index] = vars[i].second;
        //cout<<vars[i].first<<" "<<vars[i].second<<endl;
    }
    for(int i = 0; i < Module_operations[ind].size(); i++){
        /*cout<<"LOG VARS : ";
        for(int i2 = 0 ; i2 < Module_signals[ind].size(); i2++){
            cout<<Module_signals[ind][i2].second<<" -> "<<val[map_signal[Module_signals[ind][i2].second].index]<<"   ";
        }
        cout<<endl;*/
        string operation = Module_operations[ind][i].first;
        /*cout<<"OPERATION "<<operation<<endl;
        for(int j = 0 ; j < Module_operations[ind][i].second.size(); j++){
            cout<<Module_operations[ind][i].second[j]<<" ";
        }
        cout<<endl<<endl;*/
        vector<string> v;
        for(int j = 1; j < Module_operations[ind][i].second.size(); j++){
            v.push_back(val[map_signal[ Module_operations[ind][i].second[j]].index]);
        }
        string ans = "??";
        if(operation == "and"){
            ans = and_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "nand"){
            ans = nand_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "or"){
            ans = or_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "nor"){
            ans = nor_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "xor"){
            ans = xor_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "xnor"){
            ans = xnor_gate(v);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "not"){
            ans = not_gate(v[0]);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "buf"){
            ans = buf_gate(v[0]);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation.substr(0,3) == "udp"){
            ans = udp_gate(operation, v, val[map_signal[ Module_operations[ind][i].second[0]].index]);
            string z = val[map_signal[Module_operations[ind][i].second[0]].index];
            val[map_signal[Module_operations[ind][i].second[0]].index] = EVENT(z, ans);
        }
        if(operation == "always"){
            bool al = false;
            for(int j = 0 ; j < Module_operations[ind][i].second.size(); j++){
                string x = Module_operations[ind][i].second[j];
                if(x == "posedge" || x == "negedge"){
                    string y = val[map_signal[Module_operations[ind][i].second[j+1]].index];
                    if(check_edge(x, y)){
                        al = true;
                    }
                }
            }
            if(!al){
                while(Module_operations[ind][i].first != "end"){
                    i++;
                }
            }
        }

        if(operation == "if"){
            int equals = 0;
            for(int j = 0 ; j < Module_operations[ind][i].second.size(); j++){
                string x = Module_operations[ind][i].second[j];
                if(x == "=="){
                    equals = j;
                }
            }
            string side1 = "1";
            for(int j = 1 ; j < equals; j++){
                string x = Module_operations[ind][i].second[j];
                string y = Module_operations[ind][i].second[j+1];
                vector<string> vif;
                if(x == "~"){
                    //vif.push_back(val[signal[y]]);//??
                    side1 = not_gate(val[map_signal[y].index]);
                }
                else if(x == "&"){
                    vif.push_back(val[map_signal[y].index]);
                    vif.push_back(side1);
                    side1 = and_gate(vif);
                }
                else if(x == "|"){
                    vif.push_back(val[map_signal[y].index]);
                    vif.push_back(side1);
                    side1 = or_gate(vif);
                }
                else{
                    side1 = val[map_signal[x].index];
                }
                if(side1[side1.size()-1] != '1'){
                    while(Module_operations[ind][i].first != "end"){
                        i++;
                    }
                }
            }
        }
        if(operation == "assign"){
            //vector< vector< pair< string, vector<string> > > > Module_operations;
            int assign_index = 0;
            vector<string> assign_word;
            for(int j = 0; j < Module_operations[ind][i].second.size(); j++){
                string word = Module_operations[ind][i].second[j];
                assign_word.push_back(word);
                if(word == "<="){
                    assign_index = j;
                }
                //cout<<Module_operations[ind][i].second[j]<<" ";
                string left_side = assign_word[0];
                string right_side = assign_word[assign_index + 1];
                int left_id = map_signal[left_side].index;
                int right_id = map_signal[right_side].index;

                if(left_id != -1 && right_id != -1){
                    string side1 = val[right_id];
                    for(int k = assign_index + 2; k < assign_word.size(); k++){
                        string x = assign_word[k];
                        string y = assign_word[k+1];
                        vector<string> vif;
                        if(x == "~"){
                            side1 = not_gate(val[map_signal[y].index]);
                        }
                        else if(x == "&"){
                            vif.push_back(val[map_signal[y].index]);
                            vif.push_back(side1);
                            side1 = and_gate(vif);
                        }
                        else if(x == "|"){
                            vif.push_back(val[map_signal[y].index]);
                            vif.push_back(side1);
                            side1 = or_gate(vif);
                        }
                    }
                    val[left_id] = side1;
                }
                else if(left_id != -1 && (right_side == "0" || right_side == "1")){
                    val[left_id] = right_side;
                }
                else{
                    //both sides are arrays
                    left_id = map_array[left_side].index;
                    int leftup1 = Module_arrays[ind][left_id].second.first;
                    int leftup2 = Module_arrays[ind][left_id].second.second;
                    right_id = map_array[right_side].index;
                    int rightup1 = Module_arrays[ind][right_id].second.first;
                    int rightup2 = Module_arrays[ind][right_id].second.second;
                    if(rightup2 == 0 && leftup2 == 0){
                        //both 1d arrays
                        if(rightup1 != leftup1){
                            cout<<"impossible"<<endl;
                        }
                        for(int k = 0 ; k <= leftup1 ; k++){
                            string x = left_side + "[" + to_string(k) + "]";
                            string y = right_side + "[" + to_string(k) + "]";
                            val[map_signal[x].index] = val[map_signal[y].index];
                        }
                    }
                    else{
                        if(leftup2 == 0){
                            string a = assign_word[assign_index + 2];
                            a = a.substr(1, a.size() - 2);
                            vector<string> vtemp;
                            for(int k = rightup1; k >= 0; k--){
                                string tmpval = right_side + "[" + to_string(k) + "]";
                                string tmpvll = val[map_signal[tmpval].index];
                                vtemp.push_back(tmpvll);
                            }
                            int a_val = reg_to_int(vtemp);
                            for(int k = 0; k <= leftup1; k++){
                                string tmpval_r = right_side + "[" + to_string(a_val) + "]" + "[" + to_string(k) + "]";
                                string tmpval_l = left_side + "[" + to_string(k) + "]";
                                val[map_signal[tmpval_l].index] = val[map_signal[tmpval_r].index];
                            }
                        }
                        else{
                            string a = assign_word[1];
                            a = a.substr(1, a.size() - 2);
                            vector<string> vtemp;
                            for(int k = rightup1; k >= 0; k--){
                                string tmpval = right_side + "[" + to_string(k) + "]";
                                string tmpvll = val[map_signal[tmpval].index];
                                vtemp.push_back(tmpvll);
                            }
                            int a_val = reg_to_int(vtemp);
                            int area_up_l = leftup2;
                            int area_down_l = 0;
                            int area_up_r = rightup2;
                            int area_down_r = 0;
                            if(assign_word[2] != "<="){
                                pair<int,int> p = brackets(assign_word[2]);
                                area_up_l = p.first;
                                area_down_l = p.second;
                            }
                            if(assign_word.size() > assign_index + 2){
                                pair<int,int> p = brackets(assign_word[assign_index + 2]);
                                area_up_r = p.first;
                                area_down_r = p.second;
                            }
                            for(int k = 0 ; k <= (area_up_l - area_down_l); k++){
                                string tmpval_l = left_side + "[" + to_string(a_val) + "]" + "[" + to_string(k + area_down_l) + "]";
                                string tmpval_r = right_side + "[" + to_string(k + area_down_r) + "]";
                                val[map_signal[tmpval_l].index] = val[map_signal[tmpval_r].index];
                            }
                        }
                    }
                }
            }
            //cout<<endl;


        }

    }
    /*cout<<"LOG VARS : ";
    for(int i2 = 0 ; i2 < Module_signals[ind].size(); i2++){
        cout<<Module_signals[ind][i2].second<<" -> "<<val[map_signal[Module_signals[ind][i2].second].index]<<"   ";
    }
    cout<<endl;*/
    for(int i = 0; i < vars.size(); i++){
        vars[i].second = val[map_signal[vars[i].first].index];
    }
    return vars;
}

void test_component(){
    string name = "GEN_A0221_D1";
    vector<pair<string, string> > vars, ans;
    vars.push_back(make_pair("a1", "01"));
    vars.push_back(make_pair("a2", "x1"));
    vars.push_back(make_pair("b1", "x1"));
    vars.push_back(make_pair("b2", "x1"));
    vars.push_back(make_pair("c", "x1"));
    vars.push_back(make_pair("z", "x"));
    ans = component_func(name, vars);
    //cout<<"---------------------\n";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

}

void component_preprocess(string input1, string input2){
    pre_process(input1);
    preprocess_primitive(input2);
}

/*
int main(int argc, char *argv[]){
    pre_process(argv[1]);
    preprocess_primitive(argv[2]);
    test_component();
}*/
