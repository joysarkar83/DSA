#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Brute Force
// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     vector<vector<int>> triplets;
//     for(int i=0; i<n-2; i++){
//         for(int j=i+1; j<n-1; j++){
//             for(int k=j+1; k<n; k++){
//                 if(nums[i]+nums[j]==nums[k]*(-1) && i!=j && j!=k && k!=i){
//                     vector<int> triple;
//                     triple.push_back(nums[i]);
//                     triple.push_back(nums[j]);
//                     triple.push_back(nums[k]);
//                     sort(triple.begin(), triple.end());
//                     bool present = false;
//                     for(int d=0; d<triplets.size(); d++){
//                         if(triplets[d] == triple){
//                             present = true;
//                             break;
//                         }
//                     }
//                     if(!present){
//                         triplets.push_back(triple);
//                     }
//                 }
//             }
//         }
//     }
//     return triplets;
// }


//Optimised
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> triplets;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = nums.size() - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                triplets.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for left and right
                while (left < right && nums[left] == nums[left + 1]){
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]){
                    right--;
                }

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return triplets;
}




int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};

    threeSum(nums);

    return 0;
}