#include <iostream>
using namespace std;

void breakCycle(Node* head){
    //Check for cycle
    Node* slowPtr = head, *fastPtr = head;
    bool isCycle = false;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
        return;
    }

    //We already have the meetup position
    if(fastPtr == head){        //Special case: The cycle is a round loop
        while(fastPtr->next != slowPtr){
            fastPtr = fastPtr->next;
        }
        fastPtr->next = NULL;
    }
    else{                       //Case where there's a open branch along with the cycle
        slowPtr = head->next;
        while(fastPtr->next != slowPtr){
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        fastPtr->next = NULL;
    }
}

int main(){
        
    return 0;
}