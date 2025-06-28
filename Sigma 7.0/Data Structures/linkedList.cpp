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
    Node* head;
    Node* tail;
    
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

public:
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

    //Q: Find and remove and Nth node from end.
    void removeNth(int n){
        int size = getSize();

        if(n > size || n <= 0){
            return;
        }

        // Case 1: Deleting the head
        if(n == size){
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        // Case 2: Delete from middle or end
        Node* ptr = head;
        for(int i=0; i<size-n-1; i++){
            ptr = ptr->next;
        }

        Node* toDelete = ptr->next;
        ptr->next = ptr->next->next;
        toDelete->next = NULL;
        delete toDelete;
        return;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
    cout<<ll.getSize()<<"\n";
    ll.removeNth(2);
    ll.printList();

    
    return 0;
}