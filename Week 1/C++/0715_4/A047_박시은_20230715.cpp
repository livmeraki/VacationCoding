#include <iostream>
using namespace std;

int main(){
    string inputStr;
    cin >> inputStr;

    for(int i=1;i<=inputStr.size();i++){
        cout << inputStr[i-1];
        if(i%10==0) cout << endl;
    }

    return 0;
}