#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            next = NULL;
        }

        ~Node(){
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    int getSize(){
        if(head == NULL){
            return 0;
        }

        Node* ptr = this->head;
        int sz = 0;
        while(ptr!=NULL){
            sz+=1;
            ptr = ptr->next;
        }
        return sz;
    }
    
    int get(int index) {
        int sz = this->getSize();
        if(index < 0 || index >= sz){
            return -1;
        }
    
        Node* ptr = head;
        for(int i=0; i<index; i++){
            ptr = ptr->next;
        }
        return ptr->val;
    }
    
    void addAtHead(int val) {
        if(head == NULL){
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }
    }
    
    void addAtTail(int val) {
        if(head == NULL){
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(val);
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        int sz = this->getSize();
        if(index < 0 || index > sz){
            return;
        }

        if(index == 0){
            addAtHead(val);
            return;
        }

        if(index == sz){
            addAtTail(val);
            return;
        }
        
        Node* ptr = head;
        for(int i=1; i<index; i++){
            ptr = ptr->next;
        }
        
        Node* newNode = new Node(val);
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        int sz = this->getSize();
        if(index < 0 || index >= sz){
            return;
        }

        if(index == 0){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;

            if(head == NULL){
                tail = NULL;
            }
            return;
        }
        
        Node* ptr = head;
        for(int i=1; i<index; i++){
            ptr = ptr->next;
        }

        Node* temp = ptr->next;
        ptr->next = temp->next;

        if(temp == tail){
            tail = ptr;
        }

        temp->next = NULL;
        delete temp;
    }

    void printll(){
        Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->val<<" -> ";
            ptr = ptr->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    MyLinkedList ll;
    ll.addAtHead(3);
    ll.addAtHead(2);
    ll.addAtHead(1);
    ll.addAtTail(5);
    ll.addAtIndex(0, 4);
    ll.printll();

    return 0;
}