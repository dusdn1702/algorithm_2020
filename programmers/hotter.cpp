#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
    // for(int i=0;i<scoville.size();i++){
    //     cout << scoville[i];
    // }
    int cnt = 0;
    while(cnt++){
        sort(scoville.begin(), scoville.end(), greater<int>());
        if(cnt>=scoville.size()-1 && scoville.size()<2){
            return -1;
        }
        int tmp = scoville.back();
        scoville.pop_back();
        int compare = tmp+(scoville.back()*2);    
        scoville.pop_back();
        scoville.push_back(compare);
        if(compare>=K){
            return cnt;
        }
        
    }
}

///////////////////////////////////////////////////////
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>, greater<int>> PQ;
    for(int i=0;i<scoville.size();i++){
        PQ.push(scoville[i]);
    }
    int tmp, compare;
    while(PQ.top() < K && PQ.size()>1){ //맨앞 k보다 작고 2개 이상일때
        tmp = PQ.top();
        PQ.pop();
        compare = tmp + PQ.top()*2;
        PQ.pop();
        answer++;
        PQ.push(compare);
    }
    if(PQ.top()<K){ //다 더했는데도 작다면
        return -1;
    }
    return answer;  //첨부터 크면 0번 저음
}