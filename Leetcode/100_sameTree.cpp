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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if ((p == NULL) && (q == NULL)) return true;
    if ((p == NULL) || (q == NULL)) return false;
    if (p->val != q->val) return false;

    bool leftSame = isSameTree(p->left, q->left);
    bool rightSame = isSameTree(p->right, q->right);

    return leftSame && rightSame;
}

int main(){

    return 0;
}