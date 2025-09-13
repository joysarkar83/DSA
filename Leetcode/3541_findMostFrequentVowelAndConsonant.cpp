#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxFreqSum(string& s) {
    vector<int> freq(26, 0);
    for(char ch:s){
        freq[ch - 'a']++;
    }

    int maxV = 0, maxC = 0;
    for(int i=0; i<26; i++){
        if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20){
            maxV = max(maxV, freq[i]);
        }
        else{
            maxC = max(maxC, freq[i]);
        }
    }
    return maxV + maxC;
}

int main(){

    return 0;
}