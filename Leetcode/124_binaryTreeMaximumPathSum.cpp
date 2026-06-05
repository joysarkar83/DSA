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

int helper(TreeNode* root, int& res){
    if(root == nullptr) return 0;

    int leftSum = max(0, helper(root->left, res));
    int rightSum = max(0, helper(root->right, res));

    res = max(res, root->val + leftSum + rightSum);
    return root->val + max(leftSum, rightSum);
}

int maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    helper(root, res);
    return res;
}

int main(){

    return 0;
}