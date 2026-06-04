#include <iostream>
#include <vector>
using namespace std;

//pick an element from the unsorted part and place it in the correct spot in the sorted part

void insertionSortAscending(vector<int> &nums){
    for(int i=1; i<nums.size(); i++){
        for(int j=i; j>0; j--){
            if(nums[j]<nums[j-1]){
                swap(nums[j],nums[j-1]);
            }
        }
    }
}

int main(){
    vector<int> nums = {5,4,1,3,2,2};

    insertionSortAscending(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
}