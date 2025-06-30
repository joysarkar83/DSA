#include <iostream>
using namespace std;

void reorderList(ListNode* head) {
    // Get the mid index
    ListNode *slowPtr = head, *fastPtr = head, *prev = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    // Break into halves
    if(prev!=NULL){
        prev->next = NULL;
    }

    // Rotate second half
    ListNode *pre = NULL, *cur = slowPtr;
    while (cur != NULL) {
        ListNode* nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }

    // Getting access to the final two linked lists
    ListNode *leftHead = head, *rightHead = pre;

    // Making copies for traversal
    ListNode *left = leftHead, *right = rightHead;

    // Alternate Merging
    ListNode* tail;
    while (left != NULL && right != NULL) {
        ListNode *leftNext = left->next, *rightNext = right->next;
        left->next = right;
        right->next = leftNext;
        left = leftNext;
        tail = right;
        right = rightNext;
    }
    tail->next = right;
    tail = right;
}

int main(){
    return 0;
}