#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool comp(const pair<string, int>& p1,const pair<string, int>& p2){
    return p1.second > p2.second;
}

string mostCommonWord(string paragraph, vector<string>& banned) {
    map<string, int> mp;
    unordered_set<string> ban(banned.begin(), banned.end());
    string temp;

    for(char i:paragraph){
        i = tolower(i);
        if(isalpha(i)){
            temp += i;
        }
        else if(!temp.empty()){
            mp[temp]++;
            temp.clear();
        }
    }
    if (!temp.empty()) mp[temp]++;

    vector<pair<string, int>> freq(mp.begin(), mp.end());
    sort(freq.begin(), freq.end(), comp);

    for(int i=0; i<freq.size(); i++){
        if(ban.count(freq[i].first) == 0){
            return freq[i].first;
        }
    }
    return "";
}

int main(){

    return 0;
}