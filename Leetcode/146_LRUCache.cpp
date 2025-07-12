#include <iostream>
#include <stack>
#include <list>
#include <unordered_map>
using namespace std;

// Implememtating using custom Doubly Linked List

class Node{
    public:
    int data;
    Node* next,* prev;

    Node(int data){
        this->data = data;
        next = prev = NULL;
    }
};

class doublyLinkedList{
    public:

    Node* head, * tail;

    doublyLinkedList(){
        head = tail = NULL;
    }

    void push_front(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head != NULL){
            Node* temp = head;
            head = head->next;
            if(head != NULL) head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
    
    void pop_back(){
        if(head != NULL){
            Node* temp = tail;
            tail = tail->prev;
            temp->prev = NULL;
            if(tail != NULL) tail->next = NULL;
            delete temp;
        }
    }

    int front(){
        if(head != NULL){
            return head->data;
        }
        return -1;
    }

    int back(){
        if(head != NULL){
            return tail->data;
        }
        return -1;
    }

    void remove(Node* node) {
        if (node != NULL) {
            // Update head and tail if needed
            if (node == head) head = node->next;
            if (node == tail) tail = node->prev;

            // Fix surrounding links
            if (node->prev != NULL) node->prev->next = node->next;
            if (node->next != NULL) node->next->prev = node->prev;

            node->prev = node->next = NULL;
            delete node;
            node = nullptr;
        }
    }

    bool empty(){
        return (head == NULL);
    }

    ~doublyLinkedList(){
        while(head != NULL){
            Node* temp = head;
            head = head->next;
            delete temp;
            temp = NULL;
        }
    }
};

class LRUCache {
    int capacity;
    unordered_map<int, pair<int, Node*>> cache;
    doublyLinkedList dll;
    
    public:
    int size;

    LRUCache(int capacity) {
        this->capacity = capacity;
        size = 0;
    }
    
    int get(int key) {
        if(cache.find(key) == cache.end()){
            return -1;
        }
        else{
            dll.remove(cache[key].second);
            dll.push_back(key);
            cache[key].second = dll.tail;
            return cache[key].first;
        }
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            cache[key].first = value;
            dll.remove(cache[key].second);
            dll.push_back(key);
            cache[key].second = dll.tail;
        }
        else{
            if(size == capacity){
                cache.erase(dll.front());
                dll.pop_front();
                size--;
            }

            dll.push_back(key);
            cache[key] = {value, dll.tail};
            size++;
        }
    }
};

int main(){

    int capacity = 2;

    LRUCache* lRUCache = new LRUCache(capacity);
    lRUCache->put(1, 1);                    // cache is {1=1}
    lRUCache->put(2, 2);                    // cache is {1=1, 2=2}
    cout<<lRUCache->get(1)<<"\n";           // return 1
    lRUCache->put(3, 3);                    // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
    cout<<lRUCache->get(2)<<"\n";           // returns -1 (not found)
    lRUCache->put(4, 4);                    // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
    cout<<lRUCache->get(1)<<"\n";           // return -1 (not found)
    cout<<lRUCache->get(3)<<"\n";           // return 3
    cout<<lRUCache->get(4)<<"\n";           // return 4

    return 0;
}