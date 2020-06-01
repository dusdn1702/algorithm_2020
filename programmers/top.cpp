#include <string>
#include <vector>
#include <deque>
using namespace std;

vector<int> solution(vector<int> heights) {
    int size=heights.size();
    vector<int> answer(size);
    for(int i=size-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(heights[i]<heights[j]){
                answer[i]=j+1;
                break;
            }
        }
        answer[i-1]=0;
        continue;
    }
    return answer;
}