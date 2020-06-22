//주식가격 - 스택/큐
//https://programmers.co.kr/learn/courses/30/lessons/42584
//큐를 사용할까 생각했지만 더 간단하고 직관적인 방법을 택했다.
//가격이 바로 떨어졌어도 1초 더 가는 부분에서 잠깐 헤매고,
//마지막꺼 처리 부분에서도 잠깐 헤맸지만 쉬웠다. 
//더 빨리 처리하는 습관 들여야겠다.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0;i<prices.size()-1;i++){
        int cnt = 0;
        for(int j=i+1;j<prices.size();j++){
            if(prices[i]<=prices[j]){
                cnt++;
            } else{
                cnt++;
                break;
            }
        }
        answer.push_back(cnt);
    }
    answer.push_back(0);
    return answer;
}