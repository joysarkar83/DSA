#include <iostream>
using namespace std;

int wholeSquare(int a, int b){
    return ((a*a)+(b*b)+(2*a*b));
}

int main(){
    int a=0,b=0;
    cout<<"Enter a,b (a^2+b^2+2ab): ";
    cin>>a>>b;

    cout<<"Whole-square: "<<wholeSquare(a,b);
    return 0;
}