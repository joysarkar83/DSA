#include <iostream>
using namespace std;
int main(){
    int counter=1, height;
    cout<<"Enter height: ";
    cin>>height;

    for(int i=1; i<=height; i++){
        for(int j=1; j<=i; j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<"\n";
    }
    return 0;
}