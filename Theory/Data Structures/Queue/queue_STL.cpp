#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
}

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    printQueue(q);

    cout<<"\n";
    q.pop();
    printQueue(q);

    return 0;
}