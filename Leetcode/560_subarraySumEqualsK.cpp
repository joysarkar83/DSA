#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(), currSum = 0, res = 0;
    unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        currSum += nums[i];
        if(currSum == k) res++;
        if(hash.count(currSum-k)) res += hash[currSum - k];
        hash[currSum]++;
    }
    return res;
}

int main(){

    return 0;
}