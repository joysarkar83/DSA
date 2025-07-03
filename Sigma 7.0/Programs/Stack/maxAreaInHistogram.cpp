#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int maxAreaInHistogram(vector<int>& data){
    int n = data.size();
    stack<int> stk;
    vector<int> leftMinVector(n);
    vector<int> rightMinVector(n);
    
    //Left Min Vector
    for(int i=0; i<n; i++){
        while(!stk.empty() && data[i]<=data[stk.top()]){
            stk.pop();
        }
        
        if(stk.empty()){
            leftMinVector[i] = -1;
        }else{
            leftMinVector[i] = stk.top();
        }
        stk.push(i);
    }

    //Renew the stack
    while(!stk.empty()){
        stk.pop();
    }

    //Right Min Vector
    for(int i=n-1; i>=0; i--){
        while(!stk.empty() && data[i]<=data[stk.top()]){
            stk.pop();
        }
        
        if(stk.empty()){
            rightMinVector[i] = n;
        }else{
            rightMinVector[i] = stk.top();
        }
        stk.push(i);
    }
    
    //Final Calculation
    vector<int> maxAreaVector(n);
    for(int i=0; i<n; i++){
        maxAreaVector[i] = data[i] * (rightMinVector[i] - leftMinVector[i] - 1);
    }
    
    sort(maxAreaVector.begin(), maxAreaVector.end());
    return maxAreaVector[n-1];
}

int main(){
    vector<int> raw = {2,1,5,6,2,3};

    cout<<maxAreaInHistogram(raw);

    return 0;
}