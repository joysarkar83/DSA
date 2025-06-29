#include <iostream>
using namespace std;

void reverse(){
    Node* prev = NULL;
    Node* curr = head;
    tail = head;
    while(curr != NULL){
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

int main(){
        
    return 0;
}