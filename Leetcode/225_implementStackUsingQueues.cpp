#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;

    void push(int x) {
        q1.emplace(x);
    }
    
    int pop() {
        while(q1.size() > 1){
            q2.emplace(q1.front());
            q1.pop();
        }

        int top = q1.front();
        q1.pop();

        while(!q2.empty()){
            q1.emplace(q2.front());
            q2.pop();
        }
        return top;
    }
    
    int top() {
        while(q1.size() > 1){
            q2.emplace(q1.front());
            q1.pop();
        }
    
        int top = q1.front();
        q1.pop();
        q2.emplace(top);
    
        while(!q2.empty()){
            q1.emplace(q2.front());
            q2.pop();
        }
        return top;
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main(){

    return 0;
}