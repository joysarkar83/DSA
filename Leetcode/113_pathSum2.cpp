#include <iostream>
#include <vector>
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
TreeNode* buildTree(vector<int>& nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void printVector(vector<int> vect){
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void pathSumHelper(TreeNode* root, int currSum, int& targetSum, vector<int>& tempPath, vector<vector<int>>& paths) {
    if((root->left == NULL) && (root->right == NULL)){
        currSum += root->val;
        tempPath.emplace_back(root->val);
        printVector(tempPath);
        if(currSum == targetSum){
            paths.push_back(tempPath);
        }
        return;
    }
    
    currSum += root->val;
    tempPath.emplace_back(root->val);

    if(root->left != NULL){
        pathSumHelper(root->left, currSum, targetSum, tempPath, paths);
        tempPath.pop_back();
    }
    if(root->right != NULL){
        pathSumHelper(root->right, currSum, targetSum, tempPath, paths);
        tempPath.pop_back();
    }
}

vector<vector<int>> pathSum(TreeNode* root, int& targetSum) {
    if(root == NULL) return {};

    vector<vector<int>> paths;
    vector<int> tempPath;

    pathSumHelper(root, 0, targetSum, tempPath, paths);
    return paths;
}

int main(){

    return 0;
}