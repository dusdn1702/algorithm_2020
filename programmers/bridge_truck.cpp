#include <queue>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

queue<int> q;
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = bridge_length+1;

    return answer;
}
/* try #1
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = bridge_length+1;
    int now = truck_weights[0];        
    q.push(truck_weights[0]);
    for (int j = 0; j < truck_weights.size()-1; j++) {
        now += truck_weights[j + 1];
        if (now <= weight) {
            q.push(truck_weights[j+1]);
            answer-=(bridge_length-1);
        }
        else{
            now -= truck_weights[j+1];
        }
        answer+=bridge_length;
        now -= q.front();
        q.pop();
        q.push(truck_weights[j+1]);
        now+= truck_weights[j+1];
    }
    return answer;
}
*/