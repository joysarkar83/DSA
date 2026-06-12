#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* prev;
    Node* next;
    Node* child;
    Node(int val){
        this->val;
        next = prev = child = nullptr;
    }
};



Node* flatten(Node* head) {
    if(head == nullptr){
        return head;
    }
    Node* ptr = head;

    while(ptr!=nullptr && ptr->child == nullptr){
        ptr = ptr->next;
    }
    return flatten(ptr->child);
}

int main(){
    return 0;
}