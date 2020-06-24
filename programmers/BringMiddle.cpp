//가운데 글자 가져오기 - 연습문제
//<https://programmers.co.kr/learn/courses/30/lessons/12903?language=cpp>
//문자열의 가운데 글자 가져오는 문제
//짝수면 가운데 두개
#include <string>
#include <vector>

using namespace std;

//직접 찾아서 push_back 하는 방법
string solution(string s) {
    string answer = "";
    if(s.size()%2==1){
        answer.push_back(s[s.size()/2]);
    } else{
        answer.push_back(s[s.size()/2-1]);
        answer.push_back(s[s.size()/2]);
    }
    return answer;
}
//substring 사용하는 방법
string solution(string s) {
    string answer = "";
    if(s.size()%2==1){
        return s.substr(s.size()/2,1);
    } else{
        return s.substr(s.size()/2-1,2);
    }
    return answer;
}