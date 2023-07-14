#include <iostream>
using namespace std;

int main(){
    int A, B, C, mult;
    int count[10] = {0};
    cin >> A;
    cin >> B;
    cin >> C;

    mult = A*B*C;
    while(mult>0){
        count[mult%10]++;
        mult/=10;
    }
    for(int i=0;i<10;i++){
        cout << count[i] << endl;
    }
    return 0;
}