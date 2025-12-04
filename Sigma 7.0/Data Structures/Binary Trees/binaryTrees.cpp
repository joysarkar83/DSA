#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left, * right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

class BinaryTree{
public:
    TreeNode* root = NULL;
    
    int i = -1;
    TreeNode* buildTree(vector<int>& nodes){
        i++;
        if(i >= nodes.size() || nodes[i] == -1){
            return NULL;
        }
        TreeNode* newNode = new TreeNode(nodes[i]);
        if(root == NULL){
            root = newNode;
        }
        newNode->left = buildTree(nodes);
        newNode->right = buildTree(nodes);
        return newNode;
    }

};

void preOrderTraversal(TreeNode* root){
    if(root == NULL){
        cout<<-1<<" ";
        return;
    }

    cout<<root->val<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    return;
}

void inOrderTraversal(TreeNode* root){
    if(root == NULL){
        cout<<-1<<" ";
        return;
    }
    
    inOrderTraversal(root->left);
    cout<<root->val<<" ";
    inOrderTraversal(root->right);
    return;
}

void postOrderTraversal(TreeNode* root){
    if(root == NULL){
        cout<<-1<<" ";
        return;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->val<<" ";
    return;
}

int main(){
    vector<int> nodes = {1,2,3,4,-1,-1,5,-1,-1,6,-1,-1,7,8,-1,-1,-1};

    BinaryTree bt;
    bt.buildTree(nodes);

    preOrderTraversal(bt.root);
    cout<<"\n";
    inOrderTraversal(bt.root);
    cout<<"\n";
    postOrderTraversal(bt.root);
    return 0;
}