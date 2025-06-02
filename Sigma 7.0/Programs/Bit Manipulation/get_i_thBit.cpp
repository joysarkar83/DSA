#include <iostream>
using namespace std;

int get_ithBit(int num, int i){
    int bitMask = 1 << i;
    if(num & bitMask){
        return 1;
    }
    return 0;
}

int main(){
    int num = 8;
    int i = 0;
    cout<<get_ithBit(num, i);
    return 0;
}