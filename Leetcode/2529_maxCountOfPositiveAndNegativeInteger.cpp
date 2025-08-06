#include <iostream>
#include <vector>
using namespace std;

// Linear Approach
int maximumCount(vector<int>& nums) {
    int n = nums.size();
    int neg = 0, zero = 0, pos = 0;

    for(int i=0; i<n; i++){
        if(nums[i] < 0) neg++;
        else if(nums[i] == 0) zero++;
        else break;
    }
    pos = n - neg - zero;

    return max(pos, neg);
}

int main(){

    return 0;
}