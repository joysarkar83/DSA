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

int minDepth(TreeNode* root) {
    if(root == NULL){
        return 0;
    }

    int leftMin = minDepth(root->left);
    int rightMin = minDepth(root->right);

    if(leftMin == 0){
        return 1 + rightMin;
    }

    if(rightMin == 0){
        return 1 + leftMin;
    }

    return min(leftMin, rightMin);
}

int main(){

    return 0;
}