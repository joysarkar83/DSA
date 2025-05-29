#include <iostream>
using namespace std;

int friendsPairing(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    return friendsPairing(n-1) + (friendsPairing(n-2) * (n-1));
}

int main(){

    cout<<friendsPairing(3);

    return 0;
}