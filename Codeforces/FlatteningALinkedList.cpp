#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next, * bottom;
    ListNode(int val){
        this->val = val;
        next = bottom = nullptr;
    }
};

ListNode* merge(ListNode* head1, ListNode* head2){
    ListNode* dummyHead = new ListNode(-1), * ptr = dummyHead;
    while(head1!=nullptr && head2!=nullptr){
        if(head1->val <= head2->val){
            ptr->bottom = head1;
            ptr = ptr->bottom;
            head1 = head1->bottom;
        }else{
            ptr->bottom = head2;
            ptr = ptr->bottom;
            head2 = head2->bottom;
        }
    }
    while(head1!=nullptr){
        ptr->bottom = head1;
        ptr = ptr->bottom;
        head1 = head1->bottom;
    }
    while(head2!=nullptr){
        ptr->bottom = head2;
        ptr = ptr->bottom;
        head2 = head2->bottom;
    }
    ptr = dummyHead;
    dummyHead = dummyHead->bottom;
    delete ptr;
    return dummyHead;
}

ListNode *flatten(ListNode *head) {
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode* nextBranch = flatten(head->next);
    return merge(head, nextBranch);
}

int main(){

    return 0;
}