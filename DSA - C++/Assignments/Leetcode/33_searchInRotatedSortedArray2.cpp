//Optimised - Binary Search

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target) {
    int n=nums.size(), start=0, end=n-1;
    while(start<=end){
        int mid = (end + ((start - end)/2));
        if (nums[mid] == target){                           //To check the middle element
            return mid;
        }else if(nums[start]<=nums[mid]){                   //To check whether left half is sorted or not
            if(nums[start]<=target && target<nums[mid]){    //To check whether target is present in the given left-range
                end = mid-1;
            }else{                                          //If not present in left range, then skip left half and move to right
                start = mid+1;
            }
        }else{                                              //If left half isn't sorted, right half must be sorted (rotated-sorted condition)
            if(nums[mid]<target && target<=nums[end]){      //To check whether target is present in the given right-range
                start = mid+1;
            }else{                                          //If not present in right range, then skip right half and move to left
                end = mid-1;
            }
        }
    }
    return -1;    
}

int main(){

    // vector<int> nums = {4,5,6,7,0,1,2};
    vector<int> nums = {3,1};
    int target = 0;

    cout<<search(nums, target);

    return 0;
}