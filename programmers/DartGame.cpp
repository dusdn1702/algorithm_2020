//다트게임 - 카카오 2018
//<https://programmers.co.kr/learn/courses/30/lessons/17682>  
//점수 배열을 만들어서 다 더했으면 쉬웠을 것을 int 값 두개로 조절한다고 오래 걸렸다.  
//쉽게 쉽게 하자 ㅜㅜ  

#include <cmath>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int tmp = 0;
    vector<int> score;
    for (int i = 0; i < dartResult.size(); i++) {
        if (dartResult[i] == '#' || dartResult[i] == '*') {
            if (dartResult[i] == '#') {
                score[tmp - 1] *= -1;
            } else {
                score[tmp - 1] *= 2;
                if (tmp > 1) {
                    score[tmp - 2] *= 2;
                }
            }
        } else if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            if (dartResult[i] == 'S') {
            } else if (dartResult[i] == 'D') {
                score[tmp - 1] = pow(score[tmp - 1], 2);
            } else {
                score[tmp - 1] = pow(score[tmp - 1], 3);
            }
        } else {
            if (dartResult[i] == '1' && dartResult[i + 1] == '0') {
                score.push_back(10);
                i++;
            } else {
                score.push_back(dartResult[i] - '0');
            }
                tmp++;
        }
    }
    for(int i = 0;i<score.size();i++){
        answer+=score[i];
    }
    return answer;
}