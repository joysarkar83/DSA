#include <iostream>
using namespace std;

bool isSorted(int array[], int size, int i){
    if(i == size-1){                    //Check if last element, single element means sorted
        return true;
    }
    if(array[i] >= array[i+1]){
        return false;
    }
    return (isSorted(array, size, i+1));
}

int main(){
    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10] = {1,2,3,5,4,6,7,8,9,10};

    cout<<isSorted(array1, 10, 0);
    cout<<"\n";
    cout<<isSorted(array2, 10, 0);

    return 0;
}