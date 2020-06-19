//수박수박수박수? - 연습문제
//<https://programmers.co.kr/learn/courses/30/lessons/12922>
//레벨 1짜리 쉬운 문제였다.
//append보다 +로 단순 문자열 더하는 건 더 쉽다.

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0 ;i<n;i++){
        if(i%2==0){
        answer+="수";
        }else{
            answer+="박";
        }
    }
    return answer;
}