#include <iostream>
using namespace std;
string lower (string str);
int main(){
    string word;
    int alpha[26] = {0}, max=0, max_index=0, dup=0;
    cin >> word;
    word = lower(word);
    for(int i=0;i<word.size();i++){
        alpha[word[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]>max){
            max = alpha[i];
            max_index = i;
            dup = 0;
        } 
        else if(alpha[i]==max) dup = 1;
    }
    if(dup==0) cout << (char)(max_index+'A');
    else cout << "?";

    return 0;
}

string lower (string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 'a'-'A';
        }
    }
    return str;
}