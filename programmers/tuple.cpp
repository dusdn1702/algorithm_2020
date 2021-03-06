//튜플 - 2019 카카오 겨울
//<https://programmers.co.kr/learn/courses/30/lessons/64065>
//자료 나누고 다루기
//1개 2개 3개 4개 째 차례대로 찾아서 답에 넣는다.
//set<int> finder
//이거로 처음부터 끝까지 찾아낼 수 있다.
//find한게 없으면 end()에 있다.
//string.substr(index,i-index)는 index부터 i-index개 짜르자.
//stoi는 이거를 숫자로 만들어주세요

#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> tmp;
    vector<pair<int, vector<int>>> strings;
    int index = 0;
    bool check = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '{') continue;
        if (s[i] == '}' || s[i] == ',') {
            if (check) {
                int number;
                if (i - index == 1)
                    number = s[index] - '0';
                else
                    number = stoi(s.substr(index, i - index));
                tmp.push_back(number);
                if (s[i] == '}') {
                    strings.push_back(make_pair(tmp.size(), tmp));
                    tmp.clear();
                }
                check = false;
            }
        } else {
            if (!check) {
                index = i;
                check = true;
            }
        }
    }
    sort(strings.begin(), strings.end());
    set<int> finder;
    for (pair<int, vector<int>> p : strings) {
        for (int n : p.second) {
            if (finder.find(n) == finder.end()) {
                finder.insert(n);
                answer.push_back(n);
            }
        }
    }
    return answer;
}