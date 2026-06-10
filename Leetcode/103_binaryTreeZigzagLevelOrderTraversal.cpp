#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;
    TreeNode(int val){
        this->val = val;
        left = right = nullptr;
    }
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if(root == nullptr) return res;
    bool rev = 0;

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int levelSize = q.size();
        vector<int> currLevel;
        for(int i=0; i<levelSize; i++){
            TreeNode* currNode = q.front();
            q.pop();
            currLevel.emplace_back(currNode->val);
            if(currNode->left != nullptr) q.push(currNode->left);
            if(currNode->right != nullptr) q.push(currNode->right);
        }
        if(rev){
            reverse(currLevel.begin(), currLevel.end());
            rev = 0;
        }else{
            rev = 1;
        }
        res.emplace_back(currLevel);
    }

    return res;
}

int main(){

    return 0;
}