#include <iostream>
using namespace std;

int update_i_thBit(int num, int i, int val){
    // int bitMask = 1<<i;
    // if(val==0){
    //     bitMask = ~bitMask;
    //     return (num & bitMask);
    // }
    // else{
    //     return (num | bitMask);
    // }

    num = num & ~(1<<i);        //Clear ith value

    num = num | (val<<i);

    return num;
}

int main(){
    int num = 7;
    int i = 2;
    int val = 0;
    cout<<update_i_thBit(num, i, val);
    return 0;
}