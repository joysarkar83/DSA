#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size(), nQ = queries.size();
    int count = 0, posCount = 0;

    for(int i=0; i<n; i++){
        if(nums[i]>0) posCount++;
    }

    if(posCount == 0) return 0;

    for(int i=0; i<nQ; i++){
        count++;
        int low = queries[i][0], high = queries[i][1], val = queries[i][2];
        for(low; low<=high; low++){
            if(nums[low] > 0){
                nums[low] -= val;
                if(nums[low] <= 0) posCount--;
                if(posCount == 0) return count;
            }
        }
    }
    return -1;
}

int main(){

    return 0;
}