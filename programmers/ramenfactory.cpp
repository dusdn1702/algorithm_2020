#include <string>
#include <vector>

using namespace std;

//#1
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
}
