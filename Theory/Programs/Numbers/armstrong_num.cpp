#include <iostream>
using namespace std;
int main(){
    int num, sum=0, digit;
    cout<<"Enter number (3 digit): ";
    cin>>num;

    for(int i = num ; i > 0 ; i/=10){
        digit = i%10;
        sum += digit*digit*digit;
    }

    if (sum == num){
        cout<<"Armstrong number";
    } else {
        cout<<"Not an armstrong number";
    }

    return 0;
}