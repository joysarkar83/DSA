#include <iostream>
using namespace std;

int fastExponentiation(int num, int pow){
    int answer = 1;
    while(pow>0){
        if(pow & 1){
            answer *= num;
        }
        num = num * num; 
        pow = pow>>1;
    }
    return answer;
}

int main(){
    int number = 3;
    int power = 5;

    cout<<fastExponentiation(number, power);

    return 0;
}