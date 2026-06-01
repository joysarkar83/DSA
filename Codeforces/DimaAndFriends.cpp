#include <iostream>
using namespace std;

int main(){
    int n, fings = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int curr;
        cin >> curr;
        fings += curr;
    }
    n++;
    
    int res = 0;
    for(int i=1; i<=5; i++){
        if(((fings+i) % n) != 1){
            res++;
        }
    }
    cout<<res;
    return 0;    
}