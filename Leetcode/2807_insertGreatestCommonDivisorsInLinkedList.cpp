#include <iostream>
#include <vector>
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


int gcd(int val1, int val2){
    while(val1 % val2 != 0){
        int rem = val1 % val2;
        val1 = val2;
        val2 = rem;
    }
    return val2;
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    int val1=-1, val2=-1;
    ListNode* ptr = head;

    while(ptr->next!=NULL){
        val1 = ptr->val;
        val2 = ptr->next->val;
        int num = gcd(max(val1, val2), min(val1, val2));
        ListNode* newNode = new ListNode(num);
        newNode->next = ptr->next;
        ptr->next = newNode;
        ptr = newNode->next;
    }
    return head;
}

int main(){
    cout<<gcd(18, 6);

    return 0;
}