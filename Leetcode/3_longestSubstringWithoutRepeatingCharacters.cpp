#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

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