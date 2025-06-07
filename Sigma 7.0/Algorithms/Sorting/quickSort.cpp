#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& array, int stIdx, int endIdx) {
    int i = stIdx;
    int pivotVal = array[endIdx];

    for(int j = stIdx; j < endIdx; j++){
        if(array[j] <= pivotVal){
            swap(array[i], array[j]);
            i++;
        }
    }
    swap(array[i], array[endIdx]);                  // place pivot at its correct position
    return i;                                       // return final pivot index
}

void quickSort(vector<int>& array, int stIdx, int endIdx){
    if(stIdx >= endIdx){
        return;
    }

    int pivotIdx = partition(array, stIdx, endIdx);

    quickSort(array, stIdx, pivotIdx-1);
    quickSort(array, pivotIdx+1, endIdx);
}

int main(){
    vector<int> arr = {6,3,7,5,2,4};

    quickSort(arr, 0, arr.size()-1);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}