#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;

    TreeNode(int& val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(TreeNode* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(TreeNode* root){
    if(root == NULL) return;
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}

void PostOrder(TreeNode* root){
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->val<<" ";
}

#include <vector>
#include <queue>
vector<vector<int>> LevelOrder(TreeNode* root){
    if(root == NULL) return {};

    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        vector<int> currLevel;
        for(int i=0; i<levelSize; i++){
            TreeNode* currNode = q.front();
            q.pop();
            currLevel.emplace_back(currNode->val);
            if(currNode->left != NULL) q.push(currNode->left);
            if(currNode->right != NULL) q.push(currNode->right);
        }
        res.emplace_back(currLevel);
    }
    return res;
}

#include <stack>
void IterativePreOrder(TreeNode* root){
    if(root == NULL) return;

    stack<TreeNode*> stk;
    stk.push(root);

    while(!stk.empty()){
        int size = stk.size();
        for(int i=0; i<size; i++){
            TreeNode* currNode = stk.top();
            stk.pop();
            cout<<currNode->val<<" ";
            if(currNode->right != NULL) stk.push(currNode->right);
            if(currNode->left != NULL) stk.push(currNode->left);
        }
    }
}

void IterativeInOrder(TreeNode* root){
    stack<TreeNode*> stk;
    TreeNode* currNode = root;

    while(currNode != NULL || !stk.empty()){
        while(currNode != NULL){
            stk.push(currNode);
            currNode = currNode->left;
        }

        currNode = stk.top();
        stk.pop();
        cout<<currNode->val<<" ";
        currNode = currNode->right;
    }
}

vector<int> IterativePostOrder(TreeNode* root){

}

int main(){

    return 0;
}