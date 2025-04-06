#include <iostream>
using namespace std;

int maxInArray(int array[], int size){
    int max = array[0];
    for (int i=1; i<size; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
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

    cout<<"Max Value: "<<maxInArray(array, arraySize);

    return 0;
}