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

ListNode* mergeTwoLists(ListNode* itr1, ListNode* itr2) {
    ListNode* ptr = nullptr, * newHead = nullptr;

    while(itr1 != nullptr && itr2 != nullptr){
        ListNode* newNode = new ListNode(-1);
        if(itr1->val <= itr2->val){
            newNode->val = itr1->val;
            itr1 = itr1->next;
        }else{
            newNode->val = itr2->val;
            itr2 = itr2->next;
        }
        
        if(newHead == nullptr){
            newHead = newNode;
            ptr = newHead;
        }else{
            ptr->next = newNode;
            ptr = newNode;
        }
    }
    
    while(itr1 != nullptr){
        ListNode* newNode = new ListNode(itr1->val);
        itr1 = itr1->next;
        
        if(newHead == nullptr){
            newHead = newNode;
            ptr = newHead;
        }else{
            ptr->next = newNode;
            ptr = newNode;
        }
    }
    
    while(itr2 != nullptr){
        ListNode* newNode = new ListNode(itr2->val);
        itr2 = itr2->next;
        
        if(newHead == nullptr){
            newHead = newNode;
            ptr = newHead;
        }else{
            ptr->next = newNode;
            ptr = newNode;
        }
    }

    return newHead;
}

int main(){

    return 0;
}