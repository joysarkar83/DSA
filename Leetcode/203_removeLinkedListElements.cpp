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
    
    ~ListNode(){
        // cout<<"Deleting -> "<<val<<"\n";
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    public:
    ListNode* head;
    ListNode* tail;
    
    List(){
        head = NULL;
        tail = NULL;
    }
    
    void push_front(int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void push_back(int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
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
        ListNode* ptr = head;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
    }
    
    void pop_back(){
        if(head == NULL){
            return;
        }
        ListNode* ptr = head;
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = NULL;
        delete tail;
        tail = ptr;
    }
    
    int getSize(){
        ListNode* ptr = head;
        int i = 0;
        while(ptr != NULL){
            ptr = ptr->next;
            i++;
        }
        return i;
    }
    
    int search(int target){
        ListNode* ptr = head;
        int i=0;
        while(ptr != NULL){
            if(ptr->val == target){
                return i;
            }
            ptr = ptr->next;
            i++;
        }
        return -1;
    }
    
    void reverse(){
        ListNode* prev = NULL;
        ListNode* curr = head;
        tail = head;
        while(curr != NULL){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }
    
    void printListNode(){
        ListNode* ptr = head;
        while(ptr != NULL){
            cout<<ptr->val<<" -> ";
            ptr = ptr->next;
        }
        cout<<"NULL\n";
    }
    
    void insert(int val, int idx){
        ListNode* newNode = new ListNode(val);
        ListNode* ptr = head;
        for(int i=0; i<idx-1; i++){
            if(ptr == NULL){
                cout<<"INSERTION POSITION INVALID\n";
                return;
            }
            ptr = ptr->next;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    
    ~List(){
        // cout<<"Deleting ListNode\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
        // cout<<"ListNode Deleted\n";
    }
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode* prev = NULL, * curr = head;

    while(curr!=NULL){
        if(curr->val == val){
            if(prev != NULL){
                prev->next = curr->next; 
            }else{
                head = curr->next;
            }
            ListNode* toDel = curr;
            curr = curr->next;
            toDel->next = NULL;
            delete toDel;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main(){

    return 0;
}