#include <iostream>
using namespace std;

bool isCycle(Node* head){
    Node* slowPtr = head, *fastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            return true;
        }
    }
    return false;
}

int main(){
        
    return 0;
}