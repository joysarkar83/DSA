#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        char ch = 'A';
        for(int j=n-i; j>0; j--){
            cout<<ch++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}