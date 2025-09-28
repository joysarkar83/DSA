#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// WRONG
long long splitArray(vector<int>& nums) {
    int i = 0, n = nums.size(), leftSum = 0, rightSum = 0;

    // Strictly Increasing
    while(i+1 < n && nums[i] < nums[i+1]){
        leftSum += nums[i++];
    }
    if(i == 0 || i == n-1) return -1;
    int maxIdx = i;

    // Strictly Decreasing
    while(i+1 < n && nums[i] > nums[i+1]){
        rightSum += nums[i++];
    }
    if(i != n-1) return -1;


    long long diff1 = llabs((long long)(leftSum + nums[maxIdx]) - rightSum);
    long long diff2 = llabs((long long)leftSum - (rightSum + nums[maxIdx]));

    return min(diff1, diff2);
}

int main(){
    vector<int> vec = {1,3,2};
    cout<<splitArray(vec);
    return 0;
}