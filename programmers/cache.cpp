//캐시 - 2018 카카오
//<https://programmers.co.kr/learn/courses/30/lessons/17680>  
//LRU로 캐시를 만드는 문제였다.
//라이브러리를 많이 배웠다.
//- set 이라는 라이브러리는 find(s)를 가지고 있고 그걸 가르키는 iterator를 반환하거나, 없으면 end()를 반환한다. 
//- 여기서 그 찾은 값을 데려오려면 set<string>::iterator it를 선언해 *it로 데려와야한다.   
//- set에서 erase 하려면 s.erase(지울것)를 해야한다.  
//- vector<string>를 모두 대문자/소문자로 변환할때는 **transform(v[i].begin(), v[i].end(), v[i].begin(), ::toupper);**를 사용한다.  
//- cache에서 hit 했으면 그거 맨 뒤로 옮겨주는 일이 필요하다.  
//- 테스트케이스를 항상 잘 생각하자.  
//- queue는 배열로 쓸 수 없으므로 그냥 벡터 쓰는게 더 좋았다.


//queue 사용한 코드
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    queue<string> realCache;
    set<string> finder;
    set<string>::iterator it;
    if(cacheSize==0)return cities.size()*5;
    for (int i = 0; i < cities.size(); i++) {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::toupper);
        if (finder.find(cities[i]) == finder.end()) {  //miss
            if (finder.size() >= cacheSize) {
                finder.erase(realCache.front());
                realCache.pop();
            }
            finder.insert(cities[i]);
            realCache.push(cities[i]);
            answer += 5;
        } else {  //hit
            answer += 1;
            it = finder.find(cities[i]);
            while (1) {
                if (realCache.front() == *it) {
                    string tmp = realCache.front();
                    realCache.pop();
                    realCache.push(tmp);
                    break;
                } else {
                    string tmp = realCache.front();
                    realCache.pop();
                    realCache.push(tmp);
                }
            }
        }
    }
    return answer;
}

//vector 사용한 코드
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> realCache;
    set<string> finder;
    set<string>::iterator it;
    if (cacheSize == 0) return cities.size() * 5;
    for (int i = 0; i < cities.size(); i++) {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::toupper);
        if (finder.find(cities[i]) == finder.end()) {  //miss
            if (finder.size() >= cacheSize) {
                finder.erase(realCache.front());
                realCache.erase(realCache.begin());
            }
            finder.insert(cities[i]);
            realCache.push_back(cities[i]);
            answer += 5;
        } else {  //hit
            answer += 1;
            it = finder.find(cities[i]);
            while (1) {
                if (realCache.front() == *it) {
                    realCache.push_back(realCache.front());
                    realCache.erase(realCache.begin());
                    break;
                } else {
                    realCache.push_back(realCache.front());
                    realCache.erase(realCache.begin());
                }
            }
        }
    }
    return answer;
}

//답
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> realCache;
    set<string> finder;
    set<string>::iterator it;
    if (cacheSize == 0) return cities.size() * 5;
    for (int i = 0; i < cities.size(); i++) {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::toupper);
        if (finder.find(cities[i]) == finder.end()) {  //miss
            if (finder.size() >= cacheSize) {
                finder.erase(realCache.front());
                realCache.erase(realCache.begin());
            }
            finder.insert(cities[i]);
            realCache.push_back(cities[i]);
            answer += 5;
        } else {  //hit
            answer += 1;
            for(int j = 0; j <realCache.size();j++){
                if(cities[i]==realCache[j]){
                    realCache.erase(realCache.begin()+j);
                    realCache.push_back(cities[i]);
                }
            }
        }
    }
    return answer;
}