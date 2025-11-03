#include <iostream>
#include <unordered_set>
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

ListNode* modifiedList(vector<int>& nums, ListNode* head) {
    unordered_set<int> numz(nums.begin(), nums.end());

    ListNode* ptr = head;

    // Handles all initial imposter values
    while(ptr!=NULL && numz.count(ptr->val) != 0){
        ptr = ptr->next;
    }
    
    // Handles all mid imposter values
    head = ptr;

    if(head == NULL) return NULL;

    while(ptr != NULL && ptr->next != NULL){
        if(numz.count(ptr->next->val) != 0){
            ptr->next = ptr->next->next;
        }else{
            ptr = ptr->next;
        }
    }

    return head;
}

int main(){
    return 0;
}