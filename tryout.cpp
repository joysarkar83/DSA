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

class BST{
public:
    TreeNode* root = NULL;

    TreeNode* insert(TreeNode* root, int& val){
        if(root == NULL){
            return new TreeNode(val);
        }
        
        if(root->val < val){
            root->right = insert(root->right, val);
        }
        else{
            root->left = insert(root->left, val);
        }
        return root;
    }

    void buildBST(vector<int>& nodes){
        for(int& i:nodes){
            if(i == -1){
                continue;
            }
            root = insert(root, i);
        }
    }
};

void inOrder(TreeNode* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

int main(){
    vector<int> nodes = {1,2,3,4,-1,-1,5,-1,-1,6,-1,-1,7,8,-1,-1,-1};
    BST bst;
    bst.buildBST(nodes);

    inOrder(bst.root);

    return 0;
}