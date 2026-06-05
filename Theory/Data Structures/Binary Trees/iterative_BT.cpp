#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left, * right;

    TreeNode(int& val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(TreeNode* root){
    if(root == NULL) return;

    stack<TreeNode*> stk;
    stk.push(root);

    while(!stk.empty()){
        int size = stk.size();
        for(int i=0; i<size; i++){
            TreeNode* currNode = stk.top();
            stk.pop();
            cout<<currNode->val<<" ";
            if(currNode->right != NULL) stk.push(currNode->right);
            if(currNode->left != NULL) stk.push(currNode->left);
        }
    }
}

void InOrder(TreeNode* root){
    stack<TreeNode*> stk;
    TreeNode* currNode = root;

    while(currNode != NULL || !stk.empty()){
        while(currNode != NULL){
            stk.push(currNode);
            currNode = currNode->left;
        }

        currNode = stk.top();
        stk.pop();
        cout<<currNode->val<<" ";
        currNode = currNode->right;
    }
}

void PostOrder_2Stacks(TreeNode* root){
    if(root == NULL) return;
    stack<TreeNode*> stk1, stk2;
    stk1.push(root);

    while(!stk1.empty()){
        TreeNode* currNode = stk1.top();
        stk1.pop();
        stk2.push(currNode);
        if(currNode->left != NULL) stk1.push(currNode->left);
        if(currNode->right != NULL) stk1.push(currNode->right);
    }

    while(!stk2.empty()){
        cout<<stk2.top()->val<<" ";
        stk2.pop();
    }
}

void PostOrder_1Stack(TreeNode* root){
    stack<TreeNode*> stk;
    TreeNode* currNode = root;
    
    while(currNode != nullptr || !stk.empty()){
        if(currNode != nullptr){
            stk.push(currNode);
            currNode = currNode->left;
        }
        else{
            TreeNode* temp = stk.top()->right;
            if(temp == nullptr){
                temp = stk.top();
                stk.pop();
                cout << temp->val << " ";
                while(!stk.empty() &&
                    temp == stk.top()->right){
                    temp = stk.top();
                    stk.pop();
                    cout << temp->val << " ";
                }
            }
            else{
                currNode = temp;
            }
        }
    }
}

int main(){

    return 0;
}