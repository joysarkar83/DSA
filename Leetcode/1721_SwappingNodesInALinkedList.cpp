#include <iostream>
using namespace std;

long long int getSize(ListNode* head) {
    long long int count = 0;
    for (ListNode* ptr = head; ptr != NULL; ptr = ptr->next) {
        count++;
    }
    return count;
}

ListNode* swapNodes(ListNode* head, int k) {
    long long int sz = getSize(head);
    if(sz < 2) return head;

    int revVal = sz - k + 1;
    if(k == revVal) return head;

    // Creating all the pointers
    ListNode *xPrev = NULL, *xPtr = NULL, *xNext = NULL;
    ListNode *yPrev = NULL, *yPtr = NULL, *yNext = NULL;

    // Placing all the pointers
    ListNode *curr = head, *prev = NULL;
    for (int i = 1; i <= sz; i++, prev = curr, curr = curr->next) {
        if (i == k) {
            xPrev = prev;
            xPtr = curr;
            xNext = xPtr->next;
        }
        if (i == revVal) {
            yPrev = prev;
            yPtr = curr;
            yNext = yPtr->next;
        }
    }

    // Main logic
    if (xPtr->next == yPtr) { // Adjacent: x before y
        if (xPrev != NULL) xPrev->next = yPtr;
        else head = yPtr;

        xPtr->next = yPtr->next;
        yPtr->next = xPtr;
    } 
    else if (yPtr->next == xPtr) { // Adjacent: y before x
        if (yPrev != NULL) yPrev->next = xPtr;
        else head = xPtr;

        yPtr->next = xPtr->next;
        xPtr->next = yPtr;
    } 
    else {
        // Non-adjacent swap
        if (xPrev != NULL) xPrev->next = yPtr;
        else head = yPtr;

        if (yPrev != NULL) yPrev->next = xPtr;
        else head = xPtr;

        xPtr->next = yPtr->next;
        yPtr->next = xNext;
    }

    return head;
}

int main(){

    return 0;
}