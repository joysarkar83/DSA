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

// int getHeight(TreeNode* root){
//     if(root == nullptr) return 0;
//     return max(getHeight(root->left), getHeight(root->right)) + 1;
// }

// void helper(TreeNode* root, int& maxLen) {
//     if(root == nullptr) return;

//     int leftHeight = getHeight(root->left);
//     int rightHeight = getHeight(root->right);
//     maxLen = max(maxLen, (leftHeight + rightHeight));
//     helper(root->left, maxLen);
//     helper(root->right, maxLen);
// }

int helper(TreeNode* root, int& res){
    if(root == nullptr) return 0;

    int ltHt = helper(root->left, res);
    int rtHt = helper(root->right, res);
    res = max(res, ltHt+rtHt);
    return 1 + max(ltHt, rtHt);
}

int diameterOfBinaryTree(TreeNode* root) {
    int res = 0;
    helper(root, res);
    return res;
}

int main(){

    return 0;
}