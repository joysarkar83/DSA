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
    
    ~List(){
        while(head != NULL){
            Node* ptr = head;
            head = head->next;
            ptr->next = NULL;
            delete ptr;
            ptr = NULL;
        }
    }
};

/*
How it works?
-> If there exists a cycle in the LL, they(slowPtr and fastPtr) will surely meet at some point and they won't reach NULL.

-> Imagine the scene from "CARS" where other cars completes a lap while damaged Dinoco and Lightning McQueen are slowly 
finishing the race.
*/
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

/*
How it works?
-> Dist. travelled by fastPtr (y) = 2 * Dist. travelled by slowPtr (x)
   i.e. y = 2x;
   Now slowPtr is set to start line, and speed of fastPtr is reduced. Both the ptr travels with the same speed now.
   Now when they meet, they will exactly meet at the point where the loop is formed.

-> I modified the code so that the fastPtr stops one node back from the looping node.
   Now set: fastPtr->next = NULL
   The cycle is successfully broken now.
*/
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

int main(){

    return 0;
}