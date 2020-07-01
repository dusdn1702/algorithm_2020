//뉴스 클러스터링 - 카카오 2018
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> group1;
    vector<string> group2;
    string tmp = "";
    for (int i = 0; i < str1.size(); i++) {
        tmp = str1.substr(i, 2);
        group1.push_back(tmp);
        tmp.clear();
    }
    for (int i = 0; i < str2.size(); i++) {
        tmp = str2.substr(i, 2);
        group2.push_back(tmp);
        tmp.clear();
    }
    int CNTU = 0;
    int CNTN = 0;
    bool check = false;
    if (group1.size() > group2.size()) {
        for (int i = 0; i < group1.size(); i++) {
            for (int j = 0; j < group2.size(); j++) {
                if (group1[i] == group2[j]) {
                    CNTU++;
                    CNTN++;
                    check = true;
                    break;
                }
            }
            if(!check) CNTU++;
        }
    } else{
        for (int i = 0; i < group2.size(); i++) {
            for (int j = 0; j < group1.size(); j++) {
                //if (group2[i][0] == )
                // 소문자 대문자 나누기 필요
                // 공백, 숫자, 특수문자 없애기 필요
                if (group2[i] == group1[j]) {
                    CNTU++;
                    CNTN++;
                    check = true;
                    break;
                }
            }
            if(!check) CNTU++;
        }        
    }
    double divideNum = CNTN/CNTU;
    cout << CNTN << CNTU << divideNum;
    answer = divideNum * 65536;
    return answer;
}