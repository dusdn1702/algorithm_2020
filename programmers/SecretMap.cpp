//비밀지도 - 카카오 2018  
//<https://programmers.co.kr/learn/courses/30/lessons/17681>  
// 이진수 만들기 ; 2로 나눠서 나머지 있으면 1추가 하고 아니면 0이고  
// 나중에 reverse(.begin(), .end()) 필요!!  
//아무것도 없는 vector에 푸시 안하고 배열로 넣기 안된다.  
//for(int i=0;i<n;i++) 랑 while(n--)랑 뭐가 다르지....? 이거 때문이었던듯..

//1차시도
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> answer1;
    vector<string> answer2;
    for (int i = 0; i<n; i++) {
        string t = "";
        int tmp = arr1[i];
        while (n--) {
            if (arr1[i] % 2==1) {
                t += '#';
            } else {
                t += ' ';
            }
            tmp /= 2;
        }
        reverse(t.begin(), t.end());
        answer1.push_back(t);
    }
    for (int i = 0; i<n; i++) {
        string t = "";
        int tmp = arr2[i];
        while (n--) {
            if (arr2[i] % 2==1) {
                t += '#';
            } else {
                t += ' ';
            }
            tmp /= 2;
        }
        reverse(t.begin(), t.end());
        answer2.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        string tmp = "";
        for (int j = 0; j < n; j++) {
            if (answer1[i][j] == '#' || answer2[i][j] == '#') {
                tmp.push_back('#');
            } else{
                tmp.push_back(' ');
            }
        }
        answer.push_back(tmp);
        tmp.clear();
    }
    return answer;
}

//2차시도
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
        
    for (int i = 0; i<n; i++) {
        int tmp = arr1[i] | arr2[i];
        string t = "";
        for(int j = 0; j<n;j++) {
            if ((tmp % 2)==1) {
                t += '#';
            } else {
                t += ' ';
            }
            tmp /= 2;
        }
        reverse(t.begin(), t.end());
        answer.push_back(t);
    }
    return answer;
}