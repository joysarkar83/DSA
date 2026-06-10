#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,* right;
    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

vector<vector<int>> levelOrderTraversal(Node* root){
    vector<vector<int>> levels;
    if(root == nullptr) return levels;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int levelSize = q.size();
        vector<int> currLevel;
        for(int i=0; i<levelSize; i++){
            Node* currNode = q.front();
            q.pop();
            currLevel.emplace_back(currNode->data);
            if(currNode->left!=nullptr) q.push(currNode->left);
            if(currNode->right!=nullptr) q.push(currNode->right);
        }
        levels.emplace_back(currLevel);
    }
    return levels;
}

vector<int> boundaryTraversal(Node *root) {
    vector<vector<int>> levelOrder = levelOrderTraversal(root);
    vector<int> res;
    int n = levelOrder.size();

    for(int i=0; i<n-1; i++){
        res.emplace_back(levelOrder[i].front());
    }
    
    for(int i:levelOrder.back()){
        res.emplace_back(i);
    }

    for(int i=n-1; i>0; i--){
        res.emplace_back(levelOrder[i].back());
    }
    return res;
}

int main(){

    return 0;
}