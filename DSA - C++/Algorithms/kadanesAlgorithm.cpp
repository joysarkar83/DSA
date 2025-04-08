//Max Sub-Array Sum

#include <iostream>
using namespace std;

int maxSubarraySum(int array[], int size){
    int maxSum = INT16_MIN, currSum = 0;
    for(int i=0; i<size; i++){
        currSum += array[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int array[] = {2,-3,6,-5,4,2};
    int arraySize = sizeof(array)/sizeof(int);

    cout<<"Max Sub-Array sum: "<<maxSubarraySum(array, arraySize);

    return 0;
}