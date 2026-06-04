#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char array[], int len){
    int start=0, end=len-1;
    while(start<end){
        if(array[start] != array[end]){
            return false;
        }
        start++;end--;
    }
    return true;
}

int main(){
    char words[] = "hululuh"; 

    cout<<isPalindrome(words, strlen(words));
    return 0;

}