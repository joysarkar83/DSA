#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int>& array, int st, int end){
    if(st >= end){
        return array;
    }
    swap(array[st], array[end]);
    return reverseArray(array, st+1, end-1);
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    vector<int> rev = reverseArray(arr, 0, arr.size()-1);

    for(int i:rev){
        cout<<i<<" ";
    }

    return 0;
}