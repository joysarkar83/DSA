//O(n log n)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& array, int stIdx, int midIdx, int endIdx){
    vector<int> temp;
    int i = stIdx;                              //index for left half array
    int j = midIdx + 1;                         //index for right half array

    while(i<=midIdx && j<=endIdx){              //runs if both arrays contains some elements
        if(array[j]>=array[i]){
            temp.emplace_back(array[j++]);
        }
        else{
            temp.emplace_back(array[i++]);
        }
    }
    
    while(i<=midIdx){                           //runs if left array contains some elements
        temp.emplace_back(array[i++]);
    }

    while(j<=endIdx){                           //runs if right array contains some elements
        temp.emplace_back(array[j++]);
    }

    for(int m=stIdx, n=0; m<=endIdx; m++, n++){     //copies from the temp array to our original array
        array[m] = temp[n];
    }
}

void mergeSortDescending(vector<int>& array, int stIdx, int endIdx){
    if(stIdx >= endIdx){
        return;
    }

    int midIdx = stIdx + ((endIdx - stIdx)/2);

    mergeSortDescending(array, stIdx, midIdx);
    mergeSortDescending(array, midIdx+1, endIdx);

    merge(array, stIdx, midIdx, endIdx);
}

int main(){
    vector<int> nums = {7,4,2,8,9,3,6,1,1,1,2};

    mergeSortDescending(nums, 0, nums.size()-1);

    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}