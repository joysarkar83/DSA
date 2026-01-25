#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int minimumDifference(vector<int>& nums, int k) {
    int n = nums.size();
    if (n <= 1) {
        return 0;
    }

    sort(nums.begin(), nums.end());
    int res = INT_MAX;

    for (int i = 0; i <= n - k; i++) {
        int localMin = INT_MAX, localMax = INT_MIN;
        for (int j = i; j < k + i && j < n; j++) {
            localMin = min(localMin, nums[j]);
            localMax = max(localMax, nums[j]);
        }
        res = min(res, localMax - localMin);
    }
    return res;
}

int main(){
    return 0;
}