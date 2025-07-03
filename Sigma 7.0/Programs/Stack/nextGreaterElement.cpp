#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> raw){
    int n = raw.size();
    stack<int> stk;
    vector<int> ans(n, 0);

    for(int i = n-1; i>=0; i--){
        while(!stk.empty() && raw[i]>=stk.top()){
            stk.pop();
        }

        if(!stk.empty()){
            ans[i] = stk.top();
        }
        else{
            ans[i] = -1;
        }
        stk.push(raw[i]);
    }
    return ans;
}

int main(){
    vector<int> raw = {6,8,0,1,3};

    vector<int> ans = nextGreaterElement(raw);

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}