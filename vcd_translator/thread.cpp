#include<bits/stdc++.h>
#include "vcdparser.h"
#include "../object.h"

using namespace std;

const int threads_num=16;

thread threads[threads_num];

vector< string> vcdcommands;

ifstream vcdinFile;
unordered_map<string, pair<int, int> > var_reference;

vector< Signal > tmp_vcd_signals[threads_num];

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
            v.emplace_back(t);
            t = "";
        }
        cnt++;
    }
    if(t.size())
    v.emplace_back(t);
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

vector<int> hashtag;

void vcdrestore_commands(string input){
    //vcdcommands.reserve(10000000);
    vcdinFile.open(input);
    if (!vcdinFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    string command;
    int cnt=0;
    while (getline(vcdinFile, line)) {
        line = vcderase_extra_space(line);
        if(line.size() == 0 || line.substr(0,2) == "//")
        continue;
        command = vcderase_extra_space(line);
        if(command[0]=='#')
            hashtag.emplace_back(cnt);
        cnt++;
        vcdcommands.emplace_back(command);
    }
    vcdinFile.close();
    cout<<"here"<<endl;

}

void vcdrestore_commands1(string input){

    vcdcommands.reserve(100000);
    long long int cnt = 0;
    long long int cnt1 = 0;
    FILE* fi = fopen (input.c_str(), "r");
    char c_word[3000];
    while(fscanf(fi,"%s",c_word) != EOF){
        string words=(string)c_word;
        if(words == "$var"){
          cnt1++;
          int size=0;
          int lower=0;
          int upper=0;
          char junk;
          char name1[10];
          char name2[1000];
          fscanf(fi,"%s%d%s%s%c%c",c_word,&size,name1,name2,&junk,&junk);
          //cout<<"jubk :"<<junk<<endl;
          if(junk=='['){
                 fscanf(fi,"%d%c%d%c",&upper,&junk,&lower,&junk);
          }
            string identifier = (string)name1;
            string reference = (string)name2;
            if(size>1){
                int first_of_array = tmp_vcd_signals[0].size();

                if(upper > lower){
                    for(int i = upper; i >= lower; i--){
                        string t = reference + "[" + to_string(i) + "]";
                        Signal tmp;
                        tmp.name = t;
                        tmp_vcd_signals[0].emplace_back(tmp);

                    }
                }
                else{
                    for(int i = upper; i <= lower; i++){
                        string t = reference + "[" + to_string(i) + "]";
                        Signal tmp;
                        tmp.name = t;
                        tmp_vcd_signals[0].emplace_back(tmp);

                    }
                }
                int end_of_array = tmp_vcd_signals[0].size() - 1;

                var_reference[identifier] = make_pair(first_of_array, end_of_array);
            }
            else{
                Signal tmp;
                tmp.name = reference;
                int tmp_size = tmp_vcd_signals[0].size();
                tmp_vcd_signals[0].emplace_back(tmp);
                var_reference[identifier] = make_pair(tmp_size, tmp_size);
            }
        }
        if(words[0]=='#')
            hashtag.emplace_back(cnt);
        if((words[0]=='#' || words[0]=='0' || words[0]=='1' || words[0]=='x' || words[0]=='z')&& cnt1>0){
            vcdcommands.emplace_back(words);
            cnt++;
        }
        if(words[0]=='b' && cnt1>0){
            char c_word_1[100];
            fscanf(fi,"%s",c_word_1);
            string s=(string)c_word_1;
            vcdcommands.emplace_back(words+" "+s);
            cnt++;
        }
    }
    fclose(fi);
}

void vcdpre_process(int start,int finish,int index){
  //if(index>0)
  //for(int j=0;j<tmp_vcd_signals[0].size();j++)
  // tmp_vcd_signals[index].emplace_back(tmp_vcd_signals[0][j]);

    long long int TIME = 0;
	long long int cnt = 0;
    string line;
    string command;
    for(int k=start;k<finish;k++){
        command = vcdcommands[k];
		cnt++;
		//if(cnt > 13000000) break;
        vector<string> words = vcdget_all_word(command);
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
                tmp_vcd_signals[index][ind].vaweform.emplace_back(tmp);

			}
            for(int i = dif ; i < arr_sz; i++){
                int ind = bfirst + i;
                string x = words[0].substr(i - dif + 1, 1);
                Event tmp(TIME, vcd_toval(x));
                tmp_vcd_signals[index][ind].vaweform.emplace_back(tmp);

            }
        }
        if(words[0][0] == '0' || words[0][0] == '1' || words[0][0] == 'x' || words[0][0] == 'z'){
            string x = words[0].substr(0,1);
            string y = words[0].substr(1,sz-1);
            int varid = var_reference[y].first;
            Event tmp(TIME, vcd_toval(x));
            tmp_vcd_signals[index][varid].vaweform.emplace_back(tmp);
        }
    }

}



//int main(int argc, char *argv[]){
void vcd_process(string input1){
	//auto t1 = std::chrono::high_resolution_clock::now();
    //vcdrestore_commands(input1);
	auto t2 = std::chrono::high_resolution_clock::now();
	//auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    vcdrestore_commands1(input1);
    auto t3 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(\
									   t3 - t2 ).count();;

    cout<<"hashtag[0]= "<<hashtag[0]<<endl;
    for(int i=1;i<threads_num;i++){
        tmp_vcd_signals[i].reserve(tmp_vcd_signals[0].size());
        for(int j=0;j<tmp_vcd_signals[0].size();j++){
            tmp_vcd_signals[i].emplace_back(tmp_vcd_signals[0][j]);
	    }
    }
    cout<<"thread_phase"<<endl;

    int p=0;
    int j=0;
    for(int i=1;i<threads_num;i++){
        for(j;j<hashtag.size();j++)
            if(hashtag[j]>i*(vcdcommands.size()/threads_num)){
                threads[i-1] = thread(vcdpre_process,p,hashtag[j],i-1);
                p=hashtag[j];
                break;
            }
    }
    threads[threads_num-1] = thread(vcdpre_process,p,vcdcommands.size(),threads_num-1);
    for(int i=0;i<threads_num;i++)
        threads[i].join();
	cout<<"duration : "<<duration2<<endl;

}
