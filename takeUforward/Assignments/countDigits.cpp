#include <iostream>
using namespace std;

int countDigits(int num){
    int count=0, remainder;
    for(int i=num; i>0; i/=10){
        remainder = i%10;
        if(remainder == 0){
            continue;
        }else if(num%remainder==0){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    cin>>num;

    cout<<countDigits(num);

    return 0;
}