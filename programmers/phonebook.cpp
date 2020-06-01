#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    for(int i=0;i<phone_book.size()-1;i++){
        if(phone_book[i]==phone_book[i+1].substr(0,phone_book[i].size())){
            return false;
        }
    }
    return answer;
}

//substr(시작, 끝)이거 생각
//vector<string> 이거 sort 하면 string.size 순서대로 나옴! 
//당연히 긴게 짧은거보다 크니깐 ㅎ