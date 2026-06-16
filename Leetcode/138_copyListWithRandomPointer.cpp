#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    if (head == nullptr) return nullptr; 

    vector<Node*> nodes;
    unordered_map<Node*, int> index;

    Node* ptr = head; int i = 0;
    while(ptr != nullptr){
        Node* newNode = new Node(ptr->val);
        nodes.emplace_back(newNode);
        index[ptr] = i++;
        ptr = ptr->next;
    }
    
    Node* newHead = nullptr;
    ptr = head; i = 0;
    while(ptr != nullptr){
        Node* currNode = nodes[i++];
        
        if (ptr->next != nullptr) {
            currNode->next = nodes[index[ptr->next]];
        } else {
            currNode->next = nullptr;
        }
        
        if (ptr->random != nullptr) {
            currNode->random = nodes[index[ptr->random]];
        } else {
            currNode->random = nullptr;
        }

        if(newHead == nullptr){
            newHead = currNode;
        }

        ptr = ptr->next;
    }
    return newHead;
}

int main(){

    return 0;
}