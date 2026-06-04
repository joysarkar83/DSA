//Reverse an array with 0(1) space complexity

#include <iostream>
using namespace std;

int reverseArray(int array[], int size){
    for(int i=0, j=size-i-1 ; i<j ; i++, j--){
        swap(array[i], array[j]);
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = sizeof(array)/sizeof(int);

    reverseArray(array, arraySize);

    for (int i=0; i<arraySize; i++){
        cout<<array[i]<<"\t";
    }
    
    return 0;
}