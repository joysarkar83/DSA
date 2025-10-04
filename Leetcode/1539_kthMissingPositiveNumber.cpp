#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int track = 1, n = arr.size(), i=0, missing_cnt = 0;
    while(i < n){
        if(track == arr[i]){
            i++;
        }
        else{
            missing_cnt++;
            if(missing_cnt == k){
                return track;
            }
        }
        track++;
    }
    return ((k-missing_cnt) + arr[n-1]);
}

int main(){
    vector<int> num = {1,5,6,7,12,13,14,15};

    cout<<findKthPositive(num,7);

    return 0;
}