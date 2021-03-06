//단체사진 찍기 - 2017 카카오코드 본선
//next_permutation 사용
//friends 벡터내에 순열을 구하는데 기준에 따라 적합한지 보고 구한다.
//switch도 사용할 수 있다!!

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<string> data) {
    int pos[26];
    int answer = 0;
    vector<char> friends = {'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T'};
    do {
        for (int i = 0; i < friends.size(); i++) {
            pos[friends[i] - 'A'] = i;
        }
        bool check = true;
        for (int j = 0; j < data.size(); j++) {
            int friend1 = data[j][0] - 'A';
            int friend2 = data[j][2] - 'A';
            int distance = abs(pos[friend1] - pos[friend2]) - 1;
            char operatorChar = data[j][3];
            int wants = data[j][4] - '0';
            switch (operatorChar) {
                case '=':
                    if (distance != wants) check = false;
                    break;
                case '<':
                    if (distance >= wants) check = false;
                    break;
                case '>':
                    if (distance <= wants) check = false;
                    break;
            }
            if (!check) break;
        }
        if (check) answer++;
    } while (next_permutation(friends.begin(), friends.end()));
    return answer;
}