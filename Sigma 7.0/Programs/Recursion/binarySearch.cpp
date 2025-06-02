#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target, int stIdx, int endIdx){

    if(stIdx > endIdx){
        return -1;
    }

    int midIdx = stIdx + ((endIdx - stIdx)/2);
    
    if(nums[midIdx] == target){
        return midIdx;
    }
    else if(nums[midIdx] > target){
        endIdx = midIdx-1;
        return binarySearch(nums, target, stIdx, endIdx);
    }
    else{
        stIdx = midIdx+1;
        return binarySearch(nums, target, stIdx, endIdx);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 7;
    cout<<binarySearch(nums, target, 0, nums.size()-1);

    return 0;
}