#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        next = nullptr;
    }
};


ListNode* reverseList(ListNode* head) {
    if(head == nullptr) return head;

    ListNode* prev = nullptr, * curr = head, * nxt = curr->next;
    while(prev->next != nullptr){
        curr->next = prev;
        prev = curr;
        curr = nxt;
        nxt = curr->next;
    }

    return prev;
}

int main(){

    return 0;
}