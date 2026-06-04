#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

bool isValid(string& s){
    stack<char> stk;
    int n = s.size();

    for(int i=0; i<n; i++){
        char ch = s[i];
        if (ch=='(' || ch=='{' || ch=='['){
            stk.push(ch);
        }else{
            if(stk.empty()){
                return false;
            }
            char top = stk.top();
            if((top=='(' && ch==')') || (top=='{' && ch=='}') || (top=='[' && ch==']')){
                stk.pop();
            }else{
                return false;
            }
        }
    }
    return (stk.empty());
}

// bool isValid(string& s){
//     stack<char> stk;
//     int n = s.size();

//     vector<char> stBrac = {'(', '{', '['};
//     vector<char> endBrac = {')', '}', ']'};

//     for(int i=0; i<n; i++){
//         for(int j=0; j<3; j++){
//             if(s[i] == stBrac[j]){
//                 stk.push(stBrac[j]);
//                 continue;
//             }
//         }
//         for(int j=0; j<3; j++){
//             if(stk.empty() && s[i] == endBrac[j]){
//                 return false;
//             }
//             if(!stk.empty() && s[i] == endBrac[j]){
//                 if(stk.top() == stBrac[j]){
//                     stk.pop();
//                     continue;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//     }
//     return (stk.empty());
// }

int main(){
    string s = "((({]})))";
    cout<<isValid(s);

    return 0;
}