#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;

    TreeNode(int val){
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

int main(){
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(6);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(1);

    cout<<"PreOrder:\t";
    PreOrder(root);
    cout<<"\n";

    cout<<"InOrder:\t";
    InOrder(root);
    cout<<"\n";

    cout<<"PostOrder:\t";
    PostOrder(root);
    cout<<"\n";
    
    cout<<"LevelOrder:\n";
    vector<vector<int>> levels = LevelOrder(root);
    for(int i=0; i<levels.size(); i++){
        for(int j=0; j<levels[i].size(); j++){
            cout<<levels[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}