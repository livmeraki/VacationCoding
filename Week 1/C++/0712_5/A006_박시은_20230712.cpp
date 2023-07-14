#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count[2] = {0};
    
    for(int i=0;i<s.size(); i++){
        if(s.substr(i, 1)=="p"||s.substr(i, 1)=="P") count[0]++;
        else if(s.substr(i, 1)=="y"||s.substr(i, 1)=="Y") count[1]++;
    }
    if(count[0]!=count[1]) answer = false;
    return answer;
}