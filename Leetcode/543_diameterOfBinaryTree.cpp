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
TreeNode* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}

pair<int, int> diameterOfBinaryTreeHelper(TreeNode* root){
    if(root == NULL) return {0,0};

    pair<int, int> leftInfo = diameterOfBinaryTreeHelper(root->left);           //LH, LD
    pair<int, int> rightInfo = diameterOfBinaryTreeHelper(root->right);         //RH, RD

    int currDiameter = leftInfo.first + rightInfo.first;
    int finalDiameter = max(max(leftInfo.second, rightInfo.second), currDiameter);
    int currHeight = max(leftInfo.first, rightInfo.first) + 1;

    return {currHeight, finalDiameter};
}

int diameterOfBinaryTree(TreeNode* root) {
    pair<int,int> ans = diameterOfBinaryTreeHelper(root);
    return ans.second;
}

int main(){
    vector<int> nodes = {10, 5, 2, -1, -1, 7, 6, -1, -1, 8, -1, -1, 15, 12, 11, -1, -1, 13, -1, -1, 18, 17, -1, -1, 20, -1, -1};

    TreeNode* root = buildTree(nodes);

    // cout<<treeHeight(root);
    cout<<diameterOfBinaryTree(root);

    return 0;
}