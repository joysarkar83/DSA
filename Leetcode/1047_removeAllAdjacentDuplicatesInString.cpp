#include <iostream>
#include <stack>
#include <string>
using namespace std;

string removeDuplicates(string& s) {
    int n = s.size();
    if(n<=1){
        return s;
    }

    stack<char> stk;
    for(char i:s){
        if(stk.empty()){
            stk.push(i);
        }
        else if(stk.top() == i){
            stk.pop();
        }
        else{
            stk.push(i);
        }
    }

    s="";
    while(!stk.empty()){
        s.push_back(stk.top());
        stk.pop();
    }

    n = s.size();
    for(int i=0; i<n/2; i++){
        swap(s[i], s[n-i-1]);
    }
    return s;
}

int main(){

    return 0;
}