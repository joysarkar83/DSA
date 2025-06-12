#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    if (n < 3){
        return false;
    }

    int i = 0;

    while (i + 1 < n && arr[i] < arr[i + 1]) {
        i++;
    }

    if (i == 0 || i == n - 1){
        return false;
    }

    while (i + 1 < n && arr[i] > arr[i + 1]) {
        i++;
    }

    return i == n - 1;
}

int main(){
    vector<int> arr = {1,3,2};

    cout<<validMountainArray(arr);

    return 0;
}