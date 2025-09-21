#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;

    for(int i=0; i<n && ans.size()<n; i++){
        if(arr[i] == 0){
            ans.emplace_back(0);
        }
        if(ans.size()<n){
            ans.emplace_back(arr[i]);
        } else{
            break;
        }
    }
    arr = ans;
}

int main(){

    return 0;
}