#include <iostream>
#include <cmath>
using namespace std;

int convertToBinary(int decimal){
    int binary=0, power=0;
    while (decimal > 0){
        binary += decimal%2 * pow(10,power);
        power++;
        decimal /= 2;
    }
    return binary;
}

int main(){
    int num;
    cout<<"Enter Decimal: ";
    cin>>num;
    cout<<"Binary >> "<<convertToBinary(num);
    return 0;
}