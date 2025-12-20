#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool check(unordered_map<int, int>& track){
    for(auto& itr:track){
        if(itr.second > 1){
            return true;
        }
    }
    return false;
}

int minOperations(vector<int>& nums) {
    unordered_map<int, int> track;
    
    for(int& i:nums){
        track[i]++;
    }
    
    if(!check(track)){
        return 0;
    }
    reverse(nums.begin(), nums.end());
    
    int opCount = 0;
    while(check(track) && nums.size()>3){
        int n = nums.size();
        for(int i=0; i<3; i++){
            track[nums[n-1]]--;
            if(track[nums[n-1]]<1){
                track.erase(nums[n-1]);
            }
            nums.pop_back();
        }
        opCount++;
    }

    if(check(track) && nums.size()<3){
        return ++opCount;
    }
    return opCount;
}

int main(){

    return 0;
}