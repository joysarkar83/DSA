#include <iostream>
using namespace std;
int main(){
    long long int a, b;
    cin >> a >> b;
    
    int i = 0;
        for(; a <= b; i++){
            a*=3;
            b*=2;
        }
    cout<<i;
    return 0;
}