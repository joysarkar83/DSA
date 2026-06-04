#include <iostream>
#include <queue>
using namespace std;

queue<int> interleave(queue<int>& q, int& size){
    queue<int> q2;
    for(int i=0; i<size/2; i++){
        q2.push(q.front());
        q.pop();
    }

    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
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

    int size = 10;
    interleave(q, size);

    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }

    return 0;
}