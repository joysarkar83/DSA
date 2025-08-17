#include <iostream>
#include <string>
#include <algorithm>
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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ptr1 = l1, *ptr2 = l2;
    ListNode* newHead = new ListNode(0);

    while(ptr1!=NULL && ptr2!=NULL){
        ListNode* newNode = new ListNode(ptr1->val + ptr2->val);
        newHead->next = newNode;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

}

int main(){

    return 0;
}