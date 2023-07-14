#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float calc (float n, string op);

int main(){
    int testNum;
    float *answer, num;
    string operators;

    cin >> testNum;
    answer = new float [testNum];
    for(int i=0;i<testNum;i++){
        cin >> num;
        *(answer+i) = num;
        getline(cin, operators);
        for(int j=1;j<operators.size();j+=2){
            *(answer+i) = calc(*(answer+i), operators.substr(j, 1));
        }
    }
    cout << fixed << setprecision(2);
    for(int i=0;i<testNum;i++){
        cout << *(answer+i)<<endl;
    }
    return 0;
}

float calc (float n, string op){
    float ans = n;
    if(op=="@") ans *= 3;
    if(op=="%") ans += 5;
    if(op=="#") ans -= 7;
    return ans;
}