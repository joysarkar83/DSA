//Same code works for Q 154. Find Minimum in Rotated Sorted Array II


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMin(vector<int>& nums) {
    int stIdx = 0, endIdx = nums.size()-1;
    int mini = INT_MAX;
    while(stIdx<=endIdx){
        int midIdx = stIdx + (endIdx - stIdx)/2 ;
        if(nums[stIdx] <= nums[midIdx]){
            mini = min(mini, nums[stIdx]);
            stIdx++;
        }
        else if(nums[midIdx] <= nums[endIdx]){
            mini = min(mini, nums[midIdx]);
            endIdx--;
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {3,4,5,1,2};

    cout<<findMin(arr);

    return 0;
}