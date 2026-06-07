#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=0; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        int j=0;
        for(; j<=i; j++){
            if(i == 0){
                cout<<j;
            }else{
                cout<<j<<" ";
            }
        }
        j-=2;
        for(; j>=0; j--){
            if(j == 0){
                cout<<j;
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        int j=0;
        for(; j<=i; j++){
            cout<<j<<" ";
        }
        j-=2;
        for(; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<0;
        cout<<"\n";
    }
    for(int i=0; i<n; i++){
        cout<<"  ";
    }
    cout<<0;
    
    return 0;
}