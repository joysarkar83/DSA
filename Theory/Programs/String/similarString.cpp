#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSimilar(string word1, string word2){
    // Check if both words have the same character frequencies
    vector<int> exists1(26, 0), exists2(26, 0);
    for(char c:word1){
        exists1[c - 'a']++;
    }
    for(char c:word2){
        exists2[c - 'a']++;
    }

    if(exists1 == exists2){
        return true;
    }
    return false;
}

int main(){
    string w1 = "bank";
    string w2 = "nbka";

    cout<<isSimilar(w1, w2);

    return 0;
}
