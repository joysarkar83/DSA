#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter length: ";
    cin>>len;

    for(int i=len; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}