#include <iostream>
#include <vector>
using namespace std;

int numberOfSpecialChars(string word) {
    vector<int> small(26, 0), caps(26, 0);

    for(char ch:word){
        if(islower(ch)){
            small[ch - 97]++;
        }
        else{
            caps[ch - 65]++;
        }
    }

    int count = 0;
    for(int i=0; i<26; i++){
        if(small[i] && caps[i]){
            count++;
        }
    }
    return count;
}

int main(){


}