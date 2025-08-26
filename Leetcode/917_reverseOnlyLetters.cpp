#include <iostream>
using namespace std;

bool isChar(char& ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

string reverseOnlyLetters(string& s) {
    int n = s.size();
    int st = 0, end = n-1;

    while(st<end){
        if(isChar(s[st]) && isChar(s[end])){
            swap(s[st], s[end]);
            st++; end--;
        }
        else if(!isChar(s[st])){
            st++;
        }
        else if(!isChar(s[end])){
            end--;
        }
    }

    return s;
}

int main(){

    return 0;
}