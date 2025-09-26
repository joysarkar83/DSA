#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();

    int lt = 0, rt = n-1;

    while(lt <= rt){
        int mid = lt + ((rt - lt)/2);
        
        if((mid-1 >= 0) && (arr[mid] > arr[mid-1]) && (mid+1 < n) && (arr[mid] > arr[mid+1])){
            return mid;
        }

        else if((mid-1 >= 0) && (arr[mid] > arr[mid-1])){
            lt = mid;
        }

        else if(mid+1 < n){
            rt = mid;
        }
    }
    return -1;
}

int main(){

    return 0;
}