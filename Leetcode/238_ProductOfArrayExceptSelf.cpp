#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(), prefix = 1, suffix = 1;
    vector<int> prefixProd(n), suffixProd(n);

    for(int i=0; i<n; i++){
        prefixProd[i] = prefix;
        prefix *= nums[i];
    }

    for(int i=n-1; i>=0; i--){
        suffixProd[i] = suffix;
        suffix *= nums[i];
    }

    for(int i=0; i<n; i++){
        nums[i] = prefixProd[i] * suffixProd[i];
    }

    return nums;
}

int main(){
    vector<int> nums = {-1,1,0,-3,3};

    productExceptSelf(nums);

    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}