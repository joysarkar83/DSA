#include <iostream>
#include <vector>
#include <climits>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> minIdx;
    vector<int> stackVal;

    MinStack() {
        stackVal = {};
    }
    
    void push(int val) {
        if(minIdx.empty()){
            minIdx.push(stackVal.size());
        }
        else if(val <= stackVal[minIdx.top()]){
            minIdx.push(stackVal.size());
        }
        stackVal.emplace_back(val);
    }
    
    void pop() {
        if(stackVal.empty()) return;
        if(stackVal.size()-1 == minIdx.top()){
            minIdx.pop();
        }
        stackVal.pop_back();
    }
    
    int top() {
        if(stackVal.empty()) return -1;
        return stackVal.back();
    }
    
    int getMin() {
        if(minIdx.empty()) return -1;

        return stackVal[minIdx.top()];
    }
};

int main(){

    return 0;
}