//Max Sub-Array Sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(int array[], int size){
    int maxSum = INT_MIN, currSum = 0;
    for(int i=0; i<size; i++){
        currSum += array[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}


// int maxProduct(vector<int> nums) {
//     int currMax = nums[0], currMin = nums[0], maxProd = nums[0];
//     for(int i=1; i<nums.size(); i++){
//         if(nums[i]<0){
//             swap(currMax, currMin);
//         }

//         currMax = max(nums[i], nums[i]*currMax);
//         currMin = min(nums[i], nums[i]*currMin);

//         maxProd = max(maxProd, currMax);
//     }
//     return maxProd;
// }


int main(){
    int array[] = {2,-3,6,-5,4,2};
    int arraySize = sizeof(array)/sizeof(int);

    cout<<"Max Sub-Array sum: "<<maxSubarraySum(array, arraySize);

    return 0;
}