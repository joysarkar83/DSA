#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};

class List{
public:
    ListNode *head, *tail;

    List(){
        head = tail = NULL;
    }

    ListNode* buildList(int n){
        ListNode* ptr = new ListNode(1);
        head = ptr;
        for(int i=2; i<=n; i++){
            ListNode* curr = new ListNode(i);
            ptr->next = curr;
            ptr = curr;
        }
        tail = ptr;
        tail->next = head;
        return head;
    }
};

int findTheWinner(int n, int k) {
    if(k==1){
        return n;
    }

    List LL;
    ListNode* ptr = LL.buildList(n);

    int track = 1;
    while(n > 1){
        if(track == k-1){
            ListNode* toDel = ptr->next;
            ptr->next = ptr->next->next;
            toDel->next = NULL;
            delete toDel;
            n--;
            track = 0;
        }
        ptr = ptr->next;
        track++;
    }
    return ptr->val;
}

int main(){
    List LL;
    ListNode* head = LL.buildList(10);

    cout<<findTheWinner(5,2);

    return 0;
}