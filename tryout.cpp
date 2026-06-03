#include <iostream>
#include <vector>
using namespace std;

int nFibonacci(int n){
    if(n <= 1){
        return n;
    }
    return nFibonacci(n-1) + nFibonacci(n-2);
}

int main(){
    cout<<nFibonacci(8);

    return 0;
}