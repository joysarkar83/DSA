#include <iostream>
#include <vector>
#include <cmath>
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

class Solution {
public:
    vector<int> data;
    int len = 0;
    Solution(ListNode* head) {
        ListNode* ptr = head;
        while(ptr != NULL){
            data.emplace_back(ptr->val);
            len++;
            ptr = ptr->next;
        }
    }

    int getRandom() {
        int randomNo = rand() % len;
        return data[randomNo];
    }
};

int main(){

    return 0;
}