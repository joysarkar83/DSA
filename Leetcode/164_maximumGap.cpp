#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maximumGap(vector<int>& nums) {
    int n = nums.size();
    if(n<2) return 0;

    sort(nums.begin(), nums.end());
    int maxVal = INT_MIN;
    int curr = INT_MIN;
    
    for(int i=1; i<n; i++){
        curr = nums[i] - nums[i-1];
        maxVal = max(curr, maxVal);
    }
    return maxVal;
}

int main(){
    return 0;
}