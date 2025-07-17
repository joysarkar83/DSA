#include <iostream>
using namespace std;

int size(ListNode* head) {
    int count = 0;
    ListNode* ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

int getDecimalValue(ListNode* head) {
    int n = size(head);
    if(n == 1){
        if(head->val == 1){
            return 1;
        } else {
            return 0;
        }
    }
    int ans = 0;
    int multiplier = 2;
    while (n-1 != 1) {
        multiplier *= 2;
        n-=1;
    }

    while (head != NULL) {
        ans += head->val * multiplier;
        multiplier /= 2;
        head = head->next;
    }

    return ans;
}

int main(){

    return 0;
}