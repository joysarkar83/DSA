#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// double findMedimedianortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> nums;
//     for(int i=0; i<nums1.size(); i++){
//         nums.emplace_back(nums1[i]);
//     }
//     for(int i=0; i<nums2.size(); i++){
//         nums.emplace_back(nums2[i]);
//     }
//     sort(nums.begin(), nums.end());

//     double median = 0;
//     int size = nums.size();
//     if(size%2==1){
//         median = nums[size/2];
//         return median;
//     }
//     else{
//         median = (nums[size/2]+nums[(size/2)-1])/2.0;
//         return median;
//     }
// }

double findMedimedianortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums;
    nums.insert(nums.end(), nums1.begin(), nums1.end());
    nums.insert(nums.end(), nums2.begin(), nums2.end());
    sort(nums.begin(), nums.end());

    int st=0, end=nums.size()-1;
    while(st<=end){
        if(st == end){
            return nums[st];
        }
        if((end-st)==1){
            return ((nums[st]+nums[end])/2.0);
        }
        st++; end--;
    }
    return -1;
}

int main(){
    vector<int> num1 = {1,2};
    vector<int> num2 = {3,4};
    cout<<findMedimedianortedArrays(num1,num2);
    return 0;
}