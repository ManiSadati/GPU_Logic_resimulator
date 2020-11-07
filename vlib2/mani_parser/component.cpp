#include<bits/stdc++.h>

using namespace std;

vector<string> lines;

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
    if(line.size()!=0)
      lines.push_back(line);
  }
  sdf_inFile.close();

}

string erase_extra_space(string line){
  int n = line.size();
  string s = "";
  int cnt = 0;
  while(line[cnt] == ' '){
    cnt++;
  }
  for(int i = cnt; i < n; i++){
    if(line[i] == '(' || line[i] == ')' || line[i] == ',' || line[i] == '.' || line[i] == ';' || line[i] == ':' || line[i] == ']' || line[i] == '[')
      line[i] = ' ';
    if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
      continue;
    if(line[i] == '{' || line[i] == '}' || line[i] == '[')
      s += " ";
    s += line[i];
    if(line[i] == '{' || line[i] == '}' || line[i] == ']')
      s += " ";
  }
  return s;
}


string erase_extra_space1(string line){
  int n = line.size();
  string s = "";
  int cnt = 0;
  while(line[cnt] == ' '){
    cnt++;
  }
  for(int i = cnt; i < n; i++){
    if(line[i] == '(' || line[i] == ')' || line[i] == ',' || line[i] == '.' || line[i] == ';' )
      line[i] = ' ';
    if(i>cnt && line[i] == ' ' && line[i-1] == ' ')
      continue;
    if(line[i] == '{' || line[i] == '}' || line[i] == '~' || line[i] == '[')
      s += " ";
    s += line[i];
    if(line[i] == '{' || line[i] == '}' || line[i] == '~' || line[i] == ']')
      s += " ";
  }
  return s;
}

vector<string> get_all_word(string s){
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


int to_int(string s){
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


string replace(string s1,string s2,string s){//replace s1 and s2 in string s
  int pos=s.find(s1);
  if(pos==-1)
    return s;
  return s.substr(0,pos)+s2+s.substr(pos+s1.size());
}

string swap(string s1,string s2,string s){
  s = replace(s1,s2,s);
  //cout<<s<<endl;
  s = replace(s2,s1,s);
  return s;
}

vector<pair<string,pair<int,int> > > in_name;
vector<pair<string,pair<int,int> > > ou_name;
vector<pair<string,pair<int,int> > > re_name;

//vector<string> pri;
vector<string> static_func;
vector<pair<string,int> > inp_name;
vector<pair<string,int> > out_name;
vector<string> inp;
vector<string> out;
vector<string> reg;
vector<string> wir;
vector<string> fun;
vector<pair<string,int> > sig;
vector<string> built_in={"and","or","nor","not","nand","xor","xnor","buf"};
vector<string> primitive={"udp_xbuf","udp_dff","udp_tlat","udp_mux2"};
vector<string > p_name;
vector<string> m_name;
string module;
vector<string> all_module;
//string p_module;

ofstream ch;
ofstream cc;
ofstream cm;

void makec(){
  if(inp.size()==0)
    return;
  string st="class "+module+":public GATE{\n"+
    "public:\n";
  ch<<st;
  for(int i=0;i<inp.size();i++)
    ch<<inp[i]<<endl;
  for(int i=0;i<out.size();i++)
    ch<<out[i]<<endl;
  for(int i=0;i<reg.size();i++){
    //ghesmatie ke baiad check konam reg tekrari nabashe ke doros nis
      ch<<reg[i]<<endl;
  }
  for(int i=0;i<p_name.size();i++)
    ch<<p_name[i]<<";"<<endl;
  for(int i=0;i<m_name.size();i++)
    ch<<m_name[i]<<";"<<endl;
  ch<<"VAL* pos()override;"<<endl;
  string pos="VAL* "+module+"::pos(){\n return &"+inp_name[0].first+";\n}\n";
  cc<<pos;
  ch<<"void function()override;"<<endl;
  string func="void "+module+"::function(){\n";
  cc<<func;
  for(int i=0;i<wir.size();i++)
    cc<<wir[i]<<endl;
  for(int i=0;i<fun.size();i++)
    cc<<fun[i]<<endl;
  cc<<"}"<<endl;
  bool flag=false;
  for(int i=0;i<inp_name.size();i++)
    if(inp_name[i].second!=0)
      flag=true;
  for(int i=0;i<out_name.size();i++)
    if(out_name[i].second!=0)
      flag=true;
  if(!flag ){//&& p_name.size()==0 && reg.size()==0){
    cc<<"void "+module+"::function(";
    ch<<"void function(";
    for(int i=0;i<static_func.size();i++){
      cc<<"VAL &"<<static_func[i];
      ch<<"VAL &"<<static_func[i];
      if(i!=static_func.size()-1){
	cc<<",";
	ch<<",";
      }
    }
    cc<<"){"<<endl;
    ch<<");"<<endl;
    for(int i=0;i<wir.size();i++)
      cc<<wir[i]<<endl;
    for(int i=0;i<fun.size();i++)
      cc<<fun[i]<<endl;
    cc<<"}"<<endl;
  }
  ch<<"};"<<endl;
  //cout<<"here"<<endl;
  all_module.push_back(module);
  inp.clear();
  out.clear();
  reg.clear();
  wir.clear();
  fun.clear();
  sig.clear();
  inp_name.clear();
  out_name.clear();
  static_func.clear();
  p_name.clear();
  m_name.clear();
  cm<<module<<endl;
  for(int i=0;i<in_name.size();i++){
    if(in_name[i].second.first==0 && in_name[i].second.second==0)
      cm<<"input "<<in_name[i].first<<" "<<endl;
    else if(in_name[i].second.second==0){
      //cm<<in_name[i].second.first<<endl;
      for(int j=0;j<in_name[i].second.first;j++)
	cm<<"input "<<in_name[i].first<<"["<<j<<"]"<<endl;
    }
    else
      for(int j=0;j<in_name[i].second.first;j++)
	for(int k=0;k<in_name[i].second.second;k++)
	  cm<<"input "<<in_name[i].first<<"["<<j<<"]["<<k<<"]"<<endl;
  }
  for(int i=0;i<ou_name.size();i++){
    if(ou_name[i].second.first==0 && ou_name[i].second.second==0)
      cm<<"output "<<ou_name[i].first<<" "<<endl;
    else if(ou_name[i].second.second==0){
      //cm<<ou_name[i].second.first<<endl;
      for(int j=0;j<ou_name[i].second.first;j++)
	cm<<"output "<<ou_name[i].first<<"["<<j<<"]"<<endl;
    }
    else
      for(int j=0;j<ou_name[i].second.first;j++)
	for(int k=0;k<ou_name[i].second.second;k++)
	  cm<<"output "<<ou_name[i].first<<"["<<j<<"]["<<k<<"]"<<endl;
  }
  in_name.clear();
  ou_name.clear();
  re_name.clear();
}
      /*
void make_primitive(){
  string st="class "+module+":GATE{\n"+
    "public:\n";
  cout<<st;
  cout<<"static string s["+to_string(fun.size())+"]["+to_string(pri.size())+"]={";
  for(int i=0;i<fun.size();i++){
    vector<string> s=get_all_word(erase_extra_space(fun[i]));
    for(int j=0;j<s.size();j++){
      cout<<s[j];
      if(j!=s.size()-1)
	cout<<",";
    }
    if(i!=fun.size()-1)
      cout<<"},";
  }
  cout<<";"<<endl;
  cout<<"static void function(&"<<pri[pri.size()-1]<<;
  cout<<")override{\n";
  cout<<"for(int i=0;i<"+to_string(fun.size())+";i++){"<<endl;
  for(int i=0;i<fun.size();i++)
    cout<<"if(!part("+to_string(pri[i])+",s[i]["+to_string(i)+"]){break;}"<<endl;
  cout<<pri[pri.size()-1]<<"=to_val(s[i]["<<to_string(i)<<"]);"<<endl;
  cout<<"}\n}"<<endl;
  
}
*/
string process_assign(string s){//adadash motenazer nabashan ok kar nemikone
  string t1="";
  string t2="";
  for(int i=0;i<s.size();i++)
    if(s[i] == '='){
      t1=s.substr(0,i);
      t2=s.substr(i+1);
    }
  t2=replace(";","",t2);
  //cout<<t1<<"‌ "<<t2<<endl;
  vector<string> c1=get_all_word(erase_extra_space1(t1));
  vector<string> c2=get_all_word(erase_extra_space1(t2));
  string name1=c1[0];
  string name2=c2[0];
  int sz1=c1.size()-1;
  int sz2=c2.size()-1;
  int rsz1=0;
  int rsz2=0;
  for(int i=0;i<sig.size();i++){
    if(sig[i].first==name1)
      rsz1=sig[i].second;
    if(sig[i].first==name2)
      rsz2=sig[i].second;
  }
  int l,r;
  bool flag=false;
  for(int i=0;i<c1.size();i++){
    if(c1[i][0]=='[' && '0'<=c1[i][1] && c1[i][1]<='9'){
      t1=replace(c1[i],"[i]",t1);
      vector<string> v1=get_all_word(erase_extra_space(c1[i]));
      l=to_int(v1[0]);
      r=to_int(v1[1]);
      flag=true;
    }
    else if(c1[i][0]=='['){
      vector<string> v1=get_all_word(erase_extra_space(c1[i]));
      int x=0;
      for(int i=0;i<sig.size();i++)
	if(sig[i].first==v1[0])
	  x=sig[i].second;
      if(x>0)
	t1=replace("["+v1[0]+"]","[num("+v1[0]+",sizeof("+v1[0]+"))]",t1);
      flag=true;
    }
  }
  for(int i=0;i<c2.size();i++){
    if(c2[i][0]=='[' && '0'<=c2[i][1] && c2[i][1]<='9'){
      t2=replace(c2[i],"[i]",t2);
      vector<string> v1=get_all_word(erase_extra_space(c2[i]));
      l=to_int(v1[0]);
      r=to_int(v1[1]);
    }
    else if(c2[i][0]=='['){
      vector<string> v1=get_all_word(erase_extra_space(c2[i]));
      int x=0;
      for(int i=0;i<sig.size();i++)
	if(sig[i].first==v1[0])
	  x=sig[i].second;
      if(x>0)
	t2=replace("["+v1[0]+"]","[num("+v1[0]+",sizeof("+v1[0]+"))]",t2);
    }
  }
  if(rsz1>sz1){
    return "for(int i=0;i<sizeof("+t2+");i++)\n"+
      t1+"[i]"+" = "+t2+"[i]"+";";
  }
  else if(flag){
    return "for(int i="+to_string(min(l,r))+";i<="+to_string(max(l,r))+";i++)\n"+
      t1+" = "+t2+";";
  }
  else
    return s;
}


string pars(){//vector<string> lines){
  bool fl=false;
  for(int k=0;k<lines.size();k++){
    string line=lines[k];
    vector<string> com=get_all_word(erase_extra_space(line));
    //for(int i=0;i<com.size();i++)
    // cout<<com[i]<<endl;
    string t=line;
    if(com[0]=="input" || com[0]=="wire" || com[0]=="reg" || com[0]=="output"){
      //cout<<com[1]<<endl;
      if(com[0]=="input")
	t = replace("input","VAL",t);
      if(com[0]=="output")
	t = replace("output","VAL",t);
      if(com[0]=="wire")
	t = replace("wire","VAL",t);
      if(com[0]=="reg")
	t = replace("reg","VAL",t);
      if('0'<=com[1][0] && com[1][0]<='9'){
	int l=to_int(com[1]);
	int r=to_int(com[2]);
	t = replace("["+com[1]+":"+com[2]+"]","["+to_string(max(l,r)+1)+"]",t);
	t = swap(com[3],"["+to_string(max(l,r)+1)+"]",t);
	//cout<<t<<endl;
	
	if(com.size()==6){
	  int l1=to_int(com[4]);
	  int r1=to_int(com[5]);
	  t = replace("["+com[4]+":"+com[5]+"]","["+to_string(max(l1,r1)+1)+"]",t);
	  t = swap("["+to_string(max(l1,r1)+1)+"]","["+to_string(max(l,r)+1)+"]",t);

	  bool flag=false;
	  for(int j=0;j<sig.size();j++)
	    if(sig[j].first==com[3])
	      flag=true;
	  if(flag){
	    t=replace(t,"",t);
	  }
	  
	  sig.push_back(make_pair(com[3],2));
	  if(com[0]=="input"){
	    inp_name.push_back(make_pair(com[3],2));
	    in_name.push_back(make_pair(com[3],make_pair(max(l1,r1)+1,max(l,r)+1)));
	  }
	  if(com[0]=="output"){
	    out_name.push_back(make_pair(com[3],2));
	    ou_name.push_back(make_pair(com[3],make_pair(max(l1,r1)+1,max(l,r)+1)));
	  }
	  if(com[0]=="reg"){
	    re_name.push_back(make_pair(com[3],make_pair(max(l1,r1)+1,max(l,r)+1)));
	  }
	}
	else{
	  bool flag=false;
	  for(int j=0;j<sig.size();j++)
	    if(sig[j].first==com[3])
	      flag=true;
	  if(flag){
	    t=replace(t,"",t);
	  }
	  sig.push_back(make_pair(com[3],1));
	  if(com[0]=="input"){
	    inp_name.push_back(make_pair(com[3],1));
	    in_name.push_back(make_pair(com[3],make_pair(max(l,r)+1,0)));
	  }
	  if(com[0]=="output"){
	    out_name.push_back(make_pair(com[3],1));
	    ou_name.push_back(make_pair(com[3],make_pair(max(l,r)+1,0)));
	  }
	  if(com[0]=="reg"){
	    re_name.push_back(make_pair(com[3],make_pair(max(l,r)+1,0)));
	  }

	}
      }
      else{
	for(int i=1;i<com.size();i++){
	  bool flag=false;
	  for(int j=0;j<sig.size();j++)
	    if(sig[j].first==com[i])
	      flag=true;
	  if(!flag){
	    t=replace(com[i]+",",com[i]+"=X,",t);
	    t=replace(com[i]+";",com[i]+"=X;",t);
	  }
	  if(flag){
	    t=replace(com[i]+",","",t);
	    t=replace(com[i]+";",";",t);
	  }
	}
	for(int i=1;i<com.size();i++){
	  sig.push_back(make_pair(com[i],0));
	  if(com[0]=="input"){
	    inp_name.push_back(make_pair(com[i],0));
	    in_name.push_back(make_pair(com[i],make_pair(0,0)));
	  }
	  if(com[0]=="output"){
	    out_name.push_back(make_pair(com[i],0));
	    ou_name.push_back(make_pair(com[i],make_pair(0,0)));
	  }
	  if(com[0]=="reg"){
	    re_name.push_back(make_pair(com[i],make_pair(0,0)));
	  }
	}
      }

      if(com[0]=="input")
	inp.push_back(t);
      if(com[0]=="output")
	out.push_back(t);
      if(com[0]=="wire")
	wir.push_back(t);
      if(com[0]=="reg")
	reg.push_back(t);
      //cout<<t<<endl;
    }
    else if(com[0]=="supply0" || com[0]=="supply1"){
      t=replace("supply0","VAL",t);
      t=replace("supply1","VAL",t);
      if(com[0]=="supply0")
	for(int i=0;i<com.size();i++)
	  t=replace(com[i],com[i]+"=O",t);
      if(com[0]=="supply1")
	for(int i=0;i<com.size();i++)
	  t=replace(com[i],com[i]+"=I",t);
      fun.push_back(t);
    }
    else if(com[0]=="if"){
      //cout<<" asc asclosac aslkcbsa cjlascl "<<com[0]<<" "<<com[1]<<endl;
      if(com.size()==2){
	t=replace(com[1],com[1]+" == I ",t);
      }
      t=replace(" =="," %3==",t);
      t=replace("begin","{",t);
      t=replace("1'b1","1",t);
      t=replace("1'b0","0",t);
      for(int i=0;i<t.size();i++)
	if(t[i]=='~')
	  t[i]='!';
      fun.push_back(t);
      //cout<<t<<endl;
    }
    else if(com[0]=="always"){
      t=replace("@","",t);
      t=replace("or","||",t);
      t=replace("and","&&",t);
      t=replace("always","if",t);
      t=replace("begin","{",t);
      for(int i=0;i<com.size();i++){
	if(com[i]=="posedge")
	  t=replace("posedge "+com[i+1]," OI == "+com[i+1]+" || OX == "+com[i+1]+" || XI == "+com[i+1],t);
	if(com[i]=="negedge")
	  t=replace("negedge "+com[i+1]," IO == "+com[i+1]+" || IX == "+com[i+1]+" || XO == "+com[i+1],t);
	if(com[i]=="and")
	  t=replace(" and "," && ",t);
	if(com[i]=="or")
	  t=replace(" or "," || ",t);
      }
      fun.push_back(t);
      //cout<<t<<endl;
    }
    else if(com[0]=="endmodule" || com[0]=="specify"){
      makec();
      fl=false;
    }
    else if(com[0]=="module"){
      for(int i=2;i<com.size();i++)
	static_func.push_back(com[i]);
      module=com[1];
      fl=true;
    }
    else if(fl){
      for(int i=0;i<all_module.size();i++)
	if(com[0]==all_module[i]){
	  m_name.push_back(com[0]+" "+com[1]);
	  t=replace(com[0]+" ","",t);
	  t=replace(com[1],com[1]+".function",t);
	}
      for(int i=0;i<primitive.size();i++)
	if(com[0]==primitive[i]){
	  p_name.push_back(com[0]+" "+com[1]);
	  t=replace(com[0]+" ","",t);
	  t=replace(com[1]+" ",com[1]+".function",t);
	}
      for(int i=0;i<built_in.size();i++)
	if(com[0]==built_in[i]){
	  string t1="";
	  for(int j=0;j<com[0].size();j++)
	    t1+=(char)(com[0][j]-'a'+'A');
	  t = replace(com[0],t1,t);
	}
      t=replace("1'b1","I",t);
      t=replace("1'b0","O",t);
      t = replace("<=","=",t);
      t = replace("assign","",t);
      t = replace("begin","{",t);
      t = replace("end","}",t);
      bool flag=false;
      for(int i=0;i<t.size();i++){
	if(t[i]=='=')
	  flag=true;
      }
      if(flag){
	t=process_assign(t);
      }
      fun.push_back(t);
      //cout<<t<<endl;
    }
  }
}

int main(){
  sdf_restore_commands("example.vlib");
  cc.open("vlib_files/vlib.cpp");
  ch.open("vlib_files/vlib.h");
  cm.open("pars.txt");
  string cstart="#include<bits/stdc++.h>\n#include\"lib.h\"\n#include\"vlib.h\"\nusing namespace std;\n";
  string hstart="#ifndef VLIB_H\n#define VLIB_H\n#include\"lib.h\"\n#include<bits/stdc++.h>\nusing namespace std;\n";
  ch<<hstart<<endl;
  cc<<cstart<<endl;
  pars();
  cc<<"GATE* fgate(string s){\nGATE* g;"<<endl;
  for(int i=0;i<all_module.size();i++){
    cc<<"if(s==\""+all_module[i]+"\"){"<<endl;
    cc<<all_module[i]<<" g1;"<<endl;
    cc<<"g=&g1;"<<endl;
    cc<<"}"<<endl;
  }
  cc<<"return g;"<<endl;
  cc<<"}"<<endl;
  //ch<<hfinish<<endl;
  ch<<"\nGATE* fgate(string s);\n#endif"<<endl;
  cc.close();
  ch.close();
}
//  always @( posedge clk or negedge s or posedge q) begin
