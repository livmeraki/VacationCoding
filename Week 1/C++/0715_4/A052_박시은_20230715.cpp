#include <iostream>
#include <vector>
using namespace std;

int main(){
    int quizNum, count;
    string inputOX;
    vector <int> result;
    cin >> quizNum;


    for(int i=0;i<quizNum;i++){
        count = 0;
        cin >> inputOX;
        result.push_back(0);
        for(int j=0;j<inputOX.size();j++){
            if(inputOX[j]=='O') count++;
            else count = 0;
            result[i] += count;
        }
    }

    for(int i=0;i<quizNum;i++){
        cout << result[i]<<endl;
    }
    return 0;
}