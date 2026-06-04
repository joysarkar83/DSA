#include <iostream>
using namespace std;

int sumN(int n){
    if(n==0){
        return 0;
    }
    return n + sumN(n-1);
}

int main(){
    int num = 6;
    cout<<"Sum upto "<<num<<" = "<<sumN(num);

    return 0;
}