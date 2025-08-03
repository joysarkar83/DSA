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

// FXN 1: Get left subtree vals as a vector - left first
void getLeftSubTree(TreeNode* root, vector<int>& leftSubTree){
    if(root == NULL){
        leftSubTree.emplace_back(-101);
        return;
    }

    leftSubTree.emplace_back(root->val);
    getLeftSubTree(root->left, leftSubTree);
    getLeftSubTree(root->right, leftSubTree);
}

// FXN 2: Get right subtree vals as a vector - right first
void getRightSubTree(TreeNode* root, vector<int>& rightSubTree){
    if(root == NULL){
        rightSubTree.emplace_back(-101);
        return;
    }
    
    rightSubTree.emplace_back(root->val);
    getRightSubTree(root->right, rightSubTree);
    getRightSubTree(root->left, rightSubTree);
    
}

// FXN 3: Conpare results
bool isSymmetric(TreeNode* root) {
    if(root == NULL) return true;
    vector<int> leftSubTree;
    vector<int> rightSubTree;

    getLeftSubTree(root, leftSubTree);
    getRightSubTree(root, rightSubTree);

    return (leftSubTree == rightSubTree);
}

int main(){

    return 0;
}