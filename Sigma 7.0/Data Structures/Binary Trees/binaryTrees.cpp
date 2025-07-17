#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left, * right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}


int main(){
    vector<int> Nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    cout<<buildTree(Nodes)->data;

    return 0;
}