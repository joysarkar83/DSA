#include <iostream>
using namespace std;

ListNode *detectCycle(ListNode *head) {
    ListNode* slowPtr = head, *fastPtr = head;
    bool cycleExists = false;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;

        if(slowPtr == fastPtr){
            cycleExists = true;
            break;
        }
    }
    if(!cycleExists){
        return NULL;
    }

    if(fastPtr == head){
        return head;
    }

    slowPtr = head;
    while(fastPtr != slowPtr){
        fastPtr = fastPtr->next;
        slowPtr = slowPtr->next;
    }
    return slowPtr;
}

int main(){

    return 0;
}