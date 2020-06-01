#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> name;
void input_participant(){
    string tmp;
    cin >> tmp;
    name.push_back(tmp);  
    cout << tmp;
}
void solution(){
    bool check = false;
    string complete;
    for(int i=0;i<name.size()-1;i++){
        cin>>complete;
        for(int i=0;i<name.size();i++){
            if(complete==name[i]){
                check = true;
            }
        }
        if(check==false){
            cout << complete;
            return;
        }
    }
}
int main(void){
    input_participant();
    solution();
    return 0;
}