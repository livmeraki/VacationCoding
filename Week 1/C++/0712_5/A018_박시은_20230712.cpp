#include <iostream>
#include <vector>
using namespace std;

vector <int> insertion_sort(vector <int> v);

int main(){
    vector <int> A, B;
    int num, tmp, sum=0;

    cin >> num;

    for(int i=0;i<num;i++){
        cin >> tmp;
        A.push_back(tmp);
    }

    for(int i=0;i<num;i++){
        cin >> tmp;
        B.push_back(tmp);
    }

    A = insertion_sort(A);
    B = insertion_sort(B);

    for(int i=0; i<num;i++){
        sum += A[i]*B[num-i-1]; 
    }
    cout << sum;
    return 0;
}

vector <int> insertion_sort(vector <int> v){
    int tmp;
    for(int i=1;i<v.size();i++){
        for(int j=i;j>0;j--){
            if(v[j-1]>v[j]){
                tmp = v[j-1];
                v[j-1] = v[j];
                v[j] = tmp;
            }
        }
    }
    return v;
}