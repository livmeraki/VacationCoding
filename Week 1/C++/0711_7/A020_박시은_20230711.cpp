#include <iostream>
using namespace std;

int main(){
    int inputNum, peopleNum=0, max=0; //peopleNum: number of people on the train
    
    for(int i=0;i<8;i++){
        cin >> inputNum;

        if(i%2==0) peopleNum -= inputNum;
        else peopleNum += inputNum;

        if(peopleNum>max) max = peopleNum;
    }

    cout << max;

    return 0;
}