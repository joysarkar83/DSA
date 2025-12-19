#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void combinationSumHelper(int& currSum, vector<int>& selected, int idx,
                          vector<int>& candidates, int& target,
                          set<vector<int>>& resSet) {
    if (currSum == target) {
        resSet.emplace(selected);
        return;
    }

    for (int i = idx; i < candidates.size(); i++) {
        if (currSum + candidates[i] <= target) {
            currSum += candidates[i];
            selected.emplace_back(candidates[i]);
            combinationSumHelper(currSum, selected, i, candidates, target, resSet);
            currSum -= candidates[i];
            selected.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int& target) {
    set<vector<int>> resSet;
    int currSum = 0;
    vector<int> selected;

    sort(candidates.begin(), candidates.end());

    combinationSumHelper(currSum, selected, 0, candidates, target, resSet);

    vector<vector<int>> res(resSet.begin(), resSet.end());
    return res;
}

int main(){
    int target = 7;
    vector<int> vect = {2,3,6,7};

    vector<vector<int>> combos = combinationSum(vect, target);
    for(auto vec:combos){
        for(auto i:vec){
            cout<<i<<' ';
        }
        cout<<'\n';
    }

    return 0;
}