#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//Normal vector approach
// bool isPalindrome(ListNode* head) {
//     ListNode* temp = head;
//     vector<int> data;
//     while(temp != NULL){
//         data.emplace_back(temp->val);
//         temp = temp->next;
//     }

//     int n = data.size();
//     for(int i=0, j=n-1; i<j; i++, j--){
//         if(data[i] != data[j]){
//             return false;
//         }
//     }
//     return true;
// }


//Stack Approach
//Stack pops in reverse order
bool isPalindrome(ListNode* head){
    ListNode* ptr = head, * tail = NULL;
    stack<int> stk;

    while(ptr!=NULL){
        if(ptr->next == NULL) tail = ptr;
        stk.push(ptr->val);
        ptr = ptr->next;
    }
    
    ptr = head;
    while(ptr!=NULL){
        if(stk.top() == ptr->val){
            stk.pop();
        }
        else{
            return false;
        }
        ptr = ptr->next;
    }

    return stk.empty();
}


int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);
    l.printListNode();
    cout<<isPalindrome(l.head);
    return 0;
}