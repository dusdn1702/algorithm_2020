//큰 수 만들기 - greedy
//1차
//순서 상관 없이 큰 수 만든다고 생각해서 틀림
#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
deque<int> deq;


string solution(string number, int k) {
    string answer = "";
    int first = 0;
    pair<int, int> firstnumi;
    for (int i = 0; i <= number.size() - k; i++) {
        if (first < number[i]) {
            first = number[i];
        }
    }
    firstnumi.first = first;
    for (int i = 0; i < k; i++) {
        if (number[i] == first) {
            firstnumi.second = i;
            break;
        }
    }
    deq.push_back(first);
    int canremove = k - firstnumi.second;
    for (int i = firstnumi.second + 1; i < number.size(); i++) {
        deq.push_back(number[i]);
        while (canremove--) {
            if (number[i - 1] < number[i]) {
                deq.pop_back();
            }
        }
    }
    for (int i = 0; i < number.size() - k; i++) {
        answer.push_back(deq[i]);
    }
    return answer;
}