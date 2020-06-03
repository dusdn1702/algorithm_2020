#include <string>
#include <vector>

using namespace std;

/*#1
int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    for(int i=1;i<k;i++){
        if((k-i)>stock){
            for(int j=0;j<dates.size();j++){
                if(dates[j]==i){
                    stock+=supplies[j];
                    answer++;
                }
            }
        }
        stock--;
    }
    return answer;
}*/
//#2
int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    int d = 0;
    priority_queue<int, vector<int>, less<int>> pq;
    
    for(int i=0;i<k;i++){
        if(dates[d]==i){
            pq.push(supplies[d]);
            d++;
        }
        if(stock==0){
            stock = pq.top();
            pq.pop();
            answer++;
        }
        stock--;
    }
    return answer;
}
