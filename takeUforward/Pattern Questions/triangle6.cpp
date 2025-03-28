#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter height: ";
    cin>>height;

    for(int k=1; k<=height; k++){
        for(int i=height-k; i>0; i--){
            cout<<" ";
        }
        for(int j=1; j<=(2*k)-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}