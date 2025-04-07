#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int find){
    int start = 0, end = size-1;

    while (start<=end){
        
        int mid = (start+end)/2;

        if(find == array[mid]){
            return mid;
        } else if(array[mid] < find){  //2nd Half
            start = mid+1;
        } else{                        //1st Half
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int array[] = {2,4,6,8,10,12,14,16,18,20};
    int arraySize = sizeof(array)/sizeof(int);
    int toFind = 12;

    cout<<"Found at index: "<<binarySearch(array, arraySize, toFind);

    return 0;
}