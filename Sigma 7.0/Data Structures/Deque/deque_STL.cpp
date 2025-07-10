#include <iostream>
#include <deque>
using namespace std;

/*
Deque is like a stack/queue in which both front and back can be accessed!
*/

int main(){
    deque<int> dq;
    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(4);

    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    
    dq.pop_front();
    dq.pop_back();

    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    
    return 0;
}