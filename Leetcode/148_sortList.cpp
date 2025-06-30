#include <iostream>
using namespace std;

ListNode* merge(ListNode* leftHead, ListNode* rightHead) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    ListNode *leftPtr = leftHead, *rightPtr = rightHead;

    while (leftPtr != NULL && rightPtr != NULL) {
        if (leftPtr->val <= rightPtr->val) {
            tail->next = leftPtr;
            tail = tail->next;
            leftPtr = leftPtr->next;
        } else {
            tail->next = rightPtr;
            tail = tail->next;
            rightPtr = rightPtr->next;
        }
    }

    while (leftPtr != NULL) {
        tail->next = leftPtr;
        tail = tail->next;
        leftPtr = leftPtr->next;
    }

    while (rightPtr != NULL) {
        tail->next = rightPtr;
        tail = tail->next;
        rightPtr = rightPtr->next;
    }

    ListNode* sortedHead = dummy.next;
    dummy.next = NULL;
    return sortedHead;
}

ListNode* sortList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode *slowPtr = head, *fastPtr = head, *prev = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    if (prev != NULL) {
        prev->next = NULL;
    }

    ListNode* leftSorted = sortList(head);
    ListNode* rightSorted = sortList(slowPtr);

    return merge(leftSorted, rightSorted);
}

int main(){
    return 0;
}