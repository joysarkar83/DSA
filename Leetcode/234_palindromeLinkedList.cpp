#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(ListNode* head) {
    ListNode* temp = head;
    vector<int> data;
    while(temp != NULL){
        data.emplace_back(temp->val);
        temp = temp->next;
    }

    int n = data.size();
    for(int i=0, j=n-1; i<j; i++, j--){
        if(data[i] != data[j]){
            return false;
        }
    }
    return true;
}

int main(){
    return 0;
}