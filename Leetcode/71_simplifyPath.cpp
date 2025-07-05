#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

string simplifyPath(string& path) {
    int n = path.size();
    stack<string> stk;
    
    //Preparing the Stack
    for(int i = 0; i<n; i++){
        string word = "";

        //Handling Slashes
        if(path[i] == '/'){
            continue;
        }

        //Handling Dots
        while(i<n && path[i] != '/'){
            word+=path[i];
            i++;
        }

        if(word == "."){
            continue;
        }
        else if(word == ".."){
            if(!stk.empty()){
                stk.pop();
            }
            continue;
        }
        else{
            stk.push(word);
        }
    }

    //Extracting words from the stack
    path = "";
    while(!stk.empty()){
        path = "/" + stk.top() + path;
        stk.pop();
    }
    
    if(path == "") path = "/";

    return path;
}

int main(){
string s = "/../";

    cout<<simplifyPath(s);

    return 0;
}