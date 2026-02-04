#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int>& nums, int target, int currSum, int currIdx){
    if(currSum == target && currIdx == nums.size()){
        return 1;
    }
    else if(currIdx == nums.size()){
        return 0;
    }
    return helper(nums, target, currSum+nums[currIdx], currIdx++) + helper(nums, target, currSum-nums[currIdx], currIdx++);
}

int findTargetSumWays(vector<int>& nums, int target) {
    return helper(nums, target, 0, 0);
}

int main(){

    return 0;
}