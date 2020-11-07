#include"sdfparser.h"
#include "../object.h"
#include "../vlib/libraryparser.h"
#include<bits/stdc++.h>
using namespace std;

vector<string> sdf_lines;
unordered_map<string,int> sdf_instance;
vector<Gate> delays_vec;

string sdf_erase_extra_space(string line){
    int n = line.size();
    string s = "";
    int cnt = 0;
    while(line[cnt] == ' '){
        cnt++;
    }
    for(int i = cnt; i < n; i++){
        if(line[i] == '(' || line[i] == ')' || line[i] == ',' || line[i]=='"')
        line[i] = ' ';
        if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
        continue;
        if(line[i] == '{' || line[i] == '}')
        s += " ";
        s += line[i];
        if(line[i] == '{' || line[i] == '}')
        s += " ";
    }
    return s;
}

vector<string> sdf_get_all_word(string s){
    vector<string> v;
    string t;
    int cnt = 0 ;
    while(cnt < s.size()){
        if(s[cnt] != ' ' && s[cnt] != ';')
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

void sdf_restore_commands(string input){
    ifstream sdf_inFile;
    sdf_inFile.open(input);
    if (!sdf_inFile){
        cerr << "Unable to open file datafile.txt";
        exit(1);
    }
    string line;
    string command;
    while (getline(sdf_inFile, line)) {
		line = check_valid_ascii(line);
        line = sdf_erase_extra_space(line);
        //cout<<line<<endl;
        //if(line.size() == 0 || line.substr(0,2) == "//")
        //continue;
        //command = erase_extra_space(line);
        sdf_lines.push_back(line);
    }
    sdf_inFile.close();

}

int convert_int(string s){
    int ans=0;
    for(int i=0;i<s.size()-1;i++){
        int x=(int)(s[i])-(int)'0';
        ans+=x;
        ans*=10;
    }
    int x=(int)s[s.size()-1]-(int)'0';
    ans+=x;
    return ans;
}

string dig_num(string s){
    string t;
    int i=0;
    /*for(i;i<s.size();i++){
        if(s[i]<='9' && s[i]>='1')
        break;
    }*/
    for(i;i<s.size();i++)
      if(s[i]==':'){
	i++;
	break;
      }
    for(i;i<s.size();i++){
        if(s[i] == '.') continue;
        if(s[i]==':') return t;
        t+=s[i];
    }
    return t;
}

void sdf_command_process(){
    Gate sd;
    delay dl;
    int cnt=0;
    for(int i=0 ; i < sdf_lines.size(); i++){
        vector<string> line = sdf_get_all_word((sdf_lines[i]));
        //cout<<"here"<<endl;
        if(line.size()!=0){
            if(line[0]=="CELLTYPE"){
                if(cnt>1){
                    //cout<<sd.name<<endl;
                    sdf_instance[sd.type] = delays_vec.size();
                    delays_vec.push_back(sd);
                    sd.dl.clear();
                }
                cnt++;
                sd.type = line[1];
            }
            if(line[0]=="INSTANCE" && line.size()==2){
                sd.name = line[1];
            }
            //cout<<"#3"<<endl;
            if(line[0]=="iopath"){
                int x=1;
                dl.edge="non";
                if(line[1]=="posedge" || line[1]=="negedge"){
                    x++;
                    if(line[1]=="posedge")
                    dl.edge="pos";
                    else
                    dl.edge="neg";
                }
                dl.in = line[x];
                dl.out = line[x+1];
                dl.ris = convert_int(dig_num(line[x+2]));
                if(line.size() == x+3){
                    dl.fal = convert_int(dig_num(line[x+2]));
                }
                else{
                    dl.fal = convert_int(dig_num(line[x+3]));
                }

                sd.dl.push_back(dl);
            }
        }
    }
    delays_vec.push_back(sd);
}

void sdf_process(string input1){
    sdf_restore_commands(input1);
    sdf_command_process();
}



/*int main(int argc, char *argv[]){
sdf_restore_commands(argv[1]);
sdf_command_process();
}*/
