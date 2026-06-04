#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minAbsoluteDiff(vector<int>& arr1, vector<int>& arr2){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int absDiff = 0;
    for(int i=0; i<arr1.size(); i++){
        absDiff += abs(arr1[i] - arr2[i]);
    }
    return absDiff;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {3,4,5,1,2,6};

    cout<<minAbsoluteDiff(arr1, arr2);

    return 0;
}