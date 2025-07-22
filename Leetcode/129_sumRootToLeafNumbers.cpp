#include <iostream>
#include <vector>
#include <string>
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

int sumNumbers(TreeNode* root, int currNum = 0) {
    if(root == NULL){
        return 0;
    }

    currNum = (currNum*10) + root->val;
    if(root->left == NULL && root->right == NULL){
        return currNum;
    }

    return sumNumbers(root->left, currNum) + sumNumbers(root->right, currNum);
}

int main(){

    return 0;
}