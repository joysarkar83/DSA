#include <bits/stdc++.h>
using namespace std;

#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

// bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
//     int count = 0;
//     unordered_map<string, int> existence;

//     for(string word : bannedWords){
//         existence[word] = 1;
//     }
//     for(string word : message){
//         if(existence[word] == 1){
//             count++;
//         }
//         if(count >= 2){
//             return true;
//         }
//     }
//     return false;
// }

bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
    unordered_set<string>st(bannedWords.begin(),bannedWords.end());
    int count = 0;
    for(auto it:message){
        if(st.find(it) != st.end()) 
        count++;
        if(count >= 2){
            return true;
        }
    }  
    return false;
}


int main(){
    vector<string> message = {"hello","world","leetcode"};
    vector<string> bannedWords = {"world","hello"};

    cout<<reportSpam(message, bannedWords);
    return 0;
}