#include <iostream>
using namespace std;

ListNode* deleteMiddle(ListNode* head) {
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    ListNode* slowPtr = head, * fastPtr = head, *prev = NULL;
    while(fastPtr!=NULL && fastPtr->next!=NULL){
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    prev->next = slowPtr->next;
    slowPtr->next = NULL;
    return head;
}

int main(){
    return 0;
}