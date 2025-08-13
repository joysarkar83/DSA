#include <iostream>
#include <vector>
#include <string>
using namespace std;

char findTheDifference(string& s, string& t) {
    vector<int> freq(26, 0);
    for(int i:s){
        freq[i - 'a']++;
    }
    for(int i:t){
        freq[i - 'a']--;
    }
    for(int i=0; i<freq.size(); i++){
        if(freq[i] != 0) return (i + 'a');
    }
    return 'j';
}

int main(){
    string s = "abcde";
    string t = "cdab";

    cout<<findTheDifference(s, t);

    return 0;
}