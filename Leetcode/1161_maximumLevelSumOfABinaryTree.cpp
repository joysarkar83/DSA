#include <iostream>
#include <queue>
#include <climits>
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

int maxLevelSum(TreeNode* root) {
    queue<TreeNode*> q;
    int maxSum = INT_MIN;

    q.push(root);
    
    while(!q.empty()){
        int len = q.size();
        
        int sum = 0;
        while(len > 0){
            auto fr = q.front();
            q.pop();
            sum += fr->val;
            if(fr->left != nullptr){
                q.push(fr->left);
            }
            if(fr->right != nullptr){
                q.push(fr->right);
            }
            len--;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main(){

    return 0;
}