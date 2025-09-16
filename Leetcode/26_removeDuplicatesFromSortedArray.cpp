#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int preIdx = 0, postIdx = 0, n = nums.size();
    for(preIdx; preIdx<n; preIdx++){
        if(nums[preIdx] != nums[postIdx]){
            nums[++postIdx] = nums[preIdx];
        }
    }
    return postIdx + 1;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,3,4,7,8};

    cout<<removeDuplicates(arr)<<"\n";

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}