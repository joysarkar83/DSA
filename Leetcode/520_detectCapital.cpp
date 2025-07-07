#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool detectCapitalUse(string& word) {
    int n = word.size();
    if(n<=1){
        return true;
    }

    int nCapitals = 0;
    bool firstCapital = false;
    if(word[0] >= 'A' && word[0]<='Z') firstCapital = true;

    for(int i=0; i<n; i++){
        if(word[i] >= 65 && word[i]<=90) nCapitals+=1;
    }

    if(firstCapital && (nCapitals == 1 || nCapitals == n)) return true;
    if(!firstCapital && nCapitals == 0) return true;
    return false;
}

int main(){
    string s = "FFFFFFFFFFFFFFFFFFFFff";

    detectCapitalUse(s);

    return 0;
}