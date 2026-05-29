#include <iostream>
#include <vector>
using namespace std;

int numberOfSpecialChars(string word) {
    int n = word.size();
    vector<int> capitals(26, -1), smalls(26, -1);

    for(int i=0; i<n; i++){
        char ch = word[i];
        if(isupper(ch) && (capitals[ch - 'A'] == -1)){
            capitals[ch - 'A'] = i;
        }else if(islower(ch)){
            smalls[ch - 'a'] = i;
        }
    }

    int res = 0;

    for(int i=0; i<26; i++){
        if((capitals[i] != -1) && (smalls[i] != -1) && (capitals[i]>smalls[i])){
            res++;
        }
    }

    return res;
}

int main(){
    return 0;
}