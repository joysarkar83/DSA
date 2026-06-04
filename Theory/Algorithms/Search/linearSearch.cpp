#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int find){
    for(int i=0; i<size; i++){
        if(array[i]==find){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {2,4,6,8,10,12,14,16,18,20};
    int arraySize = sizeof(array)/sizeof(int);
    int toFind = 10;

    cout<<"Found at index: "<<linearSearch(array, arraySize, toFind);

    return 0;
}