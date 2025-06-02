#include <iostream>
#include <vector>
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



// int search(vector<int> nums, int target) {
//     int n=nums.size(), start=0, end=n-1;
//     while(start<=end){
//         int mid = (end + ((start - end)/2));
//         if (nums[mid] == target){                           //To check the middle element
//             return mid;
//         }else if(nums[start]<=nums[mid]){                   //To check whether left half is sorted or not
//             if(nums[start]<=target && target<nums[mid]){    //To check whether target is present in the given left-range
//                 end = mid-1;
//             }else{                                          //If not present in left range, then skip left half and move to right
//                 start = mid+1;
//             }
//         }else{                                              //If left half isn't sorted, right half must be sorted (rotated-sorted condition)
//             if(nums[mid]<target && target<=nums[end]){      //To check whether target is present in the given right-range
//                 start = mid+1;
//             }else{                                          //If not present in right range, then skip right half and move to left
//                 end = mid-1;
//             }
//         }
//     }
//     return -1;    
// }



int main(){
    int array[] = {2,4,6,8,10,12,14,16,18,20};
    int arraySize = sizeof(array)/sizeof(int);
    int toFind = 12;

    cout<<"Found at index: "<<binarySearch(array, arraySize, toFind);

    return 0;
}