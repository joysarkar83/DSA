#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    //Normalization
    string clean;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }
        if(str[i]>='a' && str[i]<='z' || str[i] >= '0' && str[i] <= '9'){
            clean += str[i];
        }
    }

    //Palindrome check
    for(int start=0, end=clean.length()-1; start<=end; start++, end--){
        if(clean[start] != clean[end]){
            return false;
        }
    }
    return true;
}

int main(){
    // string str = "A man, a plan, a canal: Panama";
    string str = "0P";
    cout<<isPalindrome(str);
    return 0;
}