//2016년 -연습문제
//<https://programmers.co.kr/learn/courses/30/lessons/12901>
//1월 1일이 금요일이니까 배열은 금요일부터 시작해야한다.
//1일부터 시작이니까 b에서 1을 빼고 더해줘야 한다.
//윤년은 2/29까지 있는 년도 말한다...^^
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> weekday = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int sum = 0;
    for (int i = 0; i < a - 1; i++) {
        sum += month[i];
    }
    sum += (b - 1);
    int tmp = sum % 7;
    answer = weekday[tmp];
    return answer;
}