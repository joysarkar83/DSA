#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    if(s.length()%2!=0){
        return false;
    }
    stack<char> counter;
    for(int i=0; i<s.length(); i++){//4
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            counter.push(s[i]);
        }
        else if(!counter.empty() && counter.top()=='(' && s[i]==')' || !counter.empty() && counter.top()=='{' && s[i]=='}' || !counter.empty() && counter.top()=='[' && s[i]==']'){
            counter.pop();
        }else{
            return false;
        }
    }

    if(!counter.empty()){
        return false;
    }
    return true;
}


int main(){

    // string str = "(){}}{";
    string str = "([}}])";
    cout<<isValid(str);

}