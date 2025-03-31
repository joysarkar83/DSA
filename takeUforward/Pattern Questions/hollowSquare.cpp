#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side-length: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<=n; j++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for(int i=1; i<=n-2; i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}