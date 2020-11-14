/*
 * Copyright (c) 2020, ManiSadati, MohammadShahidzade All rights reserved.
 *
 * https://github.com/ManiSadati/GPU_Logic_resimulator/blob/master/LICENSE
 *
 */


#include<bits/stdc++.h>

#include "../vlib/type1parser.h"
#include "../vlib/type1component.h"
#include "../vlib/libraryparser.h"
#include "../vlib2/vlib_files/lib.h"
#include "../vlib2/vlib_files/vlib.h"
#include "../vlib/portparser.h"

using namespace std;

vector<string> lines;

void vlibg_restore_commands(string input){
	ifstream vlibg_inFile;
	vlibg_inFile.open(input);
	if (!vlibg_inFile){
		cerr << "Unable to open file datafile.txt";
		exit(1);
	}
	string line;
	string command;
	while (getline(vlibg_inFile, line)) {
		line = check_valid_ascii(line);
		if(line.size()!=0)
		lines.push_back(line);
	}
	vlibg_inFile.close();

}

extern unordered_map<string, int> vlib_names ;
extern unordered_map<string, bool> vlibsequential;

int cnt_table;
vector<int8_t> t_ans;
vector<int8_t> t_edge;
map<string,int> t_mp;

void make(string mod,int in,int ou){
	t_mp[mod] = cnt_table;
	//cout<<t_ans.size()<<endl;
	GATE* g=fgate(mod);
	VAL* v=g->pos();
	for(int k = in ; k < in + ou ; k++){
		for(int i=0;i<pow(3,in);i++){
			int x=i;
			int cnt=0;
			while(x!=0){
				int y=x%3;
				v[cnt++]=(VAL)y;
				x/=3;
			}
			for(int j=cnt;j<in;j++)
				v[j]=O;
			g->function();

			VAL z = v[k];
			z = second(z);
			t_ans.push_back((int8_t)z);

			cnt_table++;
		}
	}
}

void vlibg_process(){
	//component_preprocess("../vlib/example.vlib", "../vlib/primitive.vlib");
	vlibg_restore_commands("../vlib_gpu/pars4.txt");
	bool flag=false;
	int in=0,ou=0;
	string mod="";
	for(int i=0;i<lines.size();i++){
		vector<string> com=get_all_word(erase_extra_space(lines[i]));
		if(com[0][0]=='G'){
			if(flag==true)
			make(mod,in,ou);
			in=0;
			ou=0;
			flag=false;
			if(vlibsequential[com[0]]==false){
				flag=true;
				mod=com[0];
			}
		}
		else if(com[0][0]=='i'){
			in++;
		}
		else
		ou++;
	}
	for(int i = 0 ; i < 16 ; i++){
		int pre = i / 4;
		int now = i % 4;
		int answer = 0;
		if(pre == now){
			answer = 0;
		}
		else if(pre == 0 || now == 1){
			answer = 1;
		}
		else if(pre == 1 || now == 0){
			answer = 2;
		}
		else if(pre == 2 && now == 3){
			answer = 3;//min
		}
		else if(pre == 3 && now == 2){
			answer = 4;//max
		}
		t_edge.push_back(answer);
	}
}
