#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num[5], total=0;
    for(int i=0;i<5;i++){
        cin>>num[i];
        total+=pow(num[i], 2);
    }
    cout<<total%10;
    return 0;
}