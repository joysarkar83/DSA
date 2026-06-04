#include <iostream>
using namespace std;

int searchRecHelper(Node* ptr, int target){
    if(ptr == NULL){
        return -1;
    }
    if(ptr->data == target){
        return 0;
    }
    int idx = searchRecHelper(ptr->next, target);
    if(idx == -1){
        return -1;
    }
    return idx + 1;
}

int searchRec(int target){
    Node* ptr = head;
    searchRecHelper(ptr, target);
}

int main(){
        
    return 0;
}