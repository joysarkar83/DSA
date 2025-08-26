#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void printVector(vector<int>& nums, int st, int end) {
    for (int i = st; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
}

int longestSubarray(vector<int>& nums) {
    int n = nums.size();
    int st = 0, maxLen = 0, zeroCount = 0;

    for (int end = 0; end < n; end++) {
        if (nums[end] == 0) zeroCount++;
        
        while (zeroCount > 1) {
            if (nums[st] == 0) zeroCount--;
            st++;
        }

        printVector(nums, st, end);

        maxLen = max(maxLen, end - st);
    }

    return maxLen;
}


int main(){

    return 0;
}