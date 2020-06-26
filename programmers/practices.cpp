#include <string>
#include <vector>

using namespace std;

//휴대폰번호 가리기
string solution(string phone_number) {
    string answer = "";
    int cnt = 0;
    for (int i = 0; i < answer.size(); i++) {
        if (cnt < answer.size() - 4) {
            answer.push_back((char)9);
        } else {
            answer.push_back(phone_number[i]);
        }
        cnt++;
    }
    return answer;
}

//약수의 합 - 연습문제
int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

//콜라츠 추측 - 연습문제
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int cnt = 0;
    while (cnt++) {
        if (cnt < 500) {
            if (num % 2 == 0) {
                num /= 2;
            } else if (num % 2 == 1) {
                num *= 3;
                num += 1;
            }
            if(num==1) return num;
        } else {
            return -1;
        }
    }
    answer = num;
    return answer;
}

//콜라츠 추측 - 연습문제
//num이 1인 경우도 있다.

int solution(int num) {
    int answer = 0;
    int cnt = 0;
    
    if(num==1) return cnt;
    while (cnt++) {
        if (cnt <= 500) {
            if (num % 2 == 0) {
                num /= 2;
            } else if (num % 2 == 1) {
                num *= 3;
                num += 1;
            }
            if(num==1) return cnt;
        } else {
            return -1;
        }
    }
}

//자연수 뒤집어 배열로 만들기 - 연습문제
//10으로 나눌때 나머지 넣고
//그 나머지 빼고
//또 10으로 나누기를 반복
//string rnum = to_string(n); 이것도 가능
vector<int> solution(long long n) {
    vector<int> answer;
    while(n>0){
        int tmp = n%10;
        answer.push_back(tmp);
        n-=(tmp);
        n/=10;
    }
    return answer;
}
