//dfs와 bfs
//방문할 정점의 개수 n
//간선의 개수 m 여러개 가능
//탐색을 시작할 정점의 번호 v
//M개의 간선 주어짐

//각각 dfs랑 bfs 수행한 결과 출력

//인접행렬로 연결해서 방문했으면 visit 1로 바꾸고
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, V;
#define maxn 1001
int map[maxn][maxn];
bool visitD[maxn];
bool visitB[maxn];

void input() {
	cin >> N;
	cin >> M;
	cin >> V;

	int x, y;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
}

void dfs(int V) {    //v정점을 방문할 거니까
	cout << V << " ";
	visitD[V] = 1;
	for (int i = 1; i <= N; i++) {
		if (!visitD[i] && map[V][i]==1) //이미 방문했거나 v정점에서 i번째에 연결되지 않았으면 패스
		{
			dfs(i);
		}
	}
}

void bfs(int V) {
	queue<int> q;
	q.push(V);
	visitB[V] = 1;
	while (!q.empty()) {
		V = q.front();
		cout << V << " ";
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (!visitB[i] && map[V][i] == 1)
			{
				q.push(i);
				visitB[i] = 1;
			}
		}
	}
}

int main(void) {
	input();
	dfs(V);
	cout << endl;
	bfs(V);
	cout << endl;
	return 0;
}