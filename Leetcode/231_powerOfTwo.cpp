#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<0) return false;
    return ((__builtin_popcount(n))==1);
}

int main(){
    return 0;
}