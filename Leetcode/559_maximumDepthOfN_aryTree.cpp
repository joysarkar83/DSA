#include <iostream>
#include <vector>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

int maxDepthHelper(Node* root, int currDepth){
    if(root == NULL){
        return currDepth;
    }
    int maxVal = currDepth;
    for(auto itr : root->children){
        maxVal = max(maxVal, maxDepthHelper(itr, currDepth+1));
    }
    return maxVal;
}

int maxDepth(Node* root) {
    if(root == NULL){
        return 0;
    }
    int currDepth = 1;
    return maxDepthHelper(root, currDepth);
}

int main(){

    return 0;
}