#include <iostream>
#include <cmath>
using namespace std;

int answer = 1;

int countGoodNumber(long long n){
    if(n==0){
        return answer % (1000000007);
    }
    if((n-1)%2==1){
        answer *= 4;
        countGoodNumber(n-1);
    }
    else{
        answer *= 5;
        countGoodNumber(n-1);
    }
}

int main(){

    cout<<countGoodNumber(50);

    return 0;
}