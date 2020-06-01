#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int tc = commands.size();
    for(int t=0;t<tc;t++){
        vector<int> tmp;
        vector<int> now=commands[t];
        int i=now[0];
        int j=now[1];
        int k=now[2];
        for(int p=i-1;p<=j-1;p++){
            tmp.push_back(array[p]);
            sort(tmp.begin(), tmp.end());
        }
        answer.push_back(tmp[k-1]);
    }
    return answer;
}