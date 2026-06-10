#include <iostream>
using namespace std;

struct MyListNode{
    int val;
    MyListNode* next;
    MyListNode(int val){
        this->val = val;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    MyListNode* head;
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        if(head == nullptr) return -1;

        int ctr = 0;
        MyListNode* ptr = head;
        while(ptr!=nullptr && ctr < index){
            ptr = ptr->next;
            ctr++;
        }
        if(ptr == nullptr) return -1;
        return ptr->val;
    }
    
    void addAtHead(int val) {
        MyListNode* newNode = new MyListNode(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        MyListNode* newNode = new MyListNode(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        MyListNode* ptr = head;
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }

        int ctr = 1;
        MyListNode* ptr = head;
        while(ptr!=nullptr && ctr < index){
            ptr = ptr->next;
            ctr++;
        }
        if(ptr == nullptr) return;
        MyListNode* newNode = new MyListNode(val);
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr) return;

        if(index == 0){
            MyListNode* toDel = head;
            head = head->next;
            delete toDel;
            return;
        }

        int ctr = 1;
        MyListNode* ptr = head;
        while(ptr!=nullptr && ctr < index){
            ptr = ptr->next;
            ctr++;
        }
        if(ptr == nullptr || ptr->next == nullptr) return;
        MyListNode* toDel = ptr->next;
        ptr->next = ptr->next->next;
        delete toDel;
    }
};

int main(){
    return 0;
}