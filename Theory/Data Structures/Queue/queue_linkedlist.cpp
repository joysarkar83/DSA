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

class queue{
private:
    Node* head, *tail;

public:
    queue(){
        head = NULL;
        tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    int front(){
        if(head == NULL){
            return -1;
        }
        else{
            return head->data;
        }
    }

    void pop(){
        if(head == NULL){
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    bool empty(){
        return (head==NULL);
    }

    void printQueue(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }

    ~queue(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    cout<<"Front: "<<q.front()<<"\n";
    q.pop();
    cout<<"Front: "<<q.front()<<"\n";
    q.printQueue();
    cout<<q.empty()<<"\n";

    return 0;
}