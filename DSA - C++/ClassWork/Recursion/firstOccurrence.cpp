#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> nums, int target, int i){
    if(nums[i] == target){
        return i;
    }
    else if(i == (nums.size()-1)){
        return -1;
    }
    else{
        return firstOccurrence(nums, target, i+1);
    }
}

int main(){
    vector<int> num = {1,2,3,3,3,4,5,6,10};
    int target = 3;

    cout<<firstOccurrence(num, target, 0);

    return 0;
}