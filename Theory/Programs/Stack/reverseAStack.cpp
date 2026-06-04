#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &stk, int val){
    if(stk.empty()){
        stk.push(val);
        return;
    }
    int topVal = stk.top();
    stk.pop();
    pushAtBottom(stk, val);
    stk.push(topVal);
}

void reverseStack(stack<int>& stk){
    if(stk.empty()){
        return;
    }
    int topVal = stk.top();
    stk.pop();
    reverseStack(stk);
    pushAtBottom(stk, topVal);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    cout<<"\n";


    return 0;
}