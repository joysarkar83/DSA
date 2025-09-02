#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

// Approach 1
// string reverseWords(string& s) {
//     string newStr;
//     stack<char> currWord;
//     for(char i:s){
//         if(i == ' '){
//             while(!currWord.empty()){
//                 newStr += currWord.top();
//                 currWord.pop();
//             }
//             newStr += ' ';
//         }
//         else{
//             currWord.emplace(i);
//         }
//     }
//     while(!currWord.empty()){
//         newStr += currWord.top();
//         currWord.pop();
//     }
//     return newStr;
// }


//Approach 2
string reverseWords(string& s) {
    string newStr;
    string currWord;
    for(char i:s){
        if(i == ' '){
            reverse(currWord.begin(), currWord.end());
            newStr.append(currWord);
            newStr += ' ';
            currWord.erase();
        }
        else{
            currWord += i;
        }
    }
    reverse(currWord.begin(), currWord.end());
    newStr.append(currWord);
    return newStr;
}


int main(){
    return 0;
}