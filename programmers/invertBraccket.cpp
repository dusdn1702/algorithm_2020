//괄호 변환 - 연습문제
//https://programmers.co.kr/learn/courses/30/lessons/12909
//괄호의 개수가 같지 않으면 false
//닫는 괄호가 여는 괄호보다 많으면 거기서 false로 진행

#include <iostream>
#include <string>

using namespace std;

string solution(string s) {
    string answer = s;
    int openCount = 0;
    int closeCount = 0;
    string tmp;
    if (s[0] == ')') {
        tmp[0] = '(';
        for (int i = 0; i < s.size(); i++) {
            tmp.append(1, s[i + 1]);
            if (s[i] != '(') {
                tmp.append(1,')');
                tmp.append(s.size()-i, s.substr(i+1));
                break;
            }
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            openCount++;
        else if (s[i] == ')')
            closeCount++;
        if (closeCount > openCount) {
        }
    }
    if (closeCount != openCount) return false;
    return answer;
}