#include <iostream>
using namespace std;

class myStack {
private:
    int* arr;
    int lastIdx, size;

  public:
    myStack(int n) {
        size = n;
        lastIdx = -1;
        arr = new int[n];
    }

    bool isEmpty() {
        if(lastIdx == -1){
            return true;
        }
        return false;
    }

    bool isFull() {
        if(lastIdx == size - 1){
            return true;
        }
        return false;
    }

    void push(int x) {
        if(!this->isFull()){
            arr[++lastIdx] = x;
        }
    }
    
    void pop() {
        if(!this->isEmpty()){
            lastIdx--;
        }
    }

    int peek() {
        if(isEmpty()) {
            return -1;
        }
        return arr[lastIdx];
    }
};

int main(){

    return 0;
}