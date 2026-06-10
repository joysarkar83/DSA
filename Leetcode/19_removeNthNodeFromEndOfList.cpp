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

int getSize(ListNode* head){
    int n = 0;
    ListNode* ptr = head;
    while(ptr != nullptr){
        ptr = ptr->next;
    }
    return n;
}

ListNode* removeNthFromEnd(ListNode* head, int k) {
    if(head == nullptr) return head;
    int n = getSize(head);

    if(k > n){
        return head;
    }else if(n == k){
        ListNode* toDel = head;
        head = head->next;
        delete toDel;
        return head;
    }
    k = n-k-1;

    ListNode* itr = head;
    while(k--){
        itr = itr->next;
    }
    ListNode* toDel = itr->next;
    itr->next = toDel->next;
    delete toDel;
    
    return head;
}


int main(){

    return 0;
}