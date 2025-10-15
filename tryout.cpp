#include <iostream>
#include <vector>
#include <queue>
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

class Tree{
public:
    TreeNode* root;
    int idx;

    Tree(){
        idx = -1;
        root = NULL;
    }

    TreeNode* buildTree(TreeNode* root, vector<int> nodes, int& idx){
        idx++;
        if(nodes[idx] == -1){
            return NULL;
        }

        root->val = nodes[idx];
        idx++;
        buildTree(root->left, nodes, idx);
        idx++;
        buildTree(root->right, nodes, idx);
        return root;
    }
};

int main(){

    return 0;
}