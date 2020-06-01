//미로 탐색
//1은 이동가능 0은 이동불가능
//1,1부터 n,m까지 이동할때 지나는 최소의 칸 수 구하라
//입력 n,m 
//n개 줄에 m개 정수
//출력 이동한 칸 수

//dfs이용해서 ***************최단거리는 보통 bfs
//탐색하고 cnt로 세기


#include <iostream>
#include <queue>
using namespace std;

int N, M;
#define maxn 101
int map[maxn][maxn];
bool visit[maxn][maxn];
int cnt = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
queue<pair<int, int>> q;

void input(){
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%1d", &map[i][j]);
        }
    }
}

void bfs(){
    ++cnt;
    q.push(make_pair())
}