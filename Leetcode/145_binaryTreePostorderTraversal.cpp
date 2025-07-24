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
    if(nodes[idx] == -1){
        return NULL;
    }

    TreeNode* newNode = new TreeNode(nodes[idx]);
    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);

    return newNode;
}

void postorderTraversalHelper(TreeNode*& root, vector<int>& res){
    if(root == NULL) return;

    if(root->left != NULL) postorderTraversalHelper(root->left, res);
    if(root->right != NULL) postorderTraversalHelper(root->right, res);
    res.emplace_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    if(root == NULL) return {};

    vector<int> res;
    postorderTraversalHelper(root, res);
    return res;
}

int main(){

    return 0;
}