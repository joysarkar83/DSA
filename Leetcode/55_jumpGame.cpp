#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size();

    if(n<=1){
        return true;
    }

    int maxDist = nums[0];
    for(int i=1; i<maxDist && i<n; i++){
        maxDist = max(maxDist, i+nums[i]);
        if(maxDist >= n){
            return true;
        }
    }
    return false;
}

int main(){

    return 0;
}