#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void combinationSum2Helper(vector<int>& currCombo, int& currSum, set<vector<int>>& resSet, int idx, int& n, vector<int>& candidates, int& target){
    if(currSum == target){
        resSet.emplace(currCombo);
        return;
    }

    for(int i=idx; i<n; i++){
        int num = candidates[i];
        if(currSum+num<=target){
            if(i > idx && candidates[i] == candidates[i-1]){
                continue;
            }
            currSum += num;
            currCombo.emplace_back(num);
            combinationSum2Helper(currCombo, currSum, resSet, i+1, n, candidates, target);
            currSum -= num;
            currCombo.pop_back();
        }
    }
    return;
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int& target) {
    int n = candidates.size();

    sort(candidates.begin(), candidates.end());
    set<vector<int>> resSet;
    int currSum = 0;
    vector<int> currCombo;
    combinationSum2Helper(currCombo, currSum, resSet, 0, n, candidates, target);
    
    vector<vector<int>> res(resSet.begin(), resSet.end());
    return res;
}

int main(){


    return 0;
}