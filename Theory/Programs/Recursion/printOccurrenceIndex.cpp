#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printOccurrencecurrIdx(vector<int> nums, int target, int currIdx){
    if(currIdx == nums.size()){
        return;
    }

    if(nums[currIdx] == target){
        cout<<currIdx<<" ";
    }
    currIdx++;
    printOccurrencecurrIdx(nums, target, currIdx);
}

int main(){

    vector<int> nums = {1,2,7,7,5,6,7,8,9};
    int target = 7;
    printOccurrencecurrIdx(nums, target, 0);

    return 0;
}