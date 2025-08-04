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

//-----------------------------------------------------------------

void preOrderTraversal(TreeNode* root, vector<int>& nodes) {
    if (root == NULL) {
        return;
    }
    nodes.emplace_back(root->val);
    preOrderTraversal(root->left, nodes);
    root->left = NULL;
    preOrderTraversal(root->right, nodes);
    root->right = NULL;
}

TreeNode* buildFlatTree(vector<int>& nodes, int& index) {
    if(index >= nodes.size()) return NULL;
    TreeNode* currNode = new TreeNode(nodes[index]);

    index++;
    currNode->left = NULL;
    currNode->right = buildFlatTree(nodes, index);
    return currNode;
}

void flatten(TreeNode* root) {
    if(root == NULL) return;
    vector<int> nodes;
    preOrderTraversal(root, nodes);

    int index = 1;
    root->right = buildFlatTree(nodes, index);
}

int main(){

    return 0;
}