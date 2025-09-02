#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if(k == 1){
        return nums;
    }
    int n = nums.size();
    vector<int> maxVals;

    int currMax = INT_MIN;
    int st = 0, end = 0;

    for(end; end<k; end++){
        currMax = max(currMax, nums[end]);
    }
    maxVals.emplace_back(currMax);

    while(end < n){
        currMax = max(currMax, nums[end++]);
        maxVals.emplace_back(currMax);
    }
    
    return maxVals;
}

int main(){

    return 0;
}