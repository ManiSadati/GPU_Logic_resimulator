#include<bits/stdc++.h>
using namespace std;

int sz = 61;

ofstream file;

char c[3] = {'0', '1', 'x'};

int dx[61];

int main(){
    file.open("vcdtest.vcd");
    srand (time(NULL));
    file<<"#0"<<endl<<"b";
    for(int i = 0 ; i < sz; i++){
        dx[i] = rand()%3;
        file<<c[dx[i]];
    }
    file<<" IN"<<endl;
    file<<"b";
    for(int i = 0 ; i < sz; i++){
        dx[i] = rand()%2;
        file<<c[dx[i]];
    }
    file<<" OUT"<<endl;
    for(int i = 1 ; i < 1000000; i++){
        file<<"#"<<i<<endl<<"b";
        for(int j = 0 ; j < 61; j++){
            dx[j] = rand()%3;
            if(j >= 30){
                dx[j] = rand()%2;
            }
            file<<c[dx[j]];
        }
        file<<" IN"<<endl;
    }
    file.close();
}
