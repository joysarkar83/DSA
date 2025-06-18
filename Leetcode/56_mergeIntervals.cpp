#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// MY LOGIC -  TIME COMPLEXITY (N^2) | SPACE COMPLEXITY (LOG N)
// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     if(intervals.empty()){
//         return intervals;
//     }

//     sort(intervals.begin(), intervals.end());
//     int nRows = intervals.size(), nCols = 2;
//     int i=0;
//     while(i < nRows-1){
//         if(intervals[i][1] >= intervals[i+1][0]){
//             intervals[i][1] = max(intervals[i][1], intervals[i+1][1]);
//             intervals.erase(intervals.begin()+i+1);
//             nRows--;
//         }else{
//             i++;
//         }
//     }
//     return intervals;
// }

// BETTER LOGIC
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.empty()){
        return intervals;
    }

    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for(int i=1; i < intervals.size(); i++){
        if(merged.back()[1] >= intervals[i][0]){
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }else{
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main(){
    vector<vector <int>> intervals = {{4,5},{3,6},{2,7},{1,8}};

    merge(intervals);

    for(int i=0; i<intervals.size(); i++){
        for(int j=0; j<intervals[0].size(); j++){
            cout<<intervals[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}