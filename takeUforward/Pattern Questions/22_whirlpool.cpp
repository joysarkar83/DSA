#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=0; i<n*2-1; i++){
        cout<<n;
    }
    cout<<'\n';
    for(int i=1; i<n; i++){
        int num = n;
        for(int j=1; j<=i; j++){
            cout<<num--;
        }
        for(int j=0; j<(n-i)*2-1; j++){
            cout<<num;
        }
        num++;
        for(int j=1; j<=i; j++){
            cout<<num++;
        }
        cout<<"\n";
    }
    for(int i=2; i<n; i++){
        int num = n;
        for(int j=n-i; j>0; j--){
            cout<<num--;
        }
        for(int j=0; j<i*2-1; j++){
            cout<<num;
        }
        num++;
        for(int j=n-i; j>0; j--){
            cout<<num++;
        }

        cout<<"\n";
    }
    for(int i=0; i<n*2-1; i++){
        cout<<n;
    }

    return 0;
}