#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// int countPalindromicSubsequence(string& s) {
//     int n = s.size();
//     unordered_set<string> track;
//     vector<bool> checkedFor(26, false);
//     for(int i=0; i<n-1; i++){
//         if(checkedFor[s[i]-'a'] == true){
//             continue;
//         }
//         char curr = s[i];
//         checkedFor[s[i]-'a'] = true;
//         for(int j=n-1; j>i; j--){
//             if(s[j] == curr){
//                 for(int k=i+1; k<j; k++){
//                     string newStr;
//                     newStr.push_back(s[i]);
//                     newStr.push_back(s[k]);
//                     newStr.push_back(s[j]);
//                     track.emplace(newStr);
//                 }
//             }
//         }
//     }
//     return track.size();
// }

int countPalindromicSubsequence(string& s) {
    int n = s.size();
    vector<int> firstVal(26, -1), lastVal(26, -1);
    for(char ch='a'; ch<='z'; ch++){
        int currAlphaIdx = ch-'a', lastIdx = -1;
        for(int i=0; i<n; i++){
            if(ch == s[i]){
                if(firstVal[currAlphaIdx] == -1){
                    firstVal[currAlphaIdx] = i;
                }
                lastIdx = i;
            }
        }
        lastVal[currAlphaIdx] = lastIdx;
    }

    int result = 0;
    for(int i=0; i<26; i++){
        if(firstVal[i] == -1){
            continue;
        }
        unordered_set<char> uniqueVals;
        int firstIdx = firstVal[i]+1, lastIdx = lastVal[i];
        for(firstIdx; firstIdx<lastIdx; firstIdx++){
            uniqueVals.emplace(s[firstIdx]);
        }
        result += uniqueVals.size();
    }
    return result;
}

int main(){
    return 0;
}