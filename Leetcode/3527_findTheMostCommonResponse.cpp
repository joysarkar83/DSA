#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comp(const pair<string, int>& p1, const pair<string, int>& p2){
    if(p1.second > p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return false;
}

string findCommonResponse(vector<vector<string>>& responses) {
    vector<unordered_set<string>> newData;

    for(vector<string>& vect:responses){
        unordered_set<string> st;
        for(string& str:vect){
            st.emplace(str);
        }
        newData.emplace_back(st);
    }
    
    unordered_map<string, int> freq;

    for(unordered_set<string>& st:newData){
        for(string str:st){
            freq[str]++;
        }
    }

    vector<pair<string, int>> freqCpy(freqCpy.begin(), freqCpy.end());

    sort(freqCpy.begin(), freqCpy.end(), comp);

    return freqCpy.front().first;
}

int main(){

    return 0;
}