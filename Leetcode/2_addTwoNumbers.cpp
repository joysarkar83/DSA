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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(-1), *ptr = dummyHead;
    int carry = 0;
    while(l1 != nullptr && l2 != nullptr){
        int sum = l1->val + l2->val + carry;
        if(sum >= 10){
            carry = 1;
            sum -= 10;
        }else{
            carry = 0;
        }
        ListNode* newNode = new ListNode(sum);
        ptr->next = newNode;
        ptr = ptr->next;
        l1 = l1->next;
        l2 = l2->next;
    }

    while(l1 != nullptr){
        int sum = l1->val + carry;
        if(sum >= 10){
            carry = 1;
            sum -= 10;
        }else{
            carry = 0;
        }
        ListNode* newNode = new ListNode(sum);
        ptr->next = newNode;
        ptr = ptr->next;
        l1 = l1->next;     
    }

    while(l2 != nullptr){
        int sum = l2->val + carry;
        if(sum >= 10){
            carry = 1;
            sum -= 10;
        }else{
            carry = 0;
        }
        ListNode* newNode = new ListNode(sum);
        ptr->next = newNode;
        ptr = ptr->next;
        l2 = l2->next;     
    }
    
    if(carry != 0){
        ListNode* newNode = new ListNode(carry);
        ptr->next = newNode;
        ptr = ptr->next;
        carry = 0;
    }

    ListNode* toDel = dummyHead;
    dummyHead = dummyHead->next;
    delete toDel;
    return dummyHead;
}

int main(){

    return 0;
}