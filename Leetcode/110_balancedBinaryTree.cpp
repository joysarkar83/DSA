#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;
    TreeNode(int val){
        this->val = val;
        left = right = nullptr;
    }
};

int findHeight(TreeNode* root){
    if(root == nullptr) return 0;
    return (1 + max(findHeight(root->left), findHeight(root->right)));
}

bool isBalanced(TreeNode* root) {
    if(root == nullptr) return true;
    int maxDepthLeft = findHeight(root->left), maxDepthRight = findHeight(root->right);
    if(abs(maxDepthLeft - maxDepthRight) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}

int main(){


    return 0;
}