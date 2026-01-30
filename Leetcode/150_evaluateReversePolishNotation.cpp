#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> stk;
    for(string& str:tokens){
        if (str == "+" || str == "-" || str == "*" || str == "/"){
            int val2 = stk.top();
            stk.pop();
            int val1 = stk.top();
            stk.pop();
            
            if(str == "+"){
                stk.push(val1 + val2);
            }
            else if(str == "-"){
                stk.push(val1 - val2);
            }
            else if(str == "*"){
                stk.push(val1 * val2);
            }
            if(str == "/"){
                stk.push(val1 / val2);
            }
        } else{
            stk.push(stoi(str));
        }
    }
    return stk.top();
}

int main(){
    return 0;
}