#include <iostream>
#include <vector>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int n = nums.size();
    if(n <= 1){
        return n;
    }
    int st = 0, end = 1, maxLen = 1;

    while(end < n){
        if(nums[end-1] >= nums[end]){
            maxLen = max(maxLen, end-st);
            st = end;
        }
        end++;
    }
    if(end == n){
        maxLen = max(maxLen, end-st);
    }
    return maxLen;
}

int main(){
    vector<int> vec = {1,3,5,7};
    cout<<findLengthOfLCIS(vec);

    return 0;
}