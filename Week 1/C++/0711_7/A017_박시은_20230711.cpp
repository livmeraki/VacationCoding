#include <iostream>
#include <string>
using namespace std;

int main(){
    int set[10] = {0};
    int max=0, inputNum;

    cin >> inputNum;
    while(inputNum>0){
        set[inputNum%10]++;
        inputNum/=10;
    }

    for(int i=0;i<10;i++){
        if(set[i]>max) {
            if(i==9 || i==6) max = (set[6]+set[9])/2 + (set[6]+set[9])%2;
            else max = set[i];
        }
    }

    cout << max;
    return 0;
}