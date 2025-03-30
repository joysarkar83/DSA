#include <iostream>
using namespace std;
int main(){
    int height, halfHeight;
    cout<<"Enter height: ";
    cin>>height;
    halfHeight = height / 2;

    for(int k=1; k<=halfHeight; k++){
        for(int i=halfHeight-k ; i>0 ; i--){
            cout<<" ";
        }
        for(int j=1; j<=((2*k)-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int k=halfHeight; k>0; k--){
        for(int i=halfHeight-k; i>0; i--){
            cout<<" ";
        }
        for(int j=((2*k)-1); j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}