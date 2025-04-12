#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void bubbleSortDescending(vector<int> &array){
    for(int i=0; i<array.size()-1; i++){
        bool requiresSorting = false;
        for(int j=0; j<array.size()-1-i; j++){
            if(array[j]<array[j+1]){
                swap(array[j],array[j+1]);
                requiresSorting = true;
            }
        }
        if(!requiresSorting){
            break;
        }
    }
}

void selectionSortDescending(vector<int> &array){
    for(int i=0; i<array.size()-1; i++){
        int max = i;
        for(int j=i+1; j<array.size(); j++){
            if(array[j]>array[max]){
                max = j;
            }
        }
        swap(array[i],array[max]);
    }
}

void insertionSortDescending(vector<int> &array){
    for(int i=1; i<array.size()-1; i++){
        for(int j=i; j>0; j--){
            if(array[j]>array[j-1]){
                swap(array[j],array[j-1]);
            }
        }
    }
}

void countingSortDescending(vector<int> &array){
    int maxVal=INT_MIN, minVal=INT_MAX;
    for(int i=0; i<array.size(); i++){
        maxVal = max(maxVal, array[i]);
        minVal = min(minVal, array[i]);
    }

    vector<int> freq(maxVal + 1, 0);
    for(int i=0; i<array.size(); i++){
        freq[array[i]]++;
    }

    for(int i=maxVal, index=0; i>=minVal; i--){
        while(freq[i]>0){
            array[index++]=i;
            freq[i]--;
        }
    }
}

int main(){
    vector<int> array = {3,6,2,1,8,7,4,5,3,1};
    bubbleSortDescending(array);
    // selectionSortDescending(array);
    // insertionSortDescending(array);
    // countingSortDescending(array);

    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<"\t";
    }

    return 0;
}