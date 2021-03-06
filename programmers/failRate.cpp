//실패율 - 카카오 2019
//처음에는 pair를 생각하지 못하고 우선순위큐를 하나 더 생성해 넣을까 했었다.
//왜 안되는지는 못찾았다..
//어딘가 틀렸겠지..
//그러고 pair 힌트를 얻고 boolean 함수를 생성해 sort할 수 있다는 것을 배웠다.
//또, sort의 마지막 인자 기본생성자는 less 이고 오름차순 43210 이다.
//이거때문에 또 한참 헤맸다.
//greater가 내림차순 01234 이다
//괜히 복잡하게 생각 말고 라이브러리 쓰자..

#include <algorithm>
#include <queue>
#include <string>
#include <vector>
using namespace std;
/* 1차
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> result;
    sort(stages.begin(), stages.end(), greater<int>());
    int cntOfComing = stages.size();
    int cntOfFail = 1;
    for (int i = 0; i < stages.size(); i++) {
        if (stages[i] == stages[i + 1]) {
            cntOfFail++;
        } else {
            answer[stages[i]] = cntOfComing / cntOfFail;
            cntOfComing -= cntOfFail;
            cntOfFail = 1;
        }
    }
    priority_queue<int, vector<int>, less<int>> q;
    for (int i = 0; i < answer.size(); i++) {
        q.push(answer[i]);
    }
    while (!q.empty()) {
        for (int i = 0; i < answer.size(); i++) {
            if (q.top() == answer[i]) {
                result.push_back(i);
                q.pop();
            }
        }
    }
    return result;
}*/
bool compare(const pair<int, double> &a, const pair<int, double> &b){
    if(a.second>b.second) return true;
     else if(a.second == b.second){
        if(a.first < b.first) return true;
        else return false;
    } else return false;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> index_failure;

    sort(stages.begin(), stages.end());
    int cntOfComing = stages.size();
    int me = 0;
    for (int i = 1; i <= N; i++) {
        int cntOfFail = 0;
        if (cntOfComing == 0) {
            index_failure.push_back(make_pair(i, 0));
            continue;
        }
        while (i == stages[me]) {
            cntOfFail++;
            me++;
        }
        index_failure.push_back(make_pair(i, (double) cntOfFail/cntOfComing));
        cntOfComing -= cntOfFail;
    }
    sort(index_failure.begin(), index_failure.end(), compare);

    for(int i=0;i<N;i++){
        answer.push_back(index_failure[i].first);
    }
    return answer;
}