#include <iostream>
using namespace std;

// int clearRange(int num, int lowRange, int highRange){
//     int bitMask = 1<<lowRange, difference = highRange - lowRange + 1;
//     while (difference>0){
//         num = num & (~bitMask);
//         bitMask = bitMask<<1;
//         difference--;
//     }
//     return num;
// }

int clearRange(int num, int lowRange, int highRange){
    int a = (~0) << (highRange+1);
    int b = (1 << lowRange) - 1;
    int bitMask = a | b;
    return (num & bitMask);
}

int main(){
    int num = 15;
    int lowRange = 1;
    int highRange = 2;

    cout<<clearRange(num, lowRange, highRange);

    return 0;
}