//소트인사이드 정렬
//그냥 정렬한거 거꾸로 출력하기
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string in = "";
vector<long long> v;

void input(){
    cin >> in;
    for(int i=0;i<in.size();i++){
        v.push_back(in[i]-'0');
    }
}
void solution(){
    sort(v.begin(), v.end());
}
void output(){
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
}
int main(void){
    input();
    solution();
    output();
    return 0;
}