#include <iostream>
using namespace std;

ListNode* middleNode(ListNode* head) {
    ListNode* slowPtr = head, *fastPtr = head;
    while(fastPtr!=NULL && fastPtr->next!=NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}

int main(){
    return 0;
}