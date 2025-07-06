#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int thirdMax(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    
    sort(nums.begin(), nums.end(), greater<int>());
    
    int prevVal;
    int currMin = INT_MAX;
    int count = 0;

    for(int i:nums){
        if(i <= currMin && prevVal != i){
            count++;
            currMin = i;
        }

        if(count == 3){
            return currMin;
        }
        prevVal = i;
    }
    return nums[0];
}

int main(){
    vector<int> nums = {1,2147483647,-2147483648};

    cout<<thirdMax(nums);

    return 0;
}