#include <iostream>
using namespace std;

int set_ithBit(int num, int i){
    int bitMask = 1 << i;
    return num | bitMask;
}

int main(){
    int num = 8;
    int i = 2;
    cout<<set_ithBit(num, i);
    return 0;
}