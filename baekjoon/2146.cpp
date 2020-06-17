//다리만들기 bfs
//단지 나누기까진 ok
//최단다리 하나 짓기 실패...

#include <algorithm>
#include <iostream>
#include <queue> 
#include <vector>
using namespace std;

#define maxx 101
int N;
int cnt = 0;  //단지 개수(번호)
bool map[maxx][maxx];
int visit[maxx][maxx];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

vector<pair<int, pair<int, int>>> v;
queue<pair<int, int>> q;

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
        }
    }
}
void findfirst() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] && visit[i][j]==0) {
                cnt++;
                bfs(i, j);
            }
        }
    }
}
void bfs(int fx, int fy) {
    q.push(make_pair(fx, fy));
    v.push_back(make_pair(cnt, make_pair(fx, fy)));

    visit[fx][fy] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (map[nx][ny] && visit[nx][ny] == 0) {
                    q.push(make_pair(nx, ny));
                    v.push_back(make_pair(cnt, make_pair(nx, ny)));
                    visit[x][y] = true;
                }
            }
        }
        q.pop();
    }
}
int answer = 0;
void solution() {
    for (int k = 1; k < cnt; k++) {
        for(int l =k+1;l<=cnt;l++){
            //for(int i=0;i)
            if(v[k].second.first-v[l].second.first){}
            //vector에서 서로 다른 섬끼리 하나하나 비교하려 했으나 실패..
            //answer = min(abs(v[k].second.first-v[l].second.first)+abs(v[k].second.second-v[l].second.second))
        }
    }
}
int main(void){
    
}