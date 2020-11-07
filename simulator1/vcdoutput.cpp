#include<bits/stdc++.h>
#include"vcdoutput.h"
#include"../object.h"
#include "../vlib2/vlib_files/lib.h"
#include "../vlib2/vlib_files/vlib.h"

using namespace std;

extern vector<pair<int, int> > array_vec;
extern vector<int> array_start;
extern vector<string> array_name;
extern vector<Signal> signal_vector;


ofstream outFile;


string val_to_string(VAL x){
    x = second(x);
    if(x == O) return "0";
    if(x == I) return "1";
    if(x == X) return "x";
    if(x == Z) return "z";
    return "x";
}

void vo_prewriting(){
    outFile<<"$timescale"<<endl;
	outFile<<"1ps"<<endl;
    outFile<<"$end"<<endl;
    outFile<<"$scope module tbench $end"<<endl;
    outFile<<"$scope module tbench $end"<<endl;
}

long long int total_sum_of_events;

void vo_wire_defining(){
    for(int i = 3 ; i < signal_vector.size(); i++){
        Signal& signall = signal_vector[i];
		total_sum_of_events += signall.vaweform.size();

        //if(signall.type != "output") continue;
        if(signall.array_ind == -1){
            outFile<<"$var wire 1 !"<<i<<" "<<signall.name<<" $end"<<endl;
        }
    }
    for(int i = 0 ; i < array_vec.size(); i++){
        int upper = array_vec[i].first;
        int lower = array_vec[i].second;
        outFile<<"$var wire "<<abs(upper - lower) + 1<<" %"<<i<<" "<<array_name[i]<<" ["<<upper<<":"<<lower<<"] $end"<<endl;
    }
	cout<<"total events : "<<total_sum_of_events<<endl;
    outFile<<"$upscope $end"<<endl;
    outFile<<"$upscope $end"<<endl;
    outFile<<"$enddefinitions $end"<<endl;
    outFile<<"$dumpvars"<<endl;
}

void output_process(){

    outFile.open("vcdoutput.vcd");
    vo_prewriting();
    vo_wire_defining();
    set<pair <long long int, int > > st;
    pair<long long int , int> p;
    vector<int> svalue(signal_vector.size());
    vector<int> slast(signal_vector.size());
    vector<int> alast(array_vec.size());
    vector<long long int> amark(array_vec.size());

    for(int i = 0 ; i < array_vec.size(); i++){
        amark[i] = -1;
    }

    for(int i = 3 ; i < signal_vector.size(); i++){
        Signal& signall = signal_vector[i];
        //if(signall.type != "output") continue;
		for(int j = 1; j < signall.vaweform.size(); j++){
			if(signall.vaweform[j].time <= signall.vaweform[j - 1].time){
				//cout<<"oho "<<i<<" "<<signall.name<<" "<<j<<" "<<signall.vaweform[j].time<<" "<<signall.vaweform[j - 1].time<<endl;
			}
		}
        p.first = signall.vaweform[0].time;
        p.second = i;
        st.insert(p);
    }
    long long int TIME = 0;
    p = *st.begin();
    while(st.size()){
        TIME = p.first;
        outFile<<'#'<<TIME<<endl;
        int last_array = 0;
        while(p.first == TIME && st.size()){
            st.erase(st.begin());
            int id = p.second;
            Signal& signall = signal_vector[id];
            if(signall.array_ind == -1){
                string x = val_to_string(signall.vaweform[slast[id]].value);
                outFile<<x<<"!"<<id<<endl;
                slast[id]++;
                if(slast[id] < signall.vaweform.size()){
                    st.insert(make_pair(signall.vaweform[slast[id]].time , id));
                }
            }
            else{
                int arr_id = signall.array_ind;
                if(amark[arr_id] < TIME){
                    amark[arr_id] = TIME;
                    alast[last_array] = arr_id;
                    last_array++;
                }
            }
            p = *st.begin();
        }
        for(int i = 0 ; i < last_array; i++){
            int arr_id = alast[i];
            int cnts = array_start[arr_id];
            pair<int, int> p1 = array_vec[arr_id];
            int upper = p1.first;
            int lower = p1.second;
            int cnt = upper;
            int z = 1;
            if(upper > lower){
                z = -1;
                cnts += upper - lower;
            }
            outFile<<'b';
            while(cnt != lower + z){
                Signal& signall = signal_vector[cnts];
                int xl = slast[cnts];
                if(signall.vaweform.size() > xl && signall.vaweform[xl].time == TIME){
                    string x = val_to_string(signall.vaweform[xl].value);
                    outFile<<x;
                    slast[cnts]++;
                    if(xl + 1 < signall.vaweform.size()){
                        st.insert(make_pair(signall.vaweform[xl + 1].time, cnts));
                    }
                }
                else{
                    string x = val_to_string(signall.vaweform[max(xl - 1, 0)].value);
                    outFile<<x;
                }
                cnt += z;
                cnts += z;
            }
            outFile<<" %"<<arr_id<<endl;
        }
        p = *st.begin();
    }
    outFile.close();
}
