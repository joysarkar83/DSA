#include <iostream>
using namespace std;

template<class type>
class Node{
public:
    type data;
    Node* next;

    Node(type data){
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

template<class type>
class stack{
private:

    Node<type>* head;
    Node<type>* tail;

public:

    void push(type data){
        Node<type>* newNode = new Node<type>(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        if(head == NULL){
            return;
        }
        Node<type>* ptr = head->next;
        head->next = NULL;
        delete head;
        head = ptr;
    }

    void top(){
        if(head == NULL){
            return;
        }
        cout<<head->data<<"\n";
    }

    ~stack(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    stack<int> stk;
    stk.push(5);
    stk.push(4);
    stk.push(3);
    stk.push(2);
    stk.push(1);

    stk.pop();
    stk.top();

    return 0;
}