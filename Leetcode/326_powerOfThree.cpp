#include <iostream>
using namespace std;

// Loop approach
bool isPowerOfThree(int n) {
    if(n <= 0) return false;
    if(n == 1) return true;
    long long int i=1;
    while(i != n){
        if(i > n) return false;
        i *= 3;
    }
    return true;
}

int main(){

    return 0;
}