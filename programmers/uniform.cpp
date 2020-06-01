#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    bool res[n];
    for(int i=0;i<=n;i++){
        res[i]=false;
    }
    for(int i=0;i<reserve.size();i++){
        res[reserve[i]]= true;
    }
    answer = lost.size();
    for(int i=0;i<lost.size();i++){
        if(res[lost[i]]==true){
            res[lost[i]]=false;
            lost[i]= -1;
            answer--;//ㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠ
        }
    }
    for(int i=0;i<lost.size();i++){
        if(lost[i]-1>=0 && res[lost[i]-1]==true){
                answer--;
                res[lost[i]-1]=false;
                continue;
        }
        else if(lost[i]+1<=n && res[lost[i]+1]==true){
                answer--;
                res[lost[i]+1]=false;
                continue;
        }
    }
    return n-answer;
}