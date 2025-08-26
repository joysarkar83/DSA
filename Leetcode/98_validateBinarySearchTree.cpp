#include <iostream>
#include <climits>
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

bool validate(TreeNode* root, long long low, long long high) {
    if (root == NULL) return true;

    if (root->val <= low || root->val >= high) return false;

    bool leftValid = validate(root->left, low, root->val);
    bool rightValid = validate(root->right, root->val, high);

    return leftValid && rightValid;
}

bool isValidBST(TreeNode* root) {
    return validate(root, LLONG_MIN, LLONG_MAX);
}

int main(){

    return 0;
}