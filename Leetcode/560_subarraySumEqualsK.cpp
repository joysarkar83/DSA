#include <iostream>
#include <vector>
using namespace std;

// 1,2,3    3

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int st = 0, end = 0;
    int count = 0, sum = 0;

    while(end < n){
        sum += nums[end];

        while(sum > k && st <= end){
            sum -= nums[st];
            st++;
        }

        if(sum == k){
            count++;
        }

        end++;
    }
    return count;
}

int main(){

    return 0;
}