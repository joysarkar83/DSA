#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int i=0, copy=n;
    while(n>0){
        i=(i*10)+(n%10);
        n/=10;
    }
    if(i==copy){
        return true;
    } else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    if(isPalindrome(n)){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}