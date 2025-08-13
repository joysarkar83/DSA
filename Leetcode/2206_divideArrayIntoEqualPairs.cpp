#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool divideArray(vector<int>& nums) {
    int n = nums.size();
    if(n%2 != 0) return false;

    unordered_map<int, int> mp;
    for(int i:nums){
        mp[i]++;
    }
    for(auto it:mp){
        if((it.second)%2 != 0) return false;
    }
    return true;
}

int main(){

    return 0;
}