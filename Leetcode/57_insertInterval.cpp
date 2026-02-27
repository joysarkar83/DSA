#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int n = intervals.size();
    vector<vector<int>> res;
    bool inserted = false;

    for (int i = 0; i < n; i++) {

        if (intervals[i][1] < newInterval[0]) {
            res.emplace_back(intervals[i]);
        }

        else if (intervals[i][0] > newInterval[1]) {
            if (!inserted) {
                res.emplace_back(newInterval);
                inserted = true;
            }
            res.emplace_back(intervals[i]);
        }

        else {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
    }

    if (!inserted) {
        res.emplace_back(newInterval);
    }

    return res;
}


int main(){
    return 0;
}