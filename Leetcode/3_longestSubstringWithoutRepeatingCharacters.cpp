#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Better 2 pointer approach
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    unordered_map<char, int> freq;
    int st = 0, end = 0, maxLen = 0, currLen = 0;
    while(end < n){
        char ch = s[end];
        freq[ch]++;
        currLen++;
        while(freq[ch] > 1){
            freq[s[st++]]--;
            currLen--;
        }
        maxLen = max(currLen, maxLen);
        end++;
    }
    return maxLen;
}

// Old Approach
int lengthOfLongestSubstring(string s){
    int n = s.size(), count = 0, start = 0;

    vector<bool> track(256, false);
    
    for(int end=0; end<n; end++){
        while(track[s[end]]){
            track[s[start]] = false;
            start++;
        }
        
        track[s[end]] = true;
        count = max(count, end - start + 1);
    }
    return count;
}

int main(){
    string str = "pwwkew";

    cout<<lengthOfLongestSubstring(str);

    return 0;
}