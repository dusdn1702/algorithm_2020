//단지번호붙이기
//1은 집이 있고 0은 없고
//좌우 위 아래에 1인 집이 있으면 연결
//입력 N, N*N 정사각형
//출력 총단지수, 각 단지내 집의 수

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
#define maxN 25
int map[maxN][maxN];
int visit[maxN][maxN];  //방문 안했으면 0 했으면 단지 번호
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
vector<int> result; // 단지 별 집 수 저장
int cnt; // 각 단지에 집 수


void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]); //**********ㅠㅠㅠㅠ
		}
	}
}

void dfs(int x, int y) {
	cnt++;
	visit[x][y] = 1;
	for (int k = 0; k < 4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (0 <= nx && nx < N && 0 <= ny && ny < N) {
			if (map[nx][ny] == 1 && visit[nx][ny] == 0) {
				dfs(nx, ny);
			}
		}
	}
}

void solution() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && visit[i][j] == 0) {
				cnt = 0;
				dfs(i, j);
				result.push_back(cnt);
			}
		}
	}
	cout << result.size() << endl;
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
}

int main(void) {
	input();
	solution();
	return 0;
}
