#include <iostream>
#include <vector>
#include <list>
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

ListNode* mergeNodes(ListNode* head) {
    ListNode* newHead = new ListNode(0);
    ListNode* newItr = newHead;
    ListNode* ptr = head;
    int count = 0;
    while(ptr != NULL){
        if(ptr->val == 0){
            ptr = ptr->next;
            while(ptr != NULL && ptr->val != 0){
                count+=ptr->val;
                ptr = ptr->next;
            }
            if(count != 0){
                ListNode* newNode = new ListNode(count);
                newItr->next = newNode;
                newItr = newNode;
            }
            count = 0;
        }
    }
    return newHead->next;
}

int main(){
    return 0;

}