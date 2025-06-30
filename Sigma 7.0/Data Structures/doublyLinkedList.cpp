#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next,* prev;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class doublyLL{
public:
    Node* head, * tail;

    doublyLL(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        if(head == NULL){
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(val);
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        if(head == NULL){
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(val);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            return;
        }

        Node* ptr = head;
        head = head->next;
        ptr->next = NULL;
        head->prev = NULL;
        delete ptr;
    }

    void pop_back(){
        if(tail == NULL){
            return;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* ptr = tail;
        tail = tail->prev;
        tail->next = NULL;
        ptr->prev = NULL;
        delete ptr;
    }

    void printdll(){
        Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<" <=> ";
            ptr = ptr->next;
        }
        cout<<"NULL\n";
    }

    ~doublyLL(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    doublyLL dll;
    dll.push_back(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.push_front(2);
    dll.push_front(1);
    dll.printdll();
    dll.pop_back();
    dll.printdll();

    return 0;
}