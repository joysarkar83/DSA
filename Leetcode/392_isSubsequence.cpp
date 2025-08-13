#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isSubsequence(string& s, string& t) {
    stack<char> stk;
    for(int i = 0; i < t.size(); i++){
        stk.push(t[i]);
    }

    int sIdx = s.size()-1;
    while(sIdx >= 0){
        if(stk.empty()) break;
        if(stk.top() == s[sIdx]){
            sIdx--;
        }
        stk.pop();
    }
    return (sIdx == -1);
}

int main(){

    return 0;
}