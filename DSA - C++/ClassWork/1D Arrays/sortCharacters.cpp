#include <iostream>
using namespace std;

void print(char array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<"\t";
    }
}

void insertionSort(char array[], int size){
    for(int i=1; i<size; i++){
        for(int j=i; j>0; j--){
            if(array[j-1]>array[j]){
                swap(array[j-1],array[j]);
            }
        }
    }
}

int main(){
    char alpha[] = {'f','b','a','e','c','d'};

    insertionSort(alpha, 6);

    print(alpha, 6);    
    return 0;
}