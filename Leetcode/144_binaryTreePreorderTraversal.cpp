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

TreeNode* bulidTree(vector<int>& nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;

    TreeNode* newNode = new TreeNode(nodes[idx]);
    newNode->left = bulidTree(nodes);
    newNode->right = bulidTree(nodes);

    return newNode;
}

void preorderTraversalHelper(TreeNode* root, vector<int>& res){
    if(root == NULL) return;

    res.emplace_back(root->val);
    
    if(root->left != NULL) preorderTraversalHelper(root->left, res);
    if(root->right != NULL) preorderTraversalHelper(root->right, res);
}

vector<int> preorderTraversal(TreeNode* root) {
    if(root == NULL) return {};

    vector<int> preOrder = {};
    preorderTraversalHelper(root, preOrder);
    return preOrder;
}

int main(){

    return 0;
}