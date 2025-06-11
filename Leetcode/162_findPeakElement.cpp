#include <iostream>
#include <vector>
using namespace std;

int maxElementIndex(vector<int>& nums, int stIdx, int endIdx){
    if(stIdx == endIdx){
        return stIdx;
    }
    int midIdx = stIdx + ((endIdx-stIdx)/2);
    if(nums[midIdx] > nums[midIdx + 1]){
        return maxElementIndex(nums, stIdx, midIdx);
    }
    else{
        return maxElementIndex(nums, midIdx + 1, endIdx);
    }
}

int findPeakElement(vector<int>& nums){
    int stIdx = 0;
    int endIdx = nums.size()-1;
    return maxElementIndex(nums, stIdx, endIdx);
}

int main(){
    vector<int> nums = {1,2,9,3,5,6,4};
    cout<<findPeakElement(nums);

    return 0;
}