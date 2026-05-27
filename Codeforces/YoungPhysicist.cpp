#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    int xf, yf, zf;
    for(int i=0; i<n; i++){
        cin>>xf>>yf>>zf;
        x+=xf;
        y+=yf;
        z+=zf;
    }
    if(x == 0 && y == 0 && z == 0){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}