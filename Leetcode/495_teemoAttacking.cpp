#include <iostream>
#include <vector>
using namespace std;

//Optimised
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int time = 0;
    for (int i = 0; i < timeSeries.size() - 1; i++) {
        
        int val = timeSeries[i+1] - timeSeries[i];
        
        time += min(val, duration);
    
    }
    time += duration;
    return time;
}
// Brute Force
// void mergeDurations(vector<vector<int>>& timeSpans){
//     int n = timeSpans.size();
//     for(int i=1; i<n; i++){
//         if(timeSpans[i-1][1] > timeSpans[i][0]){
//             timeSpans[i][0] = timeSpans[i-1][1];
//         }
//     }
// }

// int findPoisonedDuration(vector<int>& timeSeries, int duration) {
//     int n = timeSeries.size();
//     vector<vector<int>> timeSpans(n, vector<int>(2));

//     for(int i=0; i<n; i++){
//         timeSpans[i][0] = timeSeries[i];
//         timeSpans[i][1] = timeSeries[i]+duration;
//     }

//     mergeDurations(timeSpans);

//     int time = 0;
//     for(int i=0; i<n; i++){
//         time += timeSpans[i][1] - timeSpans[i][0];
//     }

//     return time;
// }

int main(){
    vector<int> times = {1,4};

    int duration = 2;

    cout<<findPoisonedDuration(times, duration);

    return 0;
}