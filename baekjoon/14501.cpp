#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define maxx 15

int N;
int d[maxx];
int T[maxx];
int P[maxx];
int answer = 0;

void input(){
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T[i] >> P[i];
        d[i]=P[i];
    }
}

void solution(){
    int tmp;
    d[0]=P[0];
    for(int i=1; i<N; i++){
        for(int j=0;j<i;j++){
            if(i-j>=T[j]){
                d[i]=max(P[i]+d[j], d[i]);
            }
        }
    }
    //다른 날을 하는게 더 이득일 수도 있어!
    for(int i=0;i<N;i++){
        if(i+T[i]<=N){
            answer = max(answer, d[i]);
        }
    }
    //결과 계산 따로해야한다.
}

int main(void){
    input();
    solution();
    cout << answer << endl;
}

