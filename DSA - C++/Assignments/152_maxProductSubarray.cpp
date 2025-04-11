//Brute Force

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int> nums) {
    int maxProd = INT_MIN;
    for(int i=0; i<=nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            int currProd = 1;
            for(int k=i; k<=j; k++){
                currProd *= nums[k];
                maxProd = max(maxProd, currProd);
            }
        }
    }
    return maxProd;
}

int main(){
    // vector<int> nums = {-2,0,-1};
    vector<int> nums = {2,3,-2,4};
    cout<<maxProduct(nums);
    return 0;
}