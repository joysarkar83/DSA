#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> nums(n);
    long long int maxVal = INT_MIN, minVal = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        maxVal = max(maxVal, nums[i]);
        minVal = min(minVal, nums[i]);
    }

    long long int maxFreq = 0;
    long long int minFreq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == maxVal) maxFreq++;
        if (nums[i] == minVal) minFreq++;
    }

    long long int maxDiff = maxVal - minVal;
    long long int ways = 0;

    if (maxVal == minVal) {
        ways = (n * (n - 1)) / 2;
    } else {
        ways = maxFreq * minFreq;
    }

    cout << maxDiff << " " << ways << "\n";

    return 0;
}