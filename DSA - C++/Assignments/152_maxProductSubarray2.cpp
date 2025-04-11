//Optimised - Kadane's Algorithm

#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> nums) {
    int currMax = nums[0], currMin = nums[0], maxProd = nums[0];
    for(int i=1; i<nums.size(); i++){
        if(nums[i]<0){
            swap(currMax, currMin);
        }

        currMax = max(nums[i], nums[i]*currMax);
        currMin = min(nums[i], nums[i]*currMin);

        maxProd = max(maxProd, currMax);
    }
    return maxProd;
}

int main(){
    vector<int> nums = {2,3,-2,4};
    // vector<int> nums = {-2,0,-1};

    cout<<maxProduct(nums);

    return 0;
}