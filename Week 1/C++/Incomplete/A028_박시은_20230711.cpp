#include <iostream>
#include <string>
using namespace std;

int main(){
    string n1, n2;
    int sz, tmp, sn1, sn2, *sum, i=0; //smalln1, smalln2
    cin >> n1 >> n2;

    bool carry = false;

    if(n1.size()>n2.size()) sz = n1.size();
    else sz = n2.size();
    
    sum = new int [sz/9+1];
    tmp = sz;
    tmp -= sizeof(int)+1;

    while(tmp>0){
        sn1 = stoi(n1.substr(tmp, tmp+sizeof(int)-1));
        sn2 = stoi(n2.substr(tmp, tmp+sizeof(int)-1));
        
        tmp-=9;
        sum[i] = sn1+sn2;
        if(tmp < 0)tmp = 0;
        i++;
    }
    
    for(int i=sz;i>0;i++){
        cout << sum[i-1];
    }
    return 0;
}