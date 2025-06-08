#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target){
    int stIdx = 0, endIdx = nums.size()-1;
    while(stIdx<=endIdx){
        int midIdx = (stIdx + ((endIdx-stIdx)/2));
        if(nums[midIdx] == target){
            return true;
        }
        if((nums[stIdx] == nums[midIdx]) && (nums[endIdx] == nums[midIdx])){
            stIdx++; endIdx--;
        }
        else if(nums[stIdx] <= nums[midIdx]){                       //Is left half sorted
            if(nums[stIdx] <= target && target < nums[midIdx]){
                endIdx = midIdx - 1;
            }
            else{
                stIdx = midIdx + 1;
            }
        }
        else{                                                       //Considering right half to be sorted
            if(nums[midIdx] < target &&  target <= nums[endIdx]){
                stIdx = midIdx + 1;
            }
            else{
                endIdx = midIdx - 1;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums = {1,0,1,1,1};
    int target = 0;

    cout<<search(nums, target);
    return 0;
}