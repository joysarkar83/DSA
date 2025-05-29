#include <iostream>
using namespace std;

int countGoodNumbers(long long n) {
    if(n==0){
        return 1;
    }
    if((n-1)%2==1){
        return (((long long)4 * countGoodNumbers(n-1))%1000000007);        
    }
    else{
        return (((long long)5 * countGoodNumbers(n-1))%1000000007);        
    }
}

int main(){

    cout<<countGoodNumbers(50);

    return 0;
}