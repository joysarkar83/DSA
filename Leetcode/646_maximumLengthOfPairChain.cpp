#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int>& v1, vector<int>& v2){
    return v1[1] < v2[1];
}

int findLongestChain(vector<vector<int>>& pairs) {
    int n = pairs.size();
    if(n <= 1){
        return n;
    }

    // Sort on the basis of end intervals
    sort(pairs.begin(), pairs.end(), compare);

    int count = 1;
    int currEnd = pairs[0][1];
    for(int i=1; i<n; i++){
        if(currEnd < pairs[i][0]){
            count++;
            currEnd = pairs[i][1];
        }
    }
    return count;
}

int main(){

    return 0;
}