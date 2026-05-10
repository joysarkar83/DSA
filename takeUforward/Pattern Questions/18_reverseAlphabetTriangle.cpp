#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    char ch = 'A' + (n-1);

    for(int i=0; i<n; i++){
        char c = ch-i;
        for(int j=0; j<=i; j++){
            cout<<c++<<" ";
        }
        cout<<'\n';
    }

    return 0;
}