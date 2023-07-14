#include <iostream>
using namespace std;

int main(){
    int outletNum, tmp, total = 1;
    cin>>outletNum;

    for(int i=0;i<outletNum; i++){
        cin>>tmp;
        total += tmp - 1;
    }
    cout<<total;

    return 0;
}