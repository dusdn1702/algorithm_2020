//뱀이 움직이는데 시작은 오른쪽
//머리를 다음칸에 위치해 늘린다
//갈 칸에 사과가 있다면 사과 없어지고 꼬리 안움직임
//사과 없다면 꼬리에서 하나 없앰
//뱀이 벽이나 자기 몸과 부딪히면 게임 끝
//입력 보드크기 N,
//사과개수 K, K개 사과 위치
//방향변환횟수 L, L개 (X,L/D): X초 후에 L(좌)/D(우)
//출력 게임이 몇초에 끝나는가

//풀이/
//vector에 뱀의 몸 좌표 전부 넣고
//방향전환은 queue에 넣고
//사과는 map에 1로 표기

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int L, X;
deque<pair<char, pair<int, int>>> snake;  //{방향,(행,열)}뱀의 위치
queue<pair<int, char>> changeDir;         //(X,L/D)방향전환할 큐
int N, K;
#define maxn 101
int map[maxn][maxn];  //사과 있으면 1 없으면 -1 아니면 벽임

int dx[] = {1, 0, -1, 0};   //우 하 좌 상
int dy[] = {0, 1, 0, -1};

#define right 0
#define left 1
#define up 2
#define down 3

#define turnright 1
#define turnleft -1

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            map[i][j] = -1;  //보드 만듬
        }
    }
    cin >> K;
    for (int i = 0; i < K; i++) {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;  //사과 들어옴
    }
    cin >> L;
    for (int i = 0; i < L; i++) {
        int t;
        char dir;
        cin >> t >> dir;
        changeDir.push(make_pair(t, dir));  //방향 들어옴
    }
}
//다음 갈길이 내 몸이나 벽에 부딪히면 끝
//지금 가르키는 방향도 필요
//뱀 대가릴가 다음 갈길 뱀 대가리는 뱀벡터 맨앞
void solution() {
    int time = 0;
    char nowDir;
    snake.push_back(make_pair(0, make_pair(0, 0)));  //시작 0,0에서 우
    while (1) {
        nowDir = snake.front().first;
        if (time == changeDir.front().first) {      //방향바꿀때 되면
            if (changeDir.front().second == 'L') {  //좌회전
                nowDir = (snake.front().first -1)%4;
            }
            else if(changeDir.front().second == 'R'){   //우회전
                nowDir = (snake.front().first +1)%4;
            }
            //방향으로 한칸 가기 해야댐
            snake.push_front(nowDir,make_pair(snake.front().second.first, snake.front().second.second));
        }
       // if()
        //사과 만나면
        //벽 만나면
        time++;
    }
}