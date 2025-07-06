#include <iostream>
using namespace std;

class queue{
public:
    int* arr;
    int f, r, capacity, currSize;

    queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = r = -1;
    }

    void push(int val){
        if(currSize == capacity){
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        if (f == -1) f = r;
        currSize++;
    }

    void pop(){
        if(currSize == 0){
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
        if (currSize == 0){
            f = r = -1;
        }
    }

    int front(){
        if(currSize == 0){
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return (currSize == 0);
    }

    void printQueue(){
        int count = 0;
        int ptr = f;
        while (count < currSize) {
            cout << arr[ptr] << " ";
            ptr = (ptr + 1) % capacity;
            count++;
        }
        cout << "\n";
    }

    ~queue(){
        delete[] arr;
    }
};

int main(){
    queue q(7);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    q.printQueue();
    return 0;
}