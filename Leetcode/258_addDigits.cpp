#include <iostream>
using namespace std;

int addDigits(int& num) {
    int n = num;
    while(n/10 != 0){
        int rem = 0;
        while(n != 0){
            rem += n % 10;
            n /= 10;
        }
        n = rem;
    }
    return n;
}

int main(){
    int n = 38;

    cout<<addDigits(n);

    return 0;
}