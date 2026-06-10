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

ListNode* middleNode(ListNode* head) {
    if(head == nullptr) return head;

    ListNode* slowPtr = head,* fastPtr = head;
    while(fastPtr != nullptr && fastPtr->next != nullptr){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}

int main(){
    return 0;
}