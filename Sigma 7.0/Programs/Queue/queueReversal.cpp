#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> reverseQueue(queue<int>& q){
    stack<int> stk;
    while(!q.empty()){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }
    return q;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    reverseQueue(q);

    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }

    return 0;
}