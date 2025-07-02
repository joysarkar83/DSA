#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

    ~Node(){
        // cout<<"Deleting -> "<<data<<"\n";
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }
    
    void push_front(int val){
        Node* newNode = new Node(val);
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
        Node* newNode = new Node(val);
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
        Node* ptr = head;
        head = head->next;
        ptr->next = NULL;
        delete ptr;
    }
    
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* ptr = head;
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = NULL;
        delete tail;
        tail = ptr;
    }
    
    int getSize(){
        Node* ptr = head;
        int i = 0;
        while(ptr != NULL){
            ptr = ptr->next;
            i++;
        }
        return i;
    }
    
    int searchItr(int target){
        Node* ptr = head;
        int i=0;
        while(ptr != NULL){
            if(ptr->data == target){
                return i;
            }
            ptr = ptr->next;
            i++;
        }
        return -1;
    }
    
    int searchRecHelper(Node* ptr, int target){
        if(ptr == NULL){
            return -1;
        }
        if(ptr->data == target){
            return 0;
        }
        int idx = searchRecHelper(ptr->next, target);
        if(idx == -1){
            return -1;
        }
        return idx + 1;
    }

    int searchRec(int target){
        Node* ptr = head;
        searchRecHelper(ptr, target);
    }

    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        tail = head;
        while(curr != NULL){
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    void printList(){
        Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<" -> ";
            ptr = ptr->next;
        }
        cout<<"NULL\n";
    }

    void insert(int val, int idx){
        Node* newNode = new Node(val);
        Node* ptr = head;
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
        // cout<<"Deleting List\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
        // cout<<"List Deleted\n";
    }
};

Node* merge(Node* leftHead, Node* rightHead){
    Node dummy(0);
    Node* tail = &dummy;

    Node* leftPtr = leftHead, * rightPtr = rightHead;

    while(leftPtr != NULL && rightPtr != NULL){
        if(leftPtr->data <= rightPtr->data){
            tail->next = leftPtr;
            tail = tail->next;
            leftPtr = leftPtr->next;
        }
        else{
            tail->next = rightPtr;
            tail = tail->next;
            rightPtr = rightPtr->next;
        }
    }
    
    while(leftPtr != NULL){
        tail->next = leftPtr;
        tail = tail->next;
        leftPtr = leftPtr->next;
    }
    
    while(rightPtr != NULL){
        tail->next = rightPtr;
        tail = tail->next;
        rightPtr = rightPtr->next;
    }
    
    Node* sortedHead = dummy.next;
    dummy.next = NULL;
    return sortedHead;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* slowPtr = head, *fastPtr = head, *prev = NULL;

    while(fastPtr != NULL && fastPtr->next != NULL){
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    if(prev != NULL){
        prev->next = NULL;
    }

    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(slowPtr);

    return merge(leftSorted, rightSorted);
}

bool isCycle(Node* head){
    Node* slowPtr = head, *fastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            return true;
        }
    }
    return false;
}

void breakCycle(Node* head){
    //Check for cycle
    Node* slowPtr = head, *fastPtr = head;
    bool isCycle = false;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
        return;
    }

    //We already have the meetup position
    if(fastPtr == head){        //Special case: The cycle is a round loop
        while(fastPtr->next != slowPtr){
            fastPtr = fastPtr->next;
        }
        fastPtr->next = NULL;
    }
    else{                       //Case where there's a open branch along with the cycle
        slowPtr = head->next;
        while(fastPtr->next != slowPtr){
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        fastPtr->next = NULL;
    }
}

Node* zigZagLL(Node* head){
    //Get the mid index
    Node* slowPtr = head, * fastPtr = head, * prev = NULL;

    while(fastPtr!=NULL && fastPtr->next!=NULL){
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    //Break into halves
    if(prev!=NULL){
        prev->next = NULL;
    }

    //Rotate second half
    Node* pre = NULL,* cur = slowPtr;
    while(cur != NULL){
        Node* nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }

    //Getting access to the final two linked lists
    Node* leftHead = head, * rightHead = pre;

    //Making copies for traversal
    Node* left = leftHead, * right = rightHead;

    //Alternate Merging
    Node* tail;
    while(left!=NULL && right!=NULL){
        Node* leftNext = left->next, * rightNext = right->next;
        left->next = right;
        right->next = leftNext;
        left = leftNext;
        tail = right;
        right = rightNext;
    }
    tail->next = right;
    tail = right;

    return head;
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
    ll.pop_back();
    ll.printList();
    return 0;
}