//문자열 다루기 기본 - 연습문제
//<https://programmers.co.kr/learn/courses/30/lessons/12918>
//프로그래머스 1단계 기본 문제라 너무 쉬웠다.
//그럼에도 불구하고 ascii code 찾아서 했다. 
//'0'~'9' 썼으면 안찾아도 됐다.

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()==4 || s.size()==6){
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57) answer = true;
        else return false;
    }
    }else return false;
    return answer;
}