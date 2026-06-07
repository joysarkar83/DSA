#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                vector<int> res;
                res.emplace_back(i);
                res.emplace_back(j);
                return res;
            }
        }
    }
    return {};
}

int main(){


    return 0;
}