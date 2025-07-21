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

vector<vector<int>> levelOrder(TreeNode* root) {
    if(root == NULL) return {};
    queue<TreeNode*> q;
    vector<vector<int>> res;

    q.push(root);
    q.push(NULL);

    vector<int> temp;
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        if(curr != NULL){
            temp.push_back(curr->val);

            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        else{
            res.push_back(temp);
            temp.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return res;
}

int main(){

    return 0;
}