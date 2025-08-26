#include <iostream>
#include <vector>
using namespace std;

void allSubArrays(int idx, vector<int>& nums, vector<int>& currArr, vector<vector<int>>& subArrays, int& n){
    if(idx == n){
        subArrays.push_back(currArr);
        return;
    }
    allSubArrays(idx+1, nums, currArr, subArrays, n);

    currArr.emplace_back(nums[idx]);
    allSubArrays(idx+1, nums, currArr, subArrays, n);
}

int subsetXORSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> currArr;
    vector<vector<int>> allSubs;
    allSubArrays(0, nums, currArr, allSubs, n);
    
    int sum = 0;
    for(vector<int> i:allSubs){
        int XOR=0;
        for(int j:i){
            XOR ^= j;
        }
        sum += XOR;
    }
    return sum;
}

int main(){

    return 0;
}