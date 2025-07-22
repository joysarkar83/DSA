#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];

    int stPtr = 0, maxSum = INT_MIN, sum = 0;
    unordered_map<int, int> data;

    for(int endPtr = 0; endPtr < n; endPtr++){

        while(data[nums[endPtr]] > 0){
            data[nums[stPtr]]--;
            sum -= nums[stPtr];
            stPtr++;
        }

        data[nums[endPtr]]++;
        sum += nums[endPtr];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main(){
    vector<int> nums = {4,2,4,5,6};

    cout<<maximumUniqueSubarray(nums);

    return 0;
}