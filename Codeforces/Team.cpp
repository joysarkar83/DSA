#include <iostream>
using namespace std;
int main(){
    int n, res = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y, z;
        cin>>x>>y>>z;

        if(x+y+z >=2){
            res++;
        }
    }
    cout<<res;

    return 0;
}