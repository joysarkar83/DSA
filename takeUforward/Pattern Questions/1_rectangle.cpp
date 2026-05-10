#include <iostream>
using namespace std;

int main(){
    int nRows, nCols;
    cin >> nRows >> nCols;

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}