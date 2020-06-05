//문자열 폭발..
//대가리 폭발..
//어차피 겹치는 모든거 제거해야하므로 겹치는 문자열의 제일 끝부터 계산하는 방법도 있따
//find, substr, append 사용해보려 했으나 안되겠더라..
//strcmp는 왜 되던걸까...
//더 생각하자./

#include <iostream>
#include <string>
using namespace std;

string in = "";
string rem = "";
string answer = "";

void input() {
    cin >> in >> rem;
}

void solution() {
    int index = 0;
    int inputL = in.size();
    int remL = rem.size();
    for (int i = 0; i < inputL; i++) {
        answer[index++] = in[i];
        int bmbsize = remL;
        if (in[i] == rem[--bmbsize]) {  //제일 끝 글자부터
            bool right = false;
            int tmp = index - remL;
            for (int j = index - 1; j > tmp; j--) {  //하나씩 줄여가며 검사
                if (answer[j] == rem[bmbsize--]) {
                    right = true;
                } else {  //하나라도 다르면 땡
                    right = false;
                    break;
                }
            }
            if (right == true) {
                index -= remL;  //index 더하기전에 빼버림
            }
        }
    }
    if (index == 0) {
        cout << "FRULA" << endl;
    } else {
        for (int i = 0; i < index; i++) {
            cout << answer[i];
        }
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    input();
    solution();
    return 0;
}