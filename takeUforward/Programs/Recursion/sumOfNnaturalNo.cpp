#include <iostream>
using namespace std;

int sumOf(int n){
    if(n==0){
        return 0;
    }
    return n + sumOf(n-1);
}

int main(){

    cout<<sumOf(3);

    return 0;
}