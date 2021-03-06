#include <queue>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

queue<int> q;
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int max_size = 0;
    int size = 0;
    for(int i=0;i<truck_weights.size();i++){
        size = truck_weights[i];
        while(1){
            if(q.empty()){
                q.push(size);
                max_size+=size;
                answer++;
                break;
            } else if (q.size() == bridge_length){
                max_size-=q.front();
                q.pop();
            } else {
                if(size+max_size > weight){
                    q.push(0);
                    answer++;
                } else{
                    q.push(size);
                    max_size+= size;
                    answer++;
                    break;
                }
            }

        }
    }
    return answer + bridge_length;
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