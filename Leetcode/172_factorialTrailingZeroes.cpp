#include <iostream>
using namespace std;

int trailingZeroes(int n) {
    int k = 0;
    while(n > 0){
        k += (n/5);
        n /= 5;
    }
    return k;
}

int main(){

    return 0;
}