#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool stGlobal = 1;

    for(int i=1; i<=n; i++){
        int stLocal = stGlobal;
        for(int j=0; j<i; j++){
            cout << stLocal;
            if(stLocal){
                stLocal = 0;
            }
            else{
                stLocal = 1;
            }
        }
        if(stGlobal){
            stGlobal = 0;
        }
        else{
            stGlobal = 1;
        }
        cout<<"\n";
    }

    return 0;
}