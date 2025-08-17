#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestPalindrome(string& s) {
    vector<int> freq(52, 0);
    for(char i:s){
        if(islower(i)){
            freq[i-'a']++;
        }else{
            freq[i-'A'+26]++;
        }
    }

    int len = 0;
    bool hasOdd = false;
    for(int i=0; i<52; i++){
        int curr = freq[i];
        if(curr % 2 == 0){
            len += curr;
        }
        else{
            len += curr-1;
            hasOdd = true;
        }
    }
    if(hasOdd) len += 1;
    return len;
}

int main(){

    return 0;
}