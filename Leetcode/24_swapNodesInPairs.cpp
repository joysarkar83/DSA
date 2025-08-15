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

void printLL(ListNode* head){
    ListNode* ptr = head;
    while(ptr != NULL){
        cout<<ptr->val<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL\n";
}

ListNode* swapPairs(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    ListNode *curr = head, *prev1 = NULL, *prev2 = NULL;
    head = head->next;
    while(curr != NULL && curr->next != NULL){
        prev2 = curr;
        prev1 = prev2->next;
        curr = prev1->next;
        prev1->next = prev2;

        if(curr!=NULL && curr->next!=NULL) prev2->next = curr->next;
        else prev2->next = curr;

        printLL(head);
    }

    return head;
}

int main(){

    return 0;
}