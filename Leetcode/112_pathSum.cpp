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
TreeNode* buildTree(vector<int>& nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

bool hasPathSumHelper(TreeNode* root, int currSum, int& targetSum){
    if((root->left == NULL) && (root->right == NULL)){
        currSum += root->val;
        return (targetSum == currSum);
    }

    currSum+=root->val;

    bool lt = false, rt = false;
    if(root->left != NULL){
        lt = hasPathSumHelper(root->left, currSum, targetSum);
    }
    if(root->right != NULL){
        rt = hasPathSumHelper(root->right, currSum, targetSum);
    }
    return (lt || rt);
}

bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == NULL) return false;
    return hasPathSumHelper(root, 0, targetSum);
}

int main(){

    return 0;
}