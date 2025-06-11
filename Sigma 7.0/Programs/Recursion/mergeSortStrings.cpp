/*
Apply Merge sort to sort an array of Strings.(Assume that all the characters in all the Strings are in lowercase).
SampleInput1 : arr={"sun","earth","mars","mercury"}
SampleOutput1 : arr={"earth","mars","mercury","sun"}
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void merge(vector<string>& str, int stIdx, int midIdx, int endIdx){
    vector<string> temp;
    int leftIdx = stIdx, rightIdx = midIdx+1;
    while(leftIdx<=midIdx && rightIdx<=endIdx){
        if(str[leftIdx] <= str[rightIdx]){
            temp.emplace_back(str[leftIdx++]);
        }
        else{
            temp.emplace_back(str[rightIdx++]);
        }
    }
    while(leftIdx<=midIdx){
        temp.emplace_back(str[leftIdx++]);
    }
    while(rightIdx<=endIdx){
        temp.emplace_back(str[rightIdx++]);
    }
    
    for(int i=stIdx, j=0; i<=endIdx; i++, j++){
        str[i] = temp[j];
    }
}

void mergeSortStrings(vector<string>& str, int stIdx, int endIdx){
    if(stIdx >= endIdx){
        return;
    }
    int midIdx = stIdx + ((endIdx - stIdx)/2);
    mergeSortStrings(str, stIdx, midIdx);
    mergeSortStrings(str, midIdx+1, endIdx);

    merge(str, stIdx, midIdx, endIdx);
}

int main(){
    vector<string> str = {"sun","earth","mars","mercury"};

    mergeSortStrings(str, 0, str.size()-1);

    for(auto i:str){
        cout<<i<<" ";
    }

    return 0;
}