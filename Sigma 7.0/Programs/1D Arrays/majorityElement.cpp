#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums){
    sort(nums.begin(), nums.end());
    return nums[nums.size()/2];
}

int main(){
    vector<int> arr = {3,2,3};

    cout<<majorityElement(arr);

    return 0;
}