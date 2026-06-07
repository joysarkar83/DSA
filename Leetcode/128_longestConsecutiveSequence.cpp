#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> exists(nums.begin(), nums.end());
    int n = nums.size(), res = 0;

    for(int i:exists){
        if(!exists.count(i-1)){
            int currNum = i;
            int currStreak = 1;

            while(exists.count(currNum+1)){
                currStreak++;
                currNum++;
            }
            res = max(currStreak, res);
        }
    }
    return res;
}

int main(){
    return 0;
}