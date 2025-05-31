#include <iostream>
#include <string>
using namespace std;

bool palindromeCheck(string str, int st, int end){
    if(st>=end){
        return true;
    }
    if(str[st] != str[end]){
        return false;
    }
    return palindromeCheck(str, st+1, end-1);
}

bool isPalindrome(string str){
    return palindromeCheck(str, 0, str.length()-1);
}

int main(){
    string str = "naman";

    cout<<isPalindrome(str);

    return 0;
}