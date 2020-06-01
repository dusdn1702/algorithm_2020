#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
vector<int> numone={1,2,3,4,5};
vector<int> numtwo={2,1,2,3,2,4,2,5};
vector<int> numthree={3,3,1,1,2,2,4,4,5,5};
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one=0;
    int two=0;
    int three=0;
    for(int i=0;i<answers.size();i++){
        if(i>=numone.size()){
            numone.push_back(numone[i-5]);
        }
        if(i>=numtwo.size()){
            numtwo.push_back(numtwo[i-8]);
        }
        if(i>=numthree.size()){
            numthree.push_back(numthree[i-10]);            
        }
        if(answers[i]==numone[i]) one++;
        if(answers[i]==numtwo[i]) two++;
        if(answers[i]==numthree[i]) three++;
    }
if (one >= two && one >= three) {
        answer.push_back(1);
    }
    if (two >= one && two >= three) {
        answer.push_back(2);
    }
    if (three >= one && three >= two) {
        answer.push_back(3);
    }
    /*
    if(one>two){
        if(one>three)answer.push_back(1);   //1
        else if(one==three){    //1=3>2
            answer.push_back(1);
            answer.push_back(3);
        }
        else if(one<three){     //3>1>2
            answer.push_back(3);
        }
    }
    else if(one==two){
        if(one>three){  //1=2>3
            answer.push_back(1);
            answer.push_back(2);
        }//1=2=3
        else if(one==three){
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        } //3>1=2
        else if(one<three){
            answer.push_back(3);
        }
    }    
    else if(one<two){
        if(one>=three){//2>1>3
            answer.push_back(2);
        }
        else if(one<three){
            if(two>three){//2>3>1
                answer.push_back(2);
            }
            else if(two==three){//2=3>1
                answer.push_back(2);
                answer.push_back(3);
            }
            else if(three>two){//3>2>1
                answer.push_back(3);
            }
        }
    }*/
    return answer;
}