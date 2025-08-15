#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};

void reverseLL(ListNode* head, ListNode* tail){
    ListNode *curr = head, *prev = tail->next;

    while(prev != tail){
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == NULL || k==1) return head;

    ListNode* st = NULL, *end = NULL;
    ListNode* prevTail = NULL;
    ListNode *ptr = head;
    ListNode *newHead = head;

    int count = 1;
    while(count<k && ptr!=NULL){
        ptr = ptr->next;
        count++;
    }
    if(ptr == NULL) return head;

    newHead = ptr;
    ptr = head;
    count = 1;

    while(ptr != NULL){
        if(count == 1){
            st = ptr;
        }
        if(count == k){
            end = ptr;
            ptr = ptr->next;
            reverseLL(st, end);
            if(prevTail != NULL) prevTail->next = end;
            prevTail = st;
            count = 0;
        }
        else{
            ptr = ptr->next;
        }
        count++;
    }
    if(count != 1 && prevTail != NULL){
        prevTail->next = st;
    }
    return newHead;
}

int main(){

    return 0;
}