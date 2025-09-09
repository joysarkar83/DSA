#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();

    if(n == 1) return nums[0];

    int left = 0, right = n-1;

    if(nums[0] != nums[1]) return nums[0];
    if(nums[n-1] != nums[n-2]) return nums[n-1];

    while(left < right){
        int mid = left + (right - left)/2;

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        else if(((mid % 2 == 1) && nums[mid-1] == nums[mid]) || ((mid % 2 == 0) && nums[mid+1] == nums[mid])){
            left = mid;
        }
        else{
            right = mid;
        }
    }
    return -1;
}

int main(){

    return 0;
}