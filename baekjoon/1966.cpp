//프린터 큐
//나의 중요도 확인하고 나머지 중에
//나보다 큰애가 있으면 내가 뒤로 가고
//없으면 인쇄

//입력 test case 수 T
//문서의 개수 N 나의 위치 M
//N개의 중요도 d

//출력 각각 몇번째 인쇄되는지

#include <deque>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int T;

//int d[];

void input() {
}

//(중요도, 처음 배열 위치) 페어로 deque 생성

void solution() {
}
int main(void) {
    cin >> T;

    for (int j = 0; j < T; j++) {
        int N, M;
        deque<pair<int, int>> d;
        priority_queue<int> pq;
        int temp;
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            cin >> temp;
            d.push_back(make_pair(temp, i));
            pq.push(temp);
        }
        int find;
        find = d[M].second;
        int cnt = 0;
        while (!d.empty()) {
            if (d[0].second != find) {
                if (d[0].first < pq.top()) {
                    d.push_back(d[0]);  //뒤로 보내고
                    d.pop_front();
                } else {
                    //첫번째 값이 다른 모든 값보다 같거나 크면 인쇄
                    d.pop_front();
                    pq.pop();
                    cnt++;
                }
            } else {                          //내가 찾는 값이 맨앞에 왔는데
                if (d[0].first < pq.top()) {  //제일 크지 않으면
                    d.push_back(d[0]);        //뒤로 보내고
                    d.pop_front();            //빼고
                } else {
                    cout << ++cnt << endl;
                    break;
                }
            }
        }
    }
    return 0;
}