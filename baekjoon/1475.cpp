//방번호 문자열 처리
//

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string in = "";
int cnt = 0;
int num[8]={0,};

void input(){
    cin >> in;
}

void solution(){
    for(int i=0;i<in.size();i++){
        if(in[i]-'0'==9){
            num[6]++;
        }
        num[in[i]-'0']++;
    }
    if(num[6]%2 != 0){
        num[6]=num[6]/2+1;
    }else{
        num[6]/=2;
    }
    for(int i=0;i<9;i++){
        cnt = max(cnt, num[i]);
    }
    cout << cnt;
}
int main(void){
    input();
    solution();
}