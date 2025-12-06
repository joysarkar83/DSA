#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left, * right;

    TreeNode(int val){
        this->val = val;
        left = right = nullptr;
    }
};

class Tree{
public:
    TreeNode* root;

    Tree(){
        root = nullptr;
    }

    int i = -1;
    TreeNode* buildTree(vector<int> nodes){
        i++;
        if(i >= nodes.size() || nodes[i] == -1){
            return nullptr;
        }

        TreeNode* newNode = new TreeNode(nodes[i]);
        if(root == nullptr){
            root = newNode;
        }
        newNode->left = buildTree(nodes);
        newNode->right = buildTree(nodes);

        return newNode;
    }
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(root == nullptr) return {};

    vector<vector<int>> res;
    queue<TreeNode*> q;
    bool fwd = 1;
    q.emplace(root);
    q.emplace(nullptr);
    
    while(!q.empty()){
        vector<int> currRow;
        while(q.front()!=nullptr){
            currRow.emplace_back(q.front()->val);
            if(q.front()->left != nullptr){
                q.emplace(q.front()->left);
            }
            if(q.front()->right != nullptr){
                q.emplace(q.front()->right);
            }
            q.pop();
        }
        q.pop();
        if(!q.empty()){
            q.emplace(nullptr);
        }
        if(fwd){
            res.emplace_back(currRow);
            fwd = false;
        }
        else{
            reverse(currRow.begin(), currRow.end());
            res.emplace_back(currRow);
            fwd = true;
        }
    }
    return res;
}

int main(){

    return 0;
}