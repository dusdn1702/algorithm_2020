//구슬탈출2
//빨간 구슬을 구멍에 넣ㅇㄹ 것이다.
//좌,우,상,하로 기울일 수 있다.
//입력
//N M
//#벽 .빈칸 o구멍 R빨간구슬 B파란구슬
//출력
//빨간 구슬 빼내는 최솟값 10넘ㅇ면 -1

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;  //세로 N 가로 M
#define maxsize 11
char map[maxsize][maxsize];
#define Right 0
#define Left 1
#define Up 2
#define Down 3
#define INF 1e9

int direction[] = {Right, Left, Up, Down};

pair<int, int> RedNow;
pair<int, int> BlueNow;
queue<pair<pair<int, int>, pair<int, int>>> RedBlueNext;

// int dx[] = {1, -1, 0, 0};
// int dy[] = {0, 0, 1, -1};
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int result = INF;
int cnt = 0;

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'R') {
                RedNow.first = i;
                RedNow.second = j;
                map[i][j] == '.';
            }
            if (map[i][j] == 'B') {
                BlueNow.first = i;
                BlueNow.second = j;
                map[i][j] == '.';
            }
        }
    }
}
void printmap(pair<int, int> Red, pair<int, int> Blue) {
    map[Red.first][Red.second] = 'R';
    map[Blue.first][Blue.second] = 'B';
    cout << "start" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }
    cout << cnt << endl;
}
int bfs(pair<int, int> Red, pair<int, int> Blue) {
    RedBlueNext.push(make_pair(Red, Blue));
    while (!RedBlueNext.empty()) {
        int size = RedBlueNext.size();
        while (size--) {
            int RedX = RedBlueNext.front().first.first;
            int RedY = RedBlueNext.front().first.second;
            int BlueX = RedBlueNext.front().second.first;
            int BlueY = RedBlueNext.front().second.second;
            RedBlueNext.pop();

            result = min(result, cnt);

            int RedNextX = RedX;
            int RedNextY = RedY;
            int BlueNextX = BlueX;
            int BlueNextY = BlueY;
            for (int i = 0; i < 4; i++) {
                while (map[RedNextX][RedNextY] != '#') {  //벽 아닌데까지 간다 {  //끝까지 가도록
                    RedNextX += dx[i];
                    RedNextY += dy[i];
                    if (map[RedNextX][RedNextY] == 'O') break;
                }
                while (map[BlueNextX][BlueNextY] != '#') {
                    BlueNextX += dx[i];
                    BlueNextY += dy[i];
                    if (map[BlueNextX][BlueNextY] == 'O') break;
                }
                if (map[RedNextX][RedNextY] == map[BlueNextX][BlueNextY]) {                    //가다가 만날일 없ㅇ므
                    if (map[RedNextX][RedNextY] == 'O' && map[BlueNextX][BlueNextY] == 'O') {  //실패 동시에 빠진경우
                        continue;
                    } else {  //빨강파랑 만난겨우
                        if (i == Left) {
                            if (RedX < BlueX) {
                                BlueNextX += 1;
                            } else
                                RedNextX += 1;
                        } else if (i == Right) {
                            if (RedX < BlueX)
                                RedNextX -= 1;
                            else
                                BlueNextX -= 1;
                        } else if (i == Up) {
                            if (RedY < BlueY)
                                BlueNextY += 1;
                            else
                                RedNextY += 1;
                        } else if (i == Down) {
                            if (RedY < BlueY)
                                RedNextY -= 1;
                            else
                                BlueNextY -= 1;
                        }
                    }
                }
                if (map[RedNextX][RedNextY] == 'O' && map[BlueNextX][BlueNextY] == '.') {  //성공
                    return result;
                } else if (map[RedNextX][RedNextY] == '.' && map[BlueNextX][BlueNextY] == 'O') {  //실패 파란공 빠진겨우
                    cnt += INF;
                    continue;
                }
                RedBlueNext.push(make_pair(make_pair(RedNextX, RedNextY), make_pair(BlueNextX, BlueNextY)));
                //printmap(make_pair(RedNextX, RedNextY), make_pair(BlueNextX, BlueNextY));
                //cout<< i;
            }
        }
        cnt++;
        if (cnt > 10) return -1;
    }
    return -1;
}
int main(void) {
    input();
    cout << bfs(RedNow, BlueNow);
    return 0;
}