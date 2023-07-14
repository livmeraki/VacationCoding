#include <iostream>
using namespace std;

int main(){
    int remainder[10], inputNum[10], count = 0;

    for(int i=0;i<10;i++){
        remainder[i] = -1;
    }
    for(int i=0;i<10;i++){
        cin >> inputNum[i];
        for(int j=0;j<=i;j++){
            if(j==i)remainder[i] = inputNum[i]%42;
            if(remainder[j]==inputNum[i]%42) break;
        } 
    }

    for(int i=0;i<10;i++){
        if(remainder[i]!=-1) count++;
    }
    cout<<count;
    return 0;
}