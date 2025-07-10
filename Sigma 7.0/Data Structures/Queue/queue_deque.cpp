#include <iostream>
#include <deque>
using namespace std;

class queue{
    deque<int> dq;

public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        if(!dq.empty()){
            dq.pop_front();
        }
    }

    int front(){
        if(!dq.empty()){
            return dq.front();
        }
    }

    bool empty(){
        return dq.empty();
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }

    return 0;
}