#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num<0){
        cout<<"Factorial doesn't exist for negative numbers.";
    }
    else if(num == 0 || num == 1){
        cout<<"Factorial = 1";
    }
    else{
        long long int factorial = 1;
        for(int i = num ; i > 1 ; i--){
            factorial *= i;
        }
        cout<<"Factorial = "<<factorial<<"\n";
    }
    return 0;
}