#include <iostream>
using namespace std;
int main(){

    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i=height; i>0; i--){
        for(int j=1; j<=(height-i+1); j++){
            cout<<j<<" ";
        }

        for(int j=1; j<=(i*2)-2; j++){
            cout<<"  ";
        }

        for(int j=(height-i+1); j>=1; j--){
            cout<<j<<" ";
        }

        cout<<"\n";
    }

    return 0;
}