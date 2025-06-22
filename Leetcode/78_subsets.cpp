#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int>& nums, int index, vector<vector<int>>& ans, vector<int>& subset){
    if(index == nums.size()){
        ans.push_back(subset);
        return;
    }
    
    //Yes
    subset.emplace_back(nums[index]);
    findSubsets(nums, index+1, ans, subset);
    
    //No
    subset.pop_back();
    findSubsets(nums, index+1, ans, subset);

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> subset;
    findSubsets(nums, 0, ans, subset);
    return ans;
}

int main(){
    // vector<int> nums = {1,2,3};
    vector<int> nums = {0,1};
    vector<vector<int>> subs = subsets(nums);

    for(int i=0; i<subs.size(); i++){
        for(int j=0; j<subs[i].size(); j++){
            cout<<subs[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}