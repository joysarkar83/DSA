#include <iostream>
using namespace std;

bool hasCycle(ListNode *head) {
    ListNode* slowPtr = head, *fastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            return true;
        }
    }
    return false;
}

int main(){

    return 0;
}