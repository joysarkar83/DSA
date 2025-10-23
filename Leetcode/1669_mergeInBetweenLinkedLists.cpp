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

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* junction1 = NULL, * junction2 = NULL;
    ListNode* ptr = list1;

    int i=0;
    for(; i<a; i++){
        if(i == a-1){
            junction1 = ptr;
        }
        ptr = ptr->next;
    }

    for(; i<b+2; i++){
        if(i == b+1){
            junction2 = ptr;
        }
        ptr = ptr->next;
    }

    junction1->next = list2;
    ptr = list2;
    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = junction2;

    return list1;
}

int main(){

    return 0;
}