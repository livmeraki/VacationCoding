#include <iostream>
using namespace std;

int main(){
    int scores[5] = {0}, tmp, max_chef=0, max_score=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> tmp;
            scores[i] += tmp;
        }
        if (max_score<scores[i]) {
            max_score = scores[i];
            max_chef = i+1;
        }
    }

    cout << max_chef << " " << max_score;
    return 0;
}