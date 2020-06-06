//수 찾기 이분탐색
//이중포문 안됨 > 시간초과
//이분탐색해야함
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long n;
vector<int> N;
long long m;
vector<int> M;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        N.push_back(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        M.push_back(tmp);
    }
}
bool solution(int j) {
    for (int i = 0; i < n; i++) {
        if (M[j] == N[i]) {
            return true;
        }
    }
    return false;
}
int main(void) {
    input();

    for (int j = 0; j < m; j++) {
        if (solution(j))
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
    return 0;
}