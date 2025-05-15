#include <iostream>
using namespace std;

void printDecreasingNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<"\n";
    printDecreasingNum(n-1);
}

int main(){
    printDecreasingNum(5);
    return 0;
}