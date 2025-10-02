#include <iostream>
#include <vector>
using namespace std;

int triangularSum(vector<int>& nums) {
    int n = nums.size();
    if(n == 1){
        return nums[0];
    }

    for(int i=0; i<n-1; i++){
        nums[i] = (nums[i] + nums[i+1])%10;
    }
    nums.pop_back();
    return triangularSum(nums);
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    cout<<triangularSum(nums);

    return 0;
}