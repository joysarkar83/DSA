#include <iostream>
using namespace std;

ListNode* reverseList(ListNode* head) {
    if(head == NULL){
        return NULL;
    }

    ListNode* prev=NULL, *curr=head;
    while(curr != NULL){
        ListNode* nxt=curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
    return head;
}

int main(){

    return 0;
}