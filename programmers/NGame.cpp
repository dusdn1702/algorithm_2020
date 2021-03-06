//N진수 게임 - 카카오 2018  
//<https://programmers.co.kr/learn/courses/30/lessons/17687>  
//2진수 만드는 거랑 나머지 진수들 만드는 거랑 똑같다!!  
//t*m까지 돌면서 i를 n진법으로 나누고, 나머지 앞에!! 더해두고 나눈거 0될 때까지 반복  
//만든 숫자 전부 tmp에 저장해두고 순서에 맞춰서 답에 넣기!!  
//순서는 시작인 p-1부터 m씩 더해주고!!  

#include <string>
#include <vector>

using namespace std;

char numbers[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

string calculate(int i, int n){
    string ttmp = "";
    while(i/n!=0){
        ttmp = numbers[i%n]+ttmp;
        i/=n;
    }
    ttmp = (numbers[i%n]+ttmp);
    return ttmp;
}

//n진법, t개 말할거고, m명이 게임하고, p가 말할 순서
string solution(int n, int t, int m, int p) {
    string answer = "";
    string tmp = "";
    for(int i =0;i<t*m;i++){
        tmp += calculate(i,n);
    }
    int Tube = p-1;
    for(int i =0;i<t;i++){
        answer.push_back(tmp[Tube]);
        Tube += m;
    }
    return answer;
}