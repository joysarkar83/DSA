#include <iostream>
#include <cmath>
using namespace std;

int smallestNumber(int& n) {
    int binDig = 0;
    while(n > 0){
        binDig++;
        n /= 2;
    }
    n = 0;
    while(binDig != 0){
        n += pow(2, binDig);
        binDig--;
    }
    return n;
}

int main(){

    return 0;
}