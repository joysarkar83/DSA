#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
    int val;
    Node* left, * right, * next;

    Node(int val){
        this->val = val;
    }
};

vector<Node*> levelOrder(Node* root){
    if(root == nullptr){
        return {};
    }

    vector<Node*> nodes;
    queue<Node*> q;

    q.push(root);
    nodes.emplace_back(root);
    q.push(nullptr);
    nodes.emplace_back(nullptr);

    while(!q.empty()){
        Node* head = q.front();
        q.pop();

        if(head == nullptr){
            if(!q.empty()){
                q.push(nullptr);
                nodes.emplace_back(nullptr);
            }
        }
        else{
            if(head->left!=nullptr){
                q.push(head->left);
                nodes.emplace_back(head->left);
            }
            if(head->right!=nullptr){
                q.push(head->right);
                nodes.emplace_back(head->right);
            }
        }
    }
    return nodes;
}

Node* connect(Node* root) {
    vector<Node*> nodes = levelOrder(root);
    int n = nodes.size();
    for(int i=0; i<n; i++){
        if(nodes[i] == nullptr){
            continue;
        }
        nodes[i]->next = nodes[i+1];
    }
    return root;
}

int main(){

    return 0;
}