#include <string.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define maxx 100
int d[maxx];
bool visit[maxx];
int N;
vector<int> answer;

void input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> d[i];
    }
}
bool dfs(int from, int to) {
    if (visit[to]) {
        if (from == to) {
            answer.push_back(to);
        }   //다음꺼 방문 안했는데 다르면 끝
    } else {
        visit[to] = true;
        dfs(from, d[to]);
    }
}
int main(void) {
    input();
    for (int i = 1; i <= N; i++) {
        dfs(i, i);
        memset(visit, false, sizeof(visit));
    }
    cout << answer.size() << endl;
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << endl;
    }
    return 0;
}