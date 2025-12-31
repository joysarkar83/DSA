#include <iostream>
#include <vector>
using namespace std;

// Optimised

int totalHammingDistance(vector<int>& nums) {
    int n = nums.size();
    int res = 0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int xorVal = nums[i] ^ nums[j];
            res += __builtin_popcount(xorVal);
        }
    }
    return res;
}

// vector<vector<char>> getBinaryValues(vector<int>& nums){
//     vector<vector<char>> res;
//     for(int i:nums){
//         vector<char> chars;
//         while(i>0){
//             if(i % 2 == 0){
//                 chars.emplace_back('0');
//             }
//             else{
//                 chars.emplace_back('1');
//             }
//             i/=2;
//         }
//         res.emplace_back(chars);
//     }
//     return res;
// }

// int getHammingDist(vector<char>& val1, vector<char>& val2){
//     int res = 0, idx1 = min(val1.size(), val2.size()), idx2 = max(val1.size(), val2.size()), i=0;
//     for(; i<idx1; i++){
//         if(val1[i] != val2[i]){
//             res++;
//         }
//     }
//     if(val1.size() == idx2){
//         for(; i<idx2; i++){
//             if(val1[i] == '1'){
//                 res++;
//             }
//         }
//     }
//     else if(val2.size() == idx2){
//         for(; i<idx2; i++){
//             if(val2[i] == '1'){
//                 res++;
//             }
//         }
//     }
//     return res;
// }

// int totalHammingDistance(vector<int>& nums) {
//     int n = nums.size();
//     int res = 0;
//     vector<vector<char>> nums_bin = getBinaryValues(nums);

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             res += getHammingDist(nums_bin[i], nums_bin[j]);
//         }
//     }
//     return res;
// }

int main(){

    return 0;
}