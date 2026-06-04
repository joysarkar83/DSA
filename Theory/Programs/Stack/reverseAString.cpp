#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverse(stack<int>& s){
    
}

int main(){
    stack<char> stk;
    string str = "hello";

    for(int i = 0; i<str.size(); i++){
        stk.push(str[i]);
    }

    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}