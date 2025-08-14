#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

string clearDigits(string& s) {
    stack<char> stk;

    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])) stk.push(s[i]);
        else if(!stk.empty()) stk.pop();
    }

    cout<<"working\n";

    string str;
    while(!stk.empty()){
        str.push_back(stk.top());
        stk.pop();
    }

    reverse(str.begin(), str.end());
    return str;
}

int main(){

    return 0;
}