//124나라의 숫자 - 연습문제  
//<https://programmers.co.kr/learn/courses/30/lessons/12899>
//삼진법 만들기  
//3으로 계속 나누어 가면서 나머지를 답에 더해주는 방식  
//나머지가 0이 되면 1을 빼야한다  
//그러므로 412 순서가 됨  
//생각하는 방식 **  
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    string arr[3] = {"4", "1", "2"};

    int index;
    while (n > 0) {
        index = n % 3;
        if (index == 0) {
            n = n - 1;
        }
        n = n / 3;
        answer = arr[index] + answer;
        cout << answer << " ";
    }
    return answer;
}