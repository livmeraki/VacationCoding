#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int> tmp;
    tmp.push_back(0);
    
    for (int i=0;i<arr.size();i++){
        if(arr[i]%divisor==0) answer.push_back(arr[i]);
    }
    
    if (answer.size()<=0) answer.push_back(-1);
    
    for (int i=0; i<answer.size()-1; i++){
        for (int j=0; j<answer.size()-i-1; j++){
            if(answer[j]>answer[j+1]){
                tmp[0] = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = tmp[0];
            }
        }
    }
    
    return answer;
}