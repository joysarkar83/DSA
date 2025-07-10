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

    void top(){
        if(topIdx == -1){
            return;
        }
        cout<<stk[topIdx]<<"\n";
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

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.top();
    s.pop();
    s.top();
    cout<<s.size();

    return 0;
}