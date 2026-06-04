#include <iostream>
using namespace std;

int clearIBits(int num, int i){
    int bitMask = (~0 << i);    //to create something like ...1111111110000 for i=4
    return (num & bitMask);
}

int main(){
    int num = 17;
    int i = 3;

    cout<<clearIBits(num, i);

    return 0;
}