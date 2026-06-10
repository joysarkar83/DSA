#include <iostream>
#include <vector>
using namespace std;

long long maxTotalValue(vector<int>& nums, int k) {
    int n = nums.size(), maxVal = INT_MIN, minVal = INT_MAX;
    for(int& i:nums){
        maxVal = max(maxVal, i);
        minVal = min(minVal, i);
    }
    return (long long int)k * (maxVal - minVal);
}

int main(){
    return 0;
}