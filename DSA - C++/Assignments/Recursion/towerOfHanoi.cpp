#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A = 'A', char B = 'B', char C = 'C'){
    if(n==1){
        cout<<"Moved from "<<A<<" to "<<C;
    }
    towerOfHanoi(n-1, A, C, B);
    cout<<"Moved from "<<A<<" to "<<B;
    towerOfHanoi(n-1, B, A, C);
    cout<<"Moved from "<<B<<" to "<<C;
}

int main(){
    int n = 7;

    towerOfHanoi(n);

    return 0;
}