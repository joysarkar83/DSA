#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int>& curr, int idx, int& k, vector<int>& data, vector<vector<int>>& res){
    if(curr.size() == k){
        res.emplace_back(curr);
        return;
    }
    if(idx == data.size()){
        return;
    }
    curr.emplace_back(data[idx]);
    helper(curr, idx+1, k, data, res);
    curr.pop_back();
    helper(curr, idx + 1, k, data, res);
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> data;
    for(int i=1; i<=n; i++){
        data.emplace_back(i);
    }
    vector<int> curr;
    helper(curr, 0, k, data, res);
    return res;
}

int main(){

    return 0;
}