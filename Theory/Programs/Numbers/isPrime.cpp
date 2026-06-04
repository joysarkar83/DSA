#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter N: ";
    cin>>num;
    
    if(num<=1){
        cout<<"Neither prime nor composite.";
    }
    else{
        bool isPrime = true;
        for(int i = 2 ; i*i<=num ; i++){
            if(num%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<"Prime";
        } else{
            cout<<"Composite";
        }
    }
    return 0;
}