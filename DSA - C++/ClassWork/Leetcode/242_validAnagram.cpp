#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//APPROACH 1
// bool isAnagram(string s, string t){
//     if(s.length() != t.length()){
//         return false;
//     }
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if(s != t){
//         return false;
//     }
//     return true;
// }

//APPROACH 2
bool isAnagram(string s, string t){

    if(s.length() != t.length()){
        return false;
    }

    int count[26] = {0};
    for(int i=0; i<s.length(); i++){
        count[(int)s[i] - 'a']++;
        count[(int)t[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "anagram", t = "nagaram";
    cout<<isAnagram(s, t);

    return 0;
}