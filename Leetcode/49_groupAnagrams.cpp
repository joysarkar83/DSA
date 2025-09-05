#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    vector<pair<string,int>> data(n);

    for(int i=0; i<n; i++){
        data[i] = {strs[i], i};
        sort(data[i].first.begin(), data[i].first.end());
    }

    sort(data.begin(), data.end(), [](pair<string,int> p1, pair<string,int> p2){
        return p1.first < p2.first;
    });
    
    vector<vector<string>> ans;
    
    for(int i=0; i<n; i++){
        vector<string> curr;
        int j=i;
        for(; j<n; j++){
            if(data[i].first == data[j].first){
                curr.emplace_back(strs[data[j].second]);
            }else{
                break;
            }
        }
        ans.emplace_back(curr);
        i = j-1;
    }
    return ans;
}

int main(){

    return 0;
}