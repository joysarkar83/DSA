#include <iostream>
using namespace std;

int clear_i_thBit(int num, int i){
    int bitMask = 1<<i;
    bitMask = ~bitMask;
    return num & bitMask;
}

int main(){
    int num = 7;
    int i = 2;
    cout<<clear_i_thBit(num, i);
    return 0;
}