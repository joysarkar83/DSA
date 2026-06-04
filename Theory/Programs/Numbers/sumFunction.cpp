#include <iostream>
using namespace std;

int sumOf(int a, int b){
    return a+b;
}

int main(){
    int a=0,b=0;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<sumOf(a,b);
    return 0;
}