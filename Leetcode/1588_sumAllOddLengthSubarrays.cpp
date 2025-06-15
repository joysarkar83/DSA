#include <iostream>
#include <vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int sum = 0, n = arr.size();
    
    for(int i=0; i<n; i++){
        sum += ((n-i)*(i+1) +1)/2 * arr[i] ;
    }
    
    return sum;
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    cout<<sumOddLengthSubarrays(arr);

    return 0;
}