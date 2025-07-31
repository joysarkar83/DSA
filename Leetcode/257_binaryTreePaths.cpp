#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int val){
        this,val = val;
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

void binaryTreePathsHelper(TreeNode* root, string curr, vector<string>& paths){
    if(root->left==NULL && root->right==NULL){
        curr += to_string(root->val);
        paths.push_back(curr);
    }

    curr += to_string(root->val);
    curr+="->";
    if(root->left != NULL) binaryTreePathsHelper(root->left, curr, paths);
    if(root->right != NULL) binaryTreePathsHelper(root->right, curr, paths);
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> paths;
    string curr;
    binaryTreePathsHelper(root, curr, paths);
    return paths;
}

int main(){

    return 0;
}