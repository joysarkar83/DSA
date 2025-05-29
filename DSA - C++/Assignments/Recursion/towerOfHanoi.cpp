#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A = 'A', char B = 'B', char C = 'C'){
    if(n==1){
        cout<<"Moved from "<<A<<" to "<<C<<"\n";
        return;
    }
    towerOfHanoi(n-1, A, C, B);
    cout<<"Moved from "<<A<<" to "<<C<<"\n";

    towerOfHanoi(n-1, B, A, C);
}

int main(){
    int n = 3;

    towerOfHanoi(n);

    return 0;
}