#include <iostream>
#include <deque>
using namespace std;

class stack{
    deque<int> dq;

public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        if(!dq.empty()){
            dq.pop_back();
        }
    }

    int top(){
        if(!dq.empty()){
            return dq.back();
        }
    }

    bool empty(){
        return dq.empty();
    }
};

int main(){
    stack q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.top()<<"\n";
        q.pop();
    }

    return 0;
}