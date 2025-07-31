#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int overallMax = 0;
    for(int i=0; i<n; i++){
        int tempMax = 0;
        while(i<n && nums[i]){
            tempMax++;
            i++;
        }
        overallMax = max(overallMax, tempMax);
    }
    return overallMax;
}

int main(){

    return 0;
}