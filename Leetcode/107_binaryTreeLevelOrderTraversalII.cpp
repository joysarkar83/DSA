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
    }
};

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    queue<TreeNode*> q;
    if(root == NULL){
        return {};
    }
    vector<vector<int>> res;
    vector<int> currRow;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){        
        if(q.front() == nullptr){
            if(!currRow.empty()){
                res.emplace_back(currRow);
            }
            currRow.clear();
            q.pop();
        }
        else{
            while(q.front() != nullptr){
                currRow.emplace_back(q.front()->val);
                if(q.front()->left!=nullptr){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=nullptr){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            q.push(nullptr);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){

    return 0;
}