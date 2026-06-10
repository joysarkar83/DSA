#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
    int n = nums.size(), maxLen = 0;
    unordered_map<long long int, int> hash;
    long long int prefixSum = 0;

    for(int i=0; i<n; i++){
        prefixSum += nums[i];
        
        if(prefixSum == k) maxLen = i+1;
        else if(hash.count(prefixSum - k)){
            maxLen = max(maxLen, i-hash[prefixSum-k]);
        }
        if(!hash.count(prefixSum)){
            hash[prefixSum] = i;
        }
    }
    return maxLen;
}

// Doesn't work if there's negatives
int longestSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    int maxLen = 0, currSum = 0;
    int st = 0, end = 0;

    while (end < n) {
        currSum += nums[end];
        while (currSum > k && st <= end) {
            currSum -= nums[st];
            st++;
        }
        if (currSum == k) maxLen = max(maxLen, end - st + 1);
        end++;
    }

    return maxLen;
}

int main(){

    return 0;
}