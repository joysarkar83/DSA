#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = INT_MIN, tempSum = 0, n = nums.size();

    for(int& i:nums){
        tempSum += i;
        sum = max(sum, tempSum);
        if(tempSum < 0){
            tempSum = 0;
        }
    }
    return sum;
}

int main(){

    return 0;
}