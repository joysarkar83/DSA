//needs correction

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printNextPermutation(vector<int>& nums, vector<int> copy, vector<vector<int>>& allPermutations){
    sort(allPermutations.begin(), allPermutations.end());
    int n = allPermutations.size();
    for(int i=0; i<n; i++){
        if(copy == allPermutations[i]){
            if(i==n-1){
                nums = allPermutations[0];
            }
            else{
                nums = allPermutations[i+1];
            }
            return;
        }
    }
}

void getAllPermutations(vector<int>& nums, vector<vector<int>>& allPermutations, vector<int> currPermutation){
    int n = nums.size();

    if(n == 0){
        allPermutations.push_back(currPermutation);
        return;
    }

    for(int i=0; i<n; i++){
        vector<int> next;

        for(int j=0; j<n; j++){
            if(j != i){
                next.push_back(nums[j]);
            }
        }

        currPermutation.push_back(nums[i]);

        getAllPermutations(next, allPermutations, currPermutation);

        currPermutation.pop_back();
    }
}

void nextPermutation(vector<int>& nums) {
    vector<int> copy(nums);
    vector<vector<int>> allPermutations;
    getAllPermutations(nums, allPermutations, {});
    printNextPermutation(nums, copy, allPermutations);
}

int main(){
    vector<int> nums = {1,5,1};

    nextPermutation(nums);

    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}