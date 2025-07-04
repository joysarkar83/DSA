#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseWords(string& s) {
    int n = s.size();
    stack<string> stk;
    string word = "";

    for(int i=0; i<n; i++){
        while (i<n && s[i] == ' ') i++;

        while (i<n && s[i] != ' '){
            word+=s[i];
            i++;
        }
        
        if(!word.empty()){
            stk.push(word);
            word = "";
        }
    }
    
    s="";
    while(!stk.empty()){
        s+=stk.top();
        stk.pop();
        s+=' ';
    }
    s.pop_back();
    return s;
}

int main(){
    return 0;
}