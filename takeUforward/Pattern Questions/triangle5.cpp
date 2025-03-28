#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter length: ";
    cin>>len;

    for(int i=len; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }    
    return 0;
}