#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[nums[i]]++;
    }
    for(auto it = mp.begin(); it!=mp.end(); it++){
        if(it->second != 3){
            return it->first;
        }
    }
    return -1;
}

int main(){

    return 0;
}