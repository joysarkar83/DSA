#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<long long> getDistances(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, vector<int>> data;
    for(int i=0; i<n; i++){
        data[arr[i]].emplace_back(i);
    }

    vector<long long> newArr(n, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<data[arr[i]].size(); j++){
            newArr[i] += abs(i - data[arr[i]][j]);
        }
    }
    return newArr;
}

int main(){

    return 0;
}