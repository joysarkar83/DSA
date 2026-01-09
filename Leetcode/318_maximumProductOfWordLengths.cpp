#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int maxProduct(vector<string>& words) {
    int n = words.size();
    vector<unordered_set<char>> data;
    for(string& str:words){
        unordered_set<char> curr;
        for(char& ch:str){
            curr.emplace(ch);
        }
        data.emplace_back(curr);
    }

    unsigned long maxVal = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            bool qualified = true;
            for(char ch:data[i]){
                if(data[j].count(ch) != 0){
                    qualified = false;
                    break;
                }
            }
            if(qualified){
                maxVal = max(maxVal, words[i].size() * words[j].size());
            }
        }
    }
    return maxVal;
}

int main(){

    return 0;
}