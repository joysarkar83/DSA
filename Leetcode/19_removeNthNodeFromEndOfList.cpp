#include <iostream>
using namespace std;

int calculateSize(ListNode* head){
    ListNode* ptr = head;
    int n = 0; 
    while(ptr != NULL){
        ptr = ptr->next;
        n++;
    }
    return n;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int sz = calculateSize(head);

    if(sz == 1){
        delete head;
        head = NULL;
        return head;
    }

    if(n == sz){
        ListNode* ptr = head->next;
        head->next = NULL;
        delete head;
        head = ptr;
        return head;
    }

    ListNode* ptr = head;
    for(int i=1; i<sz - n; i++){
        ptr = ptr->next;
    }
    ListNode* delNode = ptr->next;
    ptr->next = delNode->next;
    delNode->next = NULL;
    delete delNode;
    return head;
}

int main(){

    return 0;
}