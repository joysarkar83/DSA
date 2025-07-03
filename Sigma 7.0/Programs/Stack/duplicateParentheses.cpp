#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isDuplicate(string& s){
    int n = s.size();
    stack<char> stk;

    for(int i=0; i<n; i++){
        if(s[i] != ')'){
            stk.push(s[i]);
        }else{
            if(stk.top()=='('){
                return true;
            }
            while(stk.top() != '('){
                stk.pop();
            }
            stk.pop();
        }
    }
    return false;
}

int main(){
    string s = "(a+b)";

    cout<<isDuplicate(s);

    return 0;
}