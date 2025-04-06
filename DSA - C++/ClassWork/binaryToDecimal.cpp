#include <iostream>
#include <cmath>
using namespace std;

int convertToDecimal(int binary){
    int power=0, decimal=0;
    while(binary>0){
        decimal += binary%10 * pow(2, power);
        power++;
        binary /= 10;
    }
    return decimal;
}

int main(){
    int num;
    cout<<"Enter Binary: ";
    cin>>num;

    cout<<"Decimal >> "<<convertToDecimal(num);

    return 0;
}