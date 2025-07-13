#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    return v1[1] < v2[1];
}

int findMinArrowShots(vector<vector<int>>& points) {
    if(points.empty()) return 0;

    sort(points.begin(), points.end(), compare);

    int arrows = 1;
    int currEnd = points[0][1];
    for(int i=1; i<points.size(); i++){
        if(points[i][0] > currEnd){            //Overlap not-found
            currEnd = points[i][1];
            arrows++;
        }
    }
    return arrows;
}

int main(){
    vector<vector<int>> pts = {{10,16},{2,8},{1,6},{7,12}};

    cout<<findMinArrowShots(pts);

    return 0;
}