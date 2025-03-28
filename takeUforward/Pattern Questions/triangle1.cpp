#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter length: ";
    cin>>len;

    for(int i=1; i<=len; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}