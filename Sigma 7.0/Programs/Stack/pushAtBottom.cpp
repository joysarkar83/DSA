#include <iostream>
#include <vector>
using namespace std;

template<class type>
class Stack{
public:
    vector<type> stk;
    int topIdx;

    Stack(){
        topIdx = -1;
    }

    void push(type val){
        stk.push_back(val);
        topIdx++;
    }

    void pop(){
        if(topIdx == -1){
            return;
        }
        stk.pop_back();
        topIdx--;
    }

    type top(){
        if(topIdx == -1){
            return type();
        }
        // cout<<stk[topIdx]<<"\n";
        return stk[topIdx];
    }

    int size(){
        return topIdx+1;
    }

    void printStack(){
        for(int i = topIdx; i>=0; i--){
            cout<<stk[i]<<"\n";
        }
    }

    
    bool empty(){
        if(topIdx == -1){
            return true;
        }
        return false;
    }
};

template<class type>
void pushAtBottom(Stack<type> &stk, type val){
    if(stk.size() == 0){
        stk.push(val);
        return;
    }
    type topVal = stk.top();
    stk.pop();
    pushAtBottom(stk, val);
    stk.push(topVal);
}

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    pushAtBottom(s, 100);

    s.printStack();
    return 0;
}