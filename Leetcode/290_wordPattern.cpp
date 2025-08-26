#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

bool wordPattern(string& pattern, string& s) {
    unordered_map<string, char> mp;
    vector<bool> charTrack(26, 0);
    s.push_back(' ');
    int n = s.size();
    int idx = 0;

    string curr = "";
    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            if (idx >= pattern.size()) return false;

            if(mp.find(curr) != mp.end()){
                if(mp[curr] != pattern[idx]){
                    return false;
                }
                else{
                    curr.clear();
                }
            }
            else{
                if(charTrack[pattern[idx] - 'a'] == false){
                    mp[curr] = pattern[idx];
                }
                else{
                    return false;
                }
                charTrack[pattern[idx] - 'a'] = true;
                curr.clear();
            }
            idx++;
        }
        else{
            curr.push_back(s[i]);
        }
    }

    return idx == pattern.size();
}

int main(){

    return 0;
}