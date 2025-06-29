#include <iostream>
using namespace std;

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }

    ListNode temp(0);
    ListNode* tempPtr = &temp;
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
            tempPtr->next = list1;
            list1 = list1->next;
        }
        else{
            tempPtr->next = list2;
            list2 = list2->next;
        }
        tempPtr = tempPtr->next;
    }
    while(list1 != NULL){
        tempPtr->next = list1;
        list1 = list1->next;
        tempPtr = tempPtr->next;
    }
    while(list2 != NULL){
        tempPtr->next = list2;
        list2 = list2->next;
        tempPtr = tempPtr->next;
    }
    return temp.next;
}

int main(){

    return 0;
}