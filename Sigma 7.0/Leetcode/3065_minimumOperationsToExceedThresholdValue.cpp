#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    int count = 0;
    for(int i:nums){
        if(i<k){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {12,2,13,6,15,4,16,1,8};
    cout<<minOperations(arr, 10);
    return 0;
}