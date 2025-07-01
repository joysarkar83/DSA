#include <iostream>
using namespace std;

//Brute Force
// ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
//     vector<ListNode*> addresses;
//     for(ListNode* ptr = head1; ptr != NULL; ptr=ptr->next){
//         addresses.push_back(ptr);
//     }
    
//     for(ListNode* ptr = head2; ptr != NULL; ptr=ptr->next){
//         for(int i = 0; i<addresses.size(); i++){
//             if(ptr == addresses[i]){
//                 return ptr;
//             }
//         }
//     }
//     return NULL;
// }

//Slightly Optimized
int getSize(ListNode* head){
    int count = 0;
    while(ListNode* ptr = head != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
    int m = getSize(head1);
    int n = getSize(head2);

    ListNode* ptr1 = head1;
    ListNode* ptr2 = head2;

    while(int i=0 < m-n){
        ptr1 = ptr1->next;
    }

    while(ptr1 != ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1;
}

//Totally Optimized
// ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
//     ListNode* ptr1 = head1, * ptr2 = head2;
//     while(ptr1 != ptr2){
//         if (ptr1 == NULL) {
//             ptr1 = head2;
//         } else {
//             ptr1 = ptr1->next;
//         }

//         if (ptr2 == NULL) {
//             ptr2 = head1;
//         } else {
//             ptr2 = ptr2->next;
//         }
//     }

//     return ptr1;
// }

int main(){

    return 0;
}