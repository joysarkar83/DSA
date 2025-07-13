#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    return v1[1] < v2[1];
}

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), compare);

    int count = 0;
    int currEndValue = intervals[0][1];
    for(int i=1; i<n; i++){
        if(currEndValue <= intervals[i][0]){
            currEndValue = intervals[i][1];
        }
        else{
            count++;
        }
    }
    return count;
}

int main(){
    vector<vector<int>> intervals = {{1,2},{1,2},{1,2}};

    cout<<eraseOverlapIntervals(intervals);

    return 0;
}