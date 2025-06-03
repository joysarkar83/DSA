#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool closeStrings(string word1, string word2){
    //Length
    if(word1.length() != word2.length()){
        return false;
    }
    vector<int> freq1(26, 0), freq2(26, 0);
    vector<bool> exist1(26, false), exist2(26, false);

    //Preparing vectors
    for(char i:word1){
        freq1[i -'a']++;
        exist1[i -'a'] = true;
    }
    for(char i:word2){
        freq2[i -'a']++;
        exist2[i -'a'] = true;
    }

    //Checking
    if(exist1==exist2){
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return freq1==freq2;
    }
    return false;
}


int main(){
    string str1 = "aacabb";
    string str2 = "becbaa";
    cout<<closeStrings(str1, str2);
    return 0;
}