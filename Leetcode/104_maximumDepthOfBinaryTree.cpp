#include <iostream>
#include <queue>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;
    TreeNode(int val){
        this->val = val;
        left = right = nullptr;
    }
};

// int maxDepth(TreeNode* root) {
//     int levels = 0;
//     if(root == nullptr) return levels;
//     queue<TreeNode*> q;
//     q.push(root);

//     while(!q.empty()){
//         int levelSize = q.size();
//         for(int i=0; i<levelSize; i++){
//             TreeNode* currNode = q.front();
//             q.pop();
//             if(currNode->left != nullptr) q.push(currNode->left);
//             if(currNode->right != nullptr) q.push(currNode->right);
//         }
//         levels++;
//     }
//     return levels;
// }

int maxDepth(TreeNode* root) {
    if(root == nullptr) return 0;

    return (1+max(maxDepth(root->left), maxDepth(root->right)));
}

int main(){


    return 0;
}