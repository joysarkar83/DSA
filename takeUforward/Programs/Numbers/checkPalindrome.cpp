#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    long long int rev = 0;
    int copy = x;
    if(x<0){
        return false;
    }
    while(x > 0){
        rev = rev*10 + x%10;
        x = x/10;
    }
    if(rev == copy){
        return true;
    }
    return false;
}

int main(){
    cout<<isPalindrome(1234567899);
    return 0;
}