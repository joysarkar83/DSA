#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class Deque{
    private:
    Node* head; Node* tail;

    public:
    Deque(){
        head = tail = NULL;
    }
    
    void push_front(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* ptr = head;
        while(ptr->next != tail){
            ptr = ptr->next;
        }
        tail = ptr;
        ptr = ptr->next;
        tail->next = NULL;
        delete ptr;
    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* ptr = head;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
    }

    int front(){
        if(head == NULL){
            return -1;
        }
        return head->data;
    }
    
    int back(){
        if(head == NULL){
            return -1;
        }
        return tail->data;
    }

    bool empty(){
        return head==NULL;
    }

    ~Deque(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

};

int main(){
    Deque dq;

    dq.push_back(4);
    dq.push_back(5);
    dq.push_front(3);
    dq.push_front(2);
    dq.push_front(1);

    dq.pop_front();
    dq.pop_back();
    cout<<dq.back()<<"\n\n";

    while(!dq.empty()){
        cout<<dq.front()<<"\n";
        dq.pop_front();
    }



    return 0;
}