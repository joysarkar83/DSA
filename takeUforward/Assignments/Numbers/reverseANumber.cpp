#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x){
    long long int reversedX = 0;
    bool isNegative;
    if(x < 0){
        isNegative = true;
        x *= (-1);
    }else{
        isNegative = false;
    }

    while(x > 0){
        reversedX = reversedX*10 + x%10;
        x = x/10;
    }

    if(isNegative){
        reversedX = reversedX * (-1);
    }

    if((reversedX < ((-1)*pow(2,31))) || (reversedX > (pow(2,31)-1))){
        return 0;
    }
    else{
        return reversedX;
    }
}

int main(){
    int number;
    cin>>number;

    cout<<reverse(number);
    return 0;
}