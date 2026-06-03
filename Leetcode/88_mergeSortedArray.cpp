#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     for(int i=m; i<m+n; i++){
//         nums1[i] = nums2[i-m];
//     }
//     sort(nums1.begin(), nums1.end());
// }

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    sort(nums1.begin(), nums1.begin()+m);
    sort(nums2.begin(), nums2.end());
    vector<int> temp;

    int i=0, j=0;
    while(i<m && j<n){
        if(nums1[i] <= nums2[j]){
            temp.emplace_back(nums1[i]);
            i++;
        }else{
            temp.emplace_back(nums2[j]);
            j++;
        }
    }
    while(i<m){
        temp.emplace_back(nums1[i]);
        i++;
    }
    while(j<n){
        temp.emplace_back(nums2[j]);
        j++;
    }
    nums1 = temp;
}

int main(){

    return 0;
}