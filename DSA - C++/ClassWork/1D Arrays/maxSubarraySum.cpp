//Brute force approach

#include <iostream>
using namespace std;

int maxSubarraySum(int array[], int size){
    int maxSum = INT16_MIN;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += array[k];
                maxSum = max(maxSum, sum);
            }
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