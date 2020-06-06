//단어공부
//문자열 처리
//배열에서 카운트 세는거
//대문자는 65부터, 소문자는 97부터 시작
//toupper는 대문자로 tolowe는 소문자로
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define alphabet 26
#define bigAlphabet 65
#define smallAlphabet 97

string in = "";
int alpha[alphabet] = {
    0,
};
int answer;
int maxx = 0;
char ans;
void input() {
    cin >> in;
}
void solution() {
    for (int i = 0; i < in.size(); i++) {
        if (in[i] < smallAlphabet) {
            alpha[in[i] - bigAlphabet]++;
        } else {
            alpha[in[i] - smallAlphabet]++;
        }
    }
    for (int i = 0; i < alphabet; i++) {
        if (maxx < alpha[i]) {
            maxx = alpha[i];
            answer = i;
        }
    }
    for (int i = 0; i < alphabet; i++) {
        if (answer == i) continue;
        if (maxx == alpha[i]) {
            cout << '?';
            return;
        }
    }
    ans = answer + bigAlphabet;
    cout << ans;
}
int main(void) {
    input();
    solution();
    return 0;
}