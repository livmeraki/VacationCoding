#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.size()!=4 && s.size()!=6) return false;
    for(int i=0;i<s.size();i++){
        if(s.substr(i, 1)>"9" || s.substr(i, 1)<"0") return false;
    }
    return true;
}