//문자열 내림차순으로 배치하기 - 연습문제
//<https://programmers.co.kr/learn/courses/30/lessons/12917>
//말 그대로 문자열 정렬하는 방법이다.
//아래 세가지 방법이 있다.
//STL sort, max_element, 구현
//sort를 주로 쓰기로 하자.

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//string sort함수
string solution(string s) {
    sort(s.begin(), s.end(), greater<char>());
    return s;
}

//max_element 사용
string solution(string s) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        answer += *max_element(s.begin(), s.end());
        *max_element(s.begin(), s.end()) = NULL;
    }
    return answer;
}
//그냥 구현
string solution(string s) {
    string answer = "";
    char tmp;
     for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            if (s[i] < s[j]) {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    answer = s;
    return answer;
}