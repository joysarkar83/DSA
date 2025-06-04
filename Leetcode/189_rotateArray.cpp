#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Approach 1 -> Time Limit Exceeded
// void rotate(vector<int>& nums, int k){
//     int lastIdx = nums.size()-1;
//     for(int i=0; i<k; i++){
//         nums.insert(nums.begin(), nums[lastIdx]);
//         nums.pop_back();
//     }
// }

//Approach 2
void rotate(vector<int>& nums, int k){
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7};

    rotate(arr, 17);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}