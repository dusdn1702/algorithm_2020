//소수 찾기
//<https://programmers.co.kr/learn/courses/30/lessons/12921>
//소수의 개수 return 하는 문제

//처음 막무가내로 풀었더니 시간초과와 효율성에서 에러 발생
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=2;i<=n;i++){
    bool priceNum = true;
        for(int j=i-1;j>=2;j--){
            if(i%j==0) {
                priceNum =false;
                break;
            }
        }
        if(priceNum) {
            answer++;
            
        }
    }
    return answer;
}
/*
//배수이면 0을 주고 0아닌 거 찾는 방식
int solution(int n) {
    int answer = 0;
    vector<int> arr(n);

    for(int i=2;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0)continue;
        for(int j=i+i;j<=n;j+=i){
            arr[j]=0;
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]!=0) answer++;
    }
    return answer;
}
*/