#include <iostream>
#include <vector>
using namespace std;

Node* findIntersection(Node* head1, Node* head2){
    vector<Node*> addresses;
    for(Node* ptr = head1; ptr != NULL; ptr=ptr->next){
        addresses.push_back(ptr);
    }
    
    for(Node* ptr = head2; ptr != NULL; ptr=ptr->next){
        for(int i = 0; i<addresses.size(); i++){
            if(ptr == addresses[i]){
                return ptr;
            }
        }
    }
    return NULL;
}

int main(){
    return 0;
}