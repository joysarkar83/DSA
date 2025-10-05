#include <iostream>
#include <vector>
using namespace std;

int alternatingSum(vector<int>& nums) {
    int sum = 0, n = nums.size();
    for(int i=0; i<n; i++){
        sum += nums[i];
        if(i++ < n){
            sum -= nums[i];
        }
    }
    return sum;
}

int main(){
    return 0;
}