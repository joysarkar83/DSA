#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    pair<int, int> maxData = {INT_MIN, -1}; // Value, Index
    queue<int> q;
    stack<int> stk;
    int n = nums.size(), maxVal = INT_MIN;
    
    // initial setup
    int i=0;
    for(; i<k; i++){
        q.push(nums[i]);
        if(stk.empty() || nums[i] >= stk.top()){
            stk.push(nums[i]);
        }
    }

    vector<int> res;
    for(; i<n; i++){
        if(maxData.second == i-k){

        }
    }
}

int main(){

    return 0;
}