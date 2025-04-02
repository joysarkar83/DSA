#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    //Uppper Half
    for(int i=0; i<n; i++){
        for(int j=n; j>n-i; j--){
            cout<<j<<" ";
        }

        for(int j=((2*n)-1)-(2*i); j>0; j--){
            cout<<n-i<<" ";
        }

        for(int j=i; j>0; j--){
            cout<<n-j+1<<" ";
        }
        cout<<"\n";
    }

    //Lower Half
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<n-j<<" ";
        }

        for(int j=2; j<2*i+1; j++){
            cout<<i+1<<" ";
        }

        for(int j=0; j<n-i; j++){
            cout<<j+i+1<<" ";
        }
        cout<<"\n";
    }

    return 0;
}