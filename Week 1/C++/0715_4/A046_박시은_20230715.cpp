#include <iostream>
#include <string>
using namespace std;

int main(){

    int alpha[26] = {0};
    int nameNum, count=0;
    string tmp;

    cin >> nameNum;

    for(int i=0;i<nameNum;i++){
        cin >> tmp;
        alpha[tmp[0]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(alpha[i]>=5){
            cout << (char)(i+'a');
            count++;
        } 
        if(i==25 && count==0) cout << "PREDAJA";
    }

    return 0;
}