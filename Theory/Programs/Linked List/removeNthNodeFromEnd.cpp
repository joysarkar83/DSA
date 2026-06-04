#include <iostream>
using namespace std;

int getSize(){
    Node* ptr = head;
    int i = 0;
    while(ptr != NULL){
        ptr = ptr->next;
        i++;
    }
    return i;
}

void removeNth(int n){
    int size = getSize();

    if(n > size || n <= 0){
        return;
    }

    // Case 1: Deleting the head
    if(n == size){
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    // Case 2: Delete from middle or end
    Node* ptr = head;
    for(int i=0; i<size-n-1; i++){
        ptr = ptr->next;
    }

    Node* toDelete = ptr->next;
    ptr->next = ptr->next->next;
    toDelete->next = NULL;
    delete toDelete;
    return;
}

int main(){
        
    return 0;
}