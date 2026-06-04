#include <iostream>
using namespace std;

int minInArray(int array[], int size){
    int min = array[0];
    for (int i=1; i<size; i++){
        if (array[i]<min){
            min = array[i];
        }
    }
    return min;
}

int main(){
    int arraySize;
    cout<<"Enter array size: ";
    cin>>arraySize;

    int array[arraySize];

    for (int i=0; i<arraySize; i++){
        cout<<"Enter element #"<<i+1<<": ";
        cin>>array[i];
    }

    cout<<"Min Value: "<<minInArray(array, arraySize);

    return 0;
}