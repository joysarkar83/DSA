#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int currSum = 0, minLen = INT_MAX;

    int st = 0, end = 0;
    for (end; end < n; end++) {
        currSum += nums[end];

        while (currSum >= target) {
            minLen = min(minLen, (end - st + 1));
            currSum -= nums[st];
            st++;
        }
    }
    if (minLen == INT_MAX) return 0;
    return minLen;
}

int main(){

    return 0;
}