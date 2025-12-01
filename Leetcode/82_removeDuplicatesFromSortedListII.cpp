#include <iostream>
#include <vector>
#include <map>
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

class LinkedList{
public:
    ListNode* head = NULL;

    LinkedList(vector<int>& nodes){
        if(nodes.empty()){
            return;
        }
        int i = 0, n = nodes.size();
        head = new ListNode(nodes[i++]);
        ListNode* ptr = head;
        for(; i<n; i++){
            ListNode* newNode = new ListNode(nodes[i]);
            ptr->next = newNode;
            ptr = newNode;
        }
    }

    void printLL(){
        ListNode* ptr = head;
        while(ptr != NULL){
            cout<<ptr->val<<"->";
            ptr = ptr->next;
        }
    }
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL){
        return head;
    }

    map<int,int> freq;
    ListNode* ptr = head;
    ListNode* newHead = NULL;

    while(ptr!=NULL){
        freq[ptr->val]++;
        ptr = ptr->next;
    }

    for(auto itr=freq.begin(); itr!=freq.end(); itr++){
        if(itr->second == 1){
            if(newHead == NULL){
                newHead = new ListNode(itr->first);
                ptr = newHead;
            }
            else{
                ptr->next = new ListNode(itr->first);
                ptr = ptr->next;
            }
        }
    }
    return newHead;
}

int main(){
    vector<int> nodes = {1,2,3,4,5,6,7,8,9};
    LinkedList LL(nodes);
    LL.printLL();
    return 0;
}