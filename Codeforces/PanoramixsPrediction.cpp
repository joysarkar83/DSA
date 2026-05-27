#include <iostream>
using namespace std;

bool isPrime(int& n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int x, y;
    cin>>x>>y;
    x++;

    while(x<=y){
        if(isPrime(x) && x==y){
            cout<<"YES";
            return 0;
        }
        else if(isPrime(x) && x!=y){
            cout<<"NO";
            return 0;
        }
        x++;
    }
    cout<<"NO";

    return 0;
}