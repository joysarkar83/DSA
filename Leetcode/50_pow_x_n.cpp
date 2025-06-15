#include <iostream>
#include <cmath>
using namespace std;

double myPow(double x, long long int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        x = 1/x;
        n *= (-1);
    }

    double result = 1.0;
    while(n>0){
        if(n % 2 == 1){
            result *= x;
            n--;
        }
        x *= x;
        n /= 2;
    }
    return result;
}

int main(){
    cout<<myPow(2.0, 10);

    return 0;
}