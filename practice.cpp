#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& array){
    int n = array.size();
    for(int i=0; i<n-1; i++){
        bool sortReq = false;
        for(int j=0; j<n-1-i; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                sortReq = true;
            }
        }
        if(sortReq == false){
            break;
        }
    }
}

void selectionSort(vector<int>& array){
    int n = array.size();
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(array[j] < array[minIdx]){
                minIdx = j;
            }
        }
        swap(array[minIdx], array[i]);
    }
}

void insertionSort(vector<int> & array){
    int n = array.size();
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(array[j-1]>array[j]){
                swap(array[j-1], array[j]);
            }
        }
    }
}

void countingSort(vector<int>& array){
    int n = array.size();
    if(n==0){
        return;
    }

    int maxValIdx = 0;
    for(int i=0; i<n; i++){
        if(array[i]>array[maxValIdx]){
            maxValIdx = i;
        }
    }

    int maxVal = array[maxValIdx];
    vector<int> freq(maxVal+1, 0);
    
    for(int i=0; i<n; i++){
        freq[array[i]]++;
    }

    for(int freqIdx=0, mainIdx=0; freqIdx<maxVal+1; freqIdx++){
        while(freq[freqIdx]>0){
            array[mainIdx++] = freqIdx;
            freq[freqIdx]--;
        }
    }
}

//Divide & Conquer
void merge(vector<int>& array, int stIdx, int midIdx, int endIdx){
    vector<int> temp;
    int i = stIdx, j = midIdx+1;

    while((i <= midIdx) && (j <= endIdx)){
        if(array[i] <= array[j]){
            temp.emplace_back(array[i++]);
        }
        else{
            temp.emplace_back(array[j++]);
        }
    }
    
    while(i <= midIdx){
        temp.emplace_back(array[i++]);
    }
    
    while(j <= endIdx){
        temp.emplace_back(array[j++]);
    }

    //Copying into main array
    for(int m=stIdx, n=0; m<=endIdx; m++, n++){
        array[m] = temp[n];
    }
}

void mergeSort(vector<int>& array, int stIdx, int endIdx){
    if(stIdx >= endIdx){
        return;
    }
    
    int midIdx = stIdx + ((endIdx-stIdx)/2);

    mergeSort(array, stIdx, midIdx);
    mergeSort(array, midIdx+1, endIdx);

    merge(array, stIdx, midIdx, endIdx);
}

int main(){

    vector<int> arr = {1,3,4,5,2,3,1,4,2};

    // bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    // countingSort(arr);
    mergeSort(arr, 0, (arr.size()-1));

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}