#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int stIdx = 0, endIdx = nums.size()-1;
    
    while(stIdx <= endIdx){
        int midIdx = stIdx+((endIdx-stIdx)/2);
        if(nums[midIdx] == target){
            return midIdx;
        }
        else if(target < nums[midIdx]){
            endIdx = midIdx-1;
        }
        else{
            stIdx = midIdx+1;
        }
    }
    return stIdx;
}

int main(){
    vector<int> arr = {1,2,3,5,6};
    cout<<searchInsert(arr, 4);

    return 0;
}