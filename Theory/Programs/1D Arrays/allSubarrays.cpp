#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5,6,7};
    int arraySize = sizeof(array)/sizeof(int);

    for(int i=0; i<arraySize; i++){
        for(int j=i; j<arraySize; j++){
            for(int k=i; k<=j; k++){
                cout<<array[k];
            }
            cout<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}