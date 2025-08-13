#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& nums){
    for(int i=0; i<nums.size(); i++) cout<<nums[i]<<" ";
    cout<<"\n";
    return;
}

// Recurrsive Approach
vector<int> fromLeft(vector<int> nums) {
    int n = nums.size();
    vector<int> newNums;
    
    for (int i = 1; i < n; i += 2) {
        newNums.emplace_back(nums[i]);
    }
    return newNums;
}

vector<int> fromRight(vector<int> nums) {
    int n = nums.size();
    vector<int> newNums;
    
    for (int i = n - 2; i >= 0; i -= 2) {
        newNums.emplace_back(nums[i]);
    }

    reverse(newNums.begin(), newNums.end());
    return newNums;
}

void lastRemainingHelper(vector<int>& nums) {
    if (nums.size() != 1) nums = fromLeft(nums);

    if (nums.size() != 1) nums = fromRight(nums);

    if (nums.size() != 1) lastRemainingHelper(nums);

    return;
}

int lastRemaining(int n) {
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        nums[i] = i + 1;

    lastRemainingHelper(nums);

    return nums[0];
}

int main(){
    int n = 9;
    
    cout<<lastRemaining(n);

    return 0;
}