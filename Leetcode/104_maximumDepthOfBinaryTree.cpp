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

int maxDepth(TreeNode* root) {
    if(root == NULL){
        return 0;
    }

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main(){

    return 0;
}