#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int> nums, vector<vector<int>>& ans, vector<int> subset){
    if(nums.size() == 0){
        ans.push_back(subset);
        return;
    }

    vector<int> next(nums.begin()+1, nums.end());

    //Yes
    findSubsets(next, ans, subset.emplace_back(nums[0]));
    
    //No
    findSubsets(next, ans, subset);

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    findSubsets(nums, ans, {});
    return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> subs = subsets(nums);

    for(int i=0; i<subs.size(); i++){
        for(int j=0; j<subs[i].size(); j++){
            cout<<subs[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}