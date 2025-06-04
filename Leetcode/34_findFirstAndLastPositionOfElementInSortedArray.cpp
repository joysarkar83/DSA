#include <iostream>
#include <vector>
using namespace std;

int firstIdx(vector<int> nums, int target){
    int stIdx = 0, endIdx = nums.size()-1, ans = -1;
    while(stIdx <= endIdx){
        int midIdx = stIdx + ((endIdx - stIdx)/2);
        if(nums[midIdx] == target){
            ans = midIdx;
            endIdx--;
        }
        else if(nums[midIdx] < target){
            stIdx = midIdx+1;
        }
        else{
            endIdx = midIdx-1;
        }
    }
    return ans;
}

int lastIdx(vector<int> nums, int target){
    int stIdx = 0, endIdx = nums.size()-1, ans = -1;
    while(stIdx <= endIdx){
        int midIdx = stIdx + ((endIdx - stIdx)/2);
        if(nums[midIdx] == target){
            ans = midIdx;
            stIdx++;
        }
        else if(nums[midIdx] < target){
            stIdx = midIdx+1;
        }
        else{
            endIdx = midIdx-1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target){
    vector<int> ans(2);
    ans[0] = firstIdx(nums, target);
    ans[1] = lastIdx(nums, target);
    return ans;
}

int main(){
    vector<int> nums = {1,2,3};

    vector<int> ans = searchRange(nums, 3);

    for(int i:ans){
        cout<<i<<" ";
    }

}