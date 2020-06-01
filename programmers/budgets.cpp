#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int solution(vector<int> budgets, int M) {
    int answer = 0;
    int cnt = 0;
    long sum = 0;
    for(int i=0;i<budgets.size();i++){
        pq.push(budgets[i]);
        sum+=budgets[i];
    }
    if(sum<=M){
        return *max_element(budgets.begin(), budgets.end());
    }
    while(!pq.empty()){
        answer = M/(budgets.size()-cnt);
        if(answer>pq.top()){
            M-=pq.top();
            pq.pop();
            cnt++;
        }
        else break;
    }
    return answer;
}