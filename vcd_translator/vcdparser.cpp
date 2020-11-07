#include<bits/stdc++.h>
#include "vcdparser.h"
#include "../object.h"
#include "../vlib/libraryparser.h"

using namespace std;

ifstream vcdinFile;
unordered_map<string, pair<int, int> > var_reference;

vector< Signal > tmp_vcd_signals;

VAL toval(string s){
    VAL x = X;
    if(s == "0"){
        return O;
    }
    if(s == "1"){
        return I;
    }
    if(s == "x"){
        return X;
    }
    if(s == "z"){
        return Z;
    }
    if(s == "01"){
        return OI;
    }
    if(s == "10"){
        return IO;
    }
    if(s == "x0"){
        return XO;
    }
    if(s == "x1"){
        return XI;
    }
    if(s == "1x"){
        return IX;
    }
    if(s == "0x"){
        return OX;
    }
    return x;
}

VAL vcd_toval(string s){
	VAL x = X;
    if(s == "0"){
        return O;
    }
    if(s == "1"){
        return I;
    }
    if(s == "x"){
        return X;
    }
    if(s == "z"){
        return Z;
    }
	return x;
}

string vcderase_extra_space(string line){
    int n = line.size();
    string s = "";
    int cnt = 0;
    while(line[cnt] == ' '){
        cnt++;
    }
    for(int i = cnt; i < n; i++){
        if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
        continue;
        s += line[i];
    }
    return s;
}


//duration : 3300366 10515538
//Durations : 13815928 987808


vector<string> vcdget_all_word(string s){
    vector<string> v;
    string t;
    int cnt = 0 ;
    while(cnt < s.size()){
        if(s[cnt] != ' ')
        t += s[cnt];
        else{
            if(t.size())
            v.push_back(t);
            t = "";
        }
        cnt++;
    }
    if(t.size())
    v.push_back(t);
    return v;
}

pair<int,int> vcdbrackets(string s){
    int cnt = 1;
    int x = 0;
    int y = 0;
    while(s[cnt]<= '9' && s[cnt] >='0'){
        x *= 10;
        x += s[cnt] - '0';
        cnt++;
    }
    cnt++;
    while(cnt < s.size() && s[cnt]<= '9' && s[cnt] >='0'){
        y *= 10;
        y += s[cnt] - '0';
        cnt++;
    }
    return make_pair(x,y);
}


void vcdpre_process(string input){
    long long int TIME = 0;
	long long int cnt = 0;
	vcdinFile.open(input);
    if (!vcdinFile){
        cerr << "Unable to open file *.vcd";
        exit(1);
    }
    string line;
    string command;
	while (getline(vcdinFile, line)) {
        line = vcderase_extra_space(line);
        if(line.size() == 0 || line.substr(0,2) == "//")
        continue;
		line = check_valid_ascii(line);
        command = vcderase_extra_space(line);
		cnt++;
		//if(cnt > 13000000) break;
        vector<string> words = vcdget_all_word(command);
        if(words[0] == "$var"){
            string identifier = words[3];
            string reference = words[4];
            bool arr = false;
            int upper = 0;
            int lower = 0;
            if(words[5] != "$end"){
                pair<int, int> T = vcdbrackets(words[5]);
                arr = true;
                upper = T.first;
                lower = T.second;
				int first_of_array = tmp_vcd_signals.size();

                if(upper > lower){
                    for(int i = upper; i >= lower; i--){
                        string t = reference + "[" + to_string(i) + "]";
                        Signal tmp;
                        tmp.name = t;
                        tmp_vcd_signals.push_back(tmp);

                    }
                }
                else{
                    for(int i = upper; i <= lower; i++){
                        string t = reference + "[" + to_string(i) + "]";
                        Signal tmp;
                        tmp.name = t;
                        tmp_vcd_signals.push_back(tmp);

                    }
                }
				int end_of_array = tmp_vcd_signals.size() - 1;

                var_reference[identifier] = make_pair(first_of_array, end_of_array);
			}
            else{
                Signal tmp;
                tmp.name = reference;
				int tmp_size = tmp_vcd_signals.size();
                tmp_vcd_signals.push_back(tmp);
                var_reference[identifier] = make_pair(tmp_size, tmp_size);
            }
        }
        int sz = words[0].size();
        if(words[0][0] == '#'){
            TIME = stoll(words[0].substr(1,sz-1));
        }
        if(words[0][0] == 'b'){
            string y = words[1];
			pair<int, int> p = var_reference[y];
            int bfirst = p.first;
            int blast = p.second;
			if(blast < bfirst){
				cout<<"no way boii"<<endl;
			}
			int arr_sz = blast - bfirst + 1;
			int dif = arr_sz - sz + 1;
			for(int i = 0 ; i < dif; i++){
				int ind = bfirst + i;
                string x = words[0].substr(1, 1);
				if(x == "1"){
					x = "0";
				}
                Event tmp(TIME, vcd_toval(x));
                tmp_vcd_signals[ind].vaweform.push_back(tmp);

			}
            for(int i = dif ; i < arr_sz; i++){
                int ind = bfirst + i;
                string x = words[0].substr(i - dif + 1, 1);
                Event tmp(TIME, vcd_toval(x));
                tmp_vcd_signals[ind].vaweform.push_back(tmp);

            }
        }
        if((words[0][0] == '0' || words[0][0] == '1' || words[0][0] == 'x' || words[0][0] == 'z') && cnt > 20){
            string x = words[0].substr(0,1);
            string y = words[0].substr(1,sz-1);
            int varid = var_reference[y].first;
            Event tmp(TIME, vcd_toval(x));
            tmp_vcd_signals[varid].vaweform.push_back(tmp);
        }
    }
	vcdinFile.close();

}



void vcd_process(string input1){
	//auto t1 = std::chrono::high_resolution_clock::now();
   // vcdrestore_commands(input1);
	auto t2 = std::chrono::high_resolution_clock::now();
	//auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    vcdpre_process(input1);
	auto t3 = std::chrono::high_resolution_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>( t3 - t2 ).count();;
	cout<<"duration : "<<duration2<<endl;

}
