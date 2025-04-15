#include <iostream>
using namespace std;

long long int reverse(int num){
    unsigned long long int reversedNum=0;
    int i=num;
    if(num<0){
        i*=(-1);
    }
    for(i; i>0; i/=10){
        reversedNum = reversedNum*10 + (i%10);
    }
    if(num<0){
        return reversedNum*(-1);
    }
    return reversedNum;
}

int main(){
    int number;
    cin>>number;

    cout<<reverse(number);
    return 0;
}