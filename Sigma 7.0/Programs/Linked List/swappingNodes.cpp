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
    
    int search(int target){
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

Node* swapNodes(Node* head, int x, int y){
    if (x==y) return head;

    Node* xPrev = NULL, *xPtr = NULL, *xNext = NULL;
    Node* yPrev = NULL, *yPtr = NULL, *yNext = NULL;
    Node* curr = head, *prev = NULL;

    while(curr != NULL){
        if(curr->data == x){
            xPrev = prev;
            xPtr = curr;
            xNext = xPtr->next;
        }
        if(curr->data == y){
            yPrev = prev;
            yPtr = curr;
            yNext = yPtr->next;
            break;
        }
        prev = curr;
        curr = curr->next;
    }


    if(xPrev != NULL){
        xPrev->next = yPtr;
    }
    else{
        head = yPtr;
    }
    
    if(yPrev != NULL){
        yPrev->next = xPtr;
    }
    else{
        head = xPtr;
    }

//Swapping Logics remaining

    return head;
}

int main(){
    List ll;
    // ll.push_back(3);
    // ll.push_back(4);
    // ll.push_back(5);
    // ll.push_back(6);
    // ll.push_back(7);
    // ll.push_back(8);
    ll.push_back(9);
    ll.push_back(10);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.head = swapNodes(ll.head, 2, 9);
    ll.printList();

    return 0;
}