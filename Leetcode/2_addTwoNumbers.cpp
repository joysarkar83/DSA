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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;

    ListNode* newHead = new ListNode(0);
    ListNode* ptr = newHead;

    ListNode* ptr1=l1, *ptr2=l2;
    while(ptr1 != NULL || ptr2 != NULL){
        int sum = 0;
        if(ptr1 != NULL){
            sum += ptr1->val;
            ptr1 = ptr1->next;
        }
        if(ptr2 != NULL){
            sum += ptr2->val;
            ptr2 = ptr2->next;
        }
        sum += carry;
        carry = 0;
        if (sum / 10 != 0) {
            carry = sum / 10;
            sum %= 10;
        }

        ListNode* currNode = new ListNode(sum);

        ptr->next = currNode;
        ptr = currNode;
    }
    
    if(carry!=0){
        ListNode* currNode = new ListNode(carry);
        ptr->next = currNode;
    }
    
    return newHead->next;
}

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     int carry = 0;

//     ListNode* newHead = new ListNode(0);
//     ListNode* ptr = newHead;

//     ListNode* ptr1=l1, *ptr2=l2;
//     while(ptr1 != NULL && ptr2 != NULL){
//         int sum = ptr1->val + ptr2->val + carry;
//         carry = 0;
//         if(sum / 10 != 0){
//             carry = sum / 10;
//             sum%=10;
//         }
//         ListNode* currNode = new ListNode(sum);
//         ptr->next = currNode;
//         ptr = currNode;

//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     while(ptr1 != NULL){
//         int sum = ptr1->val + carry;
//         carry = 0;
//         if(sum / 10 != 0){
//             carry = sum / 10;
//             sum%=10;
//         }
//         ListNode* currNode = new ListNode(sum);
//         ptr->next = currNode;
//         ptr = currNode;
        
//         ptr1 = ptr1->next;
//     }
//     while(ptr2 != NULL){
//         int sum = ptr2->val + carry;
//         carry = 0;
//         if(sum / 10 != 0){
//             carry = sum / 10;
//             sum%=10;
//         }
//         ListNode* currNode = new ListNode(sum);
//         ptr->next = currNode;
//         ptr = currNode;
        
//         ptr2 = ptr2->next;
//     }
    
//     if(carry!=0){
//         ListNode* currNode = new ListNode(carry);
//         ptr->next = currNode;
//     }
    
//     return newHead->next;
// }

int main(){

    return 0;
}