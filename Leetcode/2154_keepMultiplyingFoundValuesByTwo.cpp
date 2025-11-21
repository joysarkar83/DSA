#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool binarySearch(vector<int>& nums, int& original){
    int n = nums.size();
    int st = 0, end = n-1;
    
    while(st < end){
        int midIdx = st + (end - st)/2;
        if(nums[midIdx] == original){
            return true;
        }
        else if(nums[midIdx] < original){
            st = midIdx + 1;
        }
        else{
            end = midIdx - 1;
        }
    }
    return false;
}

int findFinalValue(vector<int>& nums, int original) {
    sort(nums.begin(), nums.end());
    while(binarySearch(nums, original)){
        original *= 2;
    }
    return original;
}

int main(){

    return 0;
}