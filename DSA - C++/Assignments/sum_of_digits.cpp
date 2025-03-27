#include <iostream>
using namespace std;

int reverse(int num){
    int result = 0;
    while(num>0){
        result = (result*10) + (num%10);
        num/=10;
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter number to reverse: ";
    cin>>num;

    cout<<"Reversed: "<<reverse(num)<<"\n";
    return 0;
}