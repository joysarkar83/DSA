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

class List{
public:
    ListNode* head,* tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            ListNode* ptr = head;
            head = newNode;
            head->next = ptr;
        }
    }

    void push_back(int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        else{
            ListNode* ptr = head;
            head = head->next;
            ptr->next = NULL;
            delete ptr;
        }
    }
    
    void pop_back(){
        if(head == NULL){
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        else{
            ListNode* ptr = head;
            while(ptr->next->next != NULL){
                ptr = ptr->next;
            }
            tail = ptr;
            ptr = ptr->next;
            tail->next = NULL;
            delete ptr;
        }
    }
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    ListNode* curr = head->next, * prev = head;
    
    while(curr != NULL){
        if(curr->val != prev->val){
            prev = curr;
            curr = curr->next;
        }
        else{
            ListNode* del = curr;
            curr = curr->next;
            prev->next = curr;
            del->next = NULL;
            delete del;
        }
    }
    return head;
}

int main(){

    return 0;
}