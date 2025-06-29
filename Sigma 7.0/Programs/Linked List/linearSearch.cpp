#include <iostream>
using namespace std;

int searchItr(int target){
    Node* ptr = head;
    int i=0;
    while(ptr != NULL){
        if(ptr->data == target){
            return i;
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}

int main(){
        
    return 0;
}