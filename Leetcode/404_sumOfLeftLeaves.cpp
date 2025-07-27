#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

static int idx = -1;

TreeNode* buildTree(vector<int>& nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void sumOfLeftLeavesHelper(TreeNode* root, int& sum) {
    if (root == NULL) {
        return;
    }
    if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        sum += root->left->val;
    }
    sumOfLeftLeavesHelper(root->left, sum);
    sumOfLeftLeavesHelper(root->right, sum);
}

int sumOfLeftLeaves(TreeNode* root) {
    int sum = 0;
    sumOfLeftLeavesHelper(root, sum);
    return sum;
}

int main(){

    return 0;
}