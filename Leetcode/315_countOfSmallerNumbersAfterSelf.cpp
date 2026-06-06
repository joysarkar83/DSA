#include <bits/stdc++.h>
using namespace std;

void conquer(int lt, int midIdx, int rt, vector<pair<int, int>>& nums, vector<int>& res){
    vector<pair<int, int>> temp;
    int i = lt, j = midIdx + 1;
    
    while(i <= midIdx && j <= rt) {
        if(nums[i].first <= nums[j].first) {
            res[nums[i].second] += (j - (midIdx + 1));
            temp.emplace_back(nums[i++]);
        } else {
            temp.emplace_back(nums[j++]);
        }
    }
    
    while(i <= midIdx) {
        res[nums[i].second] += (j - (midIdx + 1));
        temp.emplace_back(nums[i++]);
    }
    while(j<=rt){
        temp.emplace_back(nums[j++]);
    }

    for(int itr=0, i=lt; i<=rt; i++, itr++){
        nums[i] = temp[itr];
    }
}

void divide(int lt, int rt, vector<pair<int, int>>& nums, vector<int>& res){
    if(lt >= rt) return;

    int midIdx = lt + (rt - lt)/2;
    divide(lt, midIdx, nums, res);
    divide(midIdx+1, rt, nums, res);

    conquer(lt, midIdx, rt, nums, res);
}

vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 0);
    vector<pair<int, int>> idxs;
    for(int i=0; i<n; i++){
        idxs.emplace_back(nums[i], i);
    }
    divide(0, n-1, idxs, res);
    return res;
}

int main(){

    return 0;
}