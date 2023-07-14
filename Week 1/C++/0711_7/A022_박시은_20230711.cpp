#include <iostream>
using namespace std;

int main(){

    int callNum, *time, cost[2] = {0};
    cin >> callNum;
    time = new int [callNum];


    for(int i=0;i<callNum;i++){
        cin >> time[i];
        cost[0] += time[i]/30 * 10 + 10;
        cost[1] += time[i]/60 * 15 + 15;
    }

    if(cost[0]==cost[1]) cout << "Y M " << cost[1];
    else if(cost[0]>cost[1]) cout << "M " << cost[1];
    else cout << "Y " << cost[0];

    return 0;
}