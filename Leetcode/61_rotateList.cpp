#include <iostream>
using namespace std;

int getSize(ListNode* head){
    int count = 0;
    ListNode* ptr = head;

    while(ptr != NULL){
        ptr = ptr->next;
        count ++;
    }
    return count;
}

ListNode* getSecondLast(ListNode* head){
    ListNode* ptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    return ptr;
}

ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || head->next == NULL) return head;

    int n = getSize(head);
    k = k % n;

    while(k != 0){
        ListNode* secondLast = getSecondLast(head), * last = secondLast->next;

        last->next = head;
        head = last;
        secondLast->next = NULL;

        k--;
    }

    return head;
}

//Brute Force
// ListNode* rotateRight(ListNode* head, int k) {
//     if(head == NULL || head->next == NULL) return head;
//     while(k != 0){
//         ListNode* ptr = head, * ptrPrev = NULL;
//         while(ptr->next != NULL){
//             ptrPrev = ptr;
//             ptr = ptr->next;
//         }
//         ptr->next = head;
//         ptrPrev->next = NULL;
//         head = ptr;

//         k--;
//     }
//     return head;
// }

int main(){

    return 0;
}