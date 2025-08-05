#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    vector<int> res;
    
    int lastIndex = 0;
    for(int i=0; i<n1; i++){
        for(int j=lastIndex; j<n2; j++){
            if(nums1[i] == nums2[j]){
                res.emplace_back(nums1[i]);
                lastIndex = j+1;
                break;
            }
        }
    }
    return res;
}

int main(){
    vector<int> nums1 = {4,9,9,9,9,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> res = intersect(nums1, nums2);

    return 0;
}