#include <iostream>
#include <vector>
using namespace std;

int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
    int n = landStartTime.size(), m = waterStartTime.size();
    int minTime = INT_MAX;

    // Land First
    for(int i=0; i<n; i++){
        int landTime = landStartTime[i] + landDuration[i];
        for(int j=0; j<m; j++){
            int waterTime = 0;
            if(waterStartTime[j] <= landTime){
                waterTime += waterDuration[j];
                minTime = min(minTime, (landTime + waterTime));
            }else{
                waterTime = waterStartTime[j];
                waterTime += waterDuration[j];
                minTime = min(minTime, waterTime);
            }
        }
    }
    
    // Water First
    for(int j=0; j<m; j++){
        int waterTime = waterStartTime[j] + waterDuration[j];
        for(int i=0; i<n; i++){
            int landTime = 0;
            if(landStartTime[i] <= waterTime){
                landTime += landDuration[i];
                minTime = min(minTime, (landTime + waterTime));
            }else{
                landTime = landStartTime[i];
                landTime += landDuration[i];
                minTime = min(minTime, landTime);
            }
        }
    }
    
    return minTime;
}

int main(){

    return 0;
}