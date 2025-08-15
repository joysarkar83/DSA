#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(vector<int>& v1, vector<int>& v2){
    return v1[0] < v2[0];
}

//Common Intervals
vector<vector<int>> uniqueIntervals(vector<vector<int>>& meetings){
    vector<vector<int>> unique;
    sort(meetings.begin(), meetings.end(), comp);

    unique.push_back(meetings[0]);
    for(int i=1; i<meetings.size(); i++){
        if(meetings[i][0] <= unique.back()[1] + 1){
            unique.back()[1] = max(unique.back()[1], meetings[i][1]);
        }
        else{
            unique.push_back(meetings[i]);
        }
    }
    return unique;
}

//Mathematics appraoch
int countDays(int days, vector<vector<int>>& meetings) {
    long long int count = days;
    meetings = uniqueIntervals(meetings);
    for(vector<int> i:meetings){
        count -= (i[1]-i[0]+1);
    }
    return count;
}



//Iterative Approach
// int countDays(int days, vector<vector<int>>& meetings) {
//     vector<bool> hash(days+1, 0);

//     for(int i=0; i<meetings.size(); i++){
//         int st = meetings[i][0];
//         int end = meetings[i][1];

//         for(st; st<=end; st++){
//             hash[st] = true;
//         }
//     }

//     int count = 0;
//     for(int i=1; i<=days; i++){
//         if(hash[i] == false) count++;
//     }
//     return count;
// }

int main(){
    return 0;
}