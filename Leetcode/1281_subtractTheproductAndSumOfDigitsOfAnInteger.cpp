#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int prod = 1, sum = 0;

    while(n > 0){
        int val = n%10;
        prod *= val;
        sum += val;
        n /= 10;
    }

    return prod - sum;
}

int main(){

    return 0;
}