#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longestValidParentheses(string s){
    int leftBracket = 0, rightBracket = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            leftBracket++;
        }
        else if(s[i] == ')' && leftBracket>0){
            rightBracket++;
        }
    }
    return min(leftBracket, rightBracket)*2;
}

int main(){
    string s = ")(";

    cout<<longestValidParentheses(s);

    return 0;
}