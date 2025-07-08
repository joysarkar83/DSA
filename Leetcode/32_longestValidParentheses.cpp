#include <iostream>
#include <string>
#include <stack>
using namespace std;

int longestValidParentheses(string& s) {
    stack<int> stk;
    stk.push(-1);
    int maxLen = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            stk.push(i);
        } else {
            stk.pop();
            if (stk.empty()) {
                stk.push(i);
            } else {
                maxLen = max(maxLen, i - stk.top());
            }
        }
    }

    return maxLen;
}

int main(){
    string s = "(()";

    cout<<longestValidParentheses(s);

    return 0;
}