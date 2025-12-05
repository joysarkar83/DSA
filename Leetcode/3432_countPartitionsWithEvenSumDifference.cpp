#include <iostream>
#include <vector>
using namespace std;

int countPartitions(vector<int>& nums) {
    int n=nums.size(), sum = 0;

    for(int& i:nums){
        sum += i;
    }

    int leftSum = 0, rightSum = 0, count = 0;

    for(int& i:nums){
        leftSum += i;
        rightSum = sum - leftSum;
        if(leftSum == sum){
            return count;
        }
        if((leftSum - rightSum)%2 == 0){
            count++;
        }
    }
    return count;
}

int main(){

    return 0;
}