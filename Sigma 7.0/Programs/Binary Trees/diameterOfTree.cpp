#include <iostream>
#include <vector>
#include <algorithm>
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

// APPROACH 1 - 0(n^2)
// int treeHeight(TreeNode* root){
//     if(root == NULL) return 0;

//     int leftHt = treeHeight(root->left);
//     int rightHt = treeHeight(root->right);

//     return max(leftHt, rightHt) + 1;
// }

// int treeDiameter(TreeNode* root){
//     if(root == NULL) return 0;

//     int leftDiam = findDiameter(root->left);
//     int rightDiam = findDiameter(root->right);
//     int currDiam = treeHeight(root->left) + treeHeight(root->right) + 1;

//     return max(currDiam, max(leftDiam, rightDiam));
// }

// APPROACH 2 - 0(n)
pair<int,int> treeDiameter(TreeNode* root){
    if(root == NULL){
        return {0, 0};
    }

    pair<int, int> leftInfo = treeDiameter(root->left);         //LD, LH
    pair<int, int> rightInfo = treeDiameter(root->right);       //RD, RH

    int currDiameter = leftInfo.second + rightInfo.second + 1;
    int finalDiameter = max(max(leftInfo.first, rightInfo.first), currDiameter);
    int currHeight = max(leftInfo.second, rightInfo.second) + 1;

    return {finalDiameter, currHeight};
}

int main(){
    vector<int> nodes = {10, 5, 2, -1, -1, 7, 6, -1, -1, 8, -1, -1, 15, 12, 11, -1, -1, 13, -1, -1, 18, 17, -1, -1, 20, -1, -1};

    TreeNode* root = buildTree(nodes);

    // cout<<treeHeight(root);
    cout<<treeDiameter(root).first;

    return 0;
}