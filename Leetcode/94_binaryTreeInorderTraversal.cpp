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

static int idx = -1;

TreeNode* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void inOrderHelper(TreeNode* root, vector<int>& inOrder){
    if(root == NULL){
        return;
    }

    inOrderHelper(root->left, inOrder);
    inOrder.push_back(root->val);
    inOrderHelper(root->right, inOrder);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inOrder = {};
    
    inOrderHelper(root, inOrder);
    return inOrder;
}

int main(){

    return 0;
}