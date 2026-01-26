#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    int n = arr.size(), minDiff = INT_MAX;
    vector<vector<int>> minArr;
    sort(arr.begin(), arr.end());

    for(int i=1; i<n; i++){
        int currDiff = arr[i] - arr[i-1];
        if(currDiff < minDiff){
            minDiff = currDiff;
            minArr.clear();
            minArr.push_back({arr[i-1], arr[i]});
        }
        else if(currDiff == minDiff){
            minArr.push_back({arr[i-1], arr[i]});
        }
    }
    return minArr;
}

int main(){

    return 0;
}