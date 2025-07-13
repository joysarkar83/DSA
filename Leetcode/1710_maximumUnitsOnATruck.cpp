#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(vector<int> p1, vector<int> p2){
    return p1[1] > p2[1];
}

int maximumUnits(vector<vector<int>>& boxTypes, int& truckSize) {
    int n = boxTypes.size();
    
    // Sort the vector: Based on the 'UnitsPerBox' | Descending
    sort(boxTypes.begin(), boxTypes.end(), compare);

    int maxUnits = 0;
    for(int i=0; i<n && truckSize > 0; i++){
        int takeBoxes = min(truckSize, boxTypes[i][0]);
        maxUnits += takeBoxes * boxTypes[i][1];
        truckSize -= takeBoxes;
    }
    return maxUnits;
}

int main(){
    vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};

    int truckSize = 4;

    cout<<maximumUnits(boxTypes, truckSize);

    return 0;
}