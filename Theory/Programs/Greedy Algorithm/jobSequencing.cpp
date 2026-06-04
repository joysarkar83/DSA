#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


// Prints the Job and net-profit
class jobs{
public:
    int index, deadline, profit;

    jobs(int index, int deadline, int profit){
        this->index = index;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int jobSequencing(vector<pair<int,int>>& pairs){     //{deadline, profit}
    int n = pairs.size();

    vector<jobs> trios;

    for(int i=0; i<n; i++){
        trios.emplace_back(jobs(i, pairs[i].first, pairs[i].second));
    }

    sort(trios.begin(), trios.end(), [](jobs& j1, jobs& j2){
        return j1.profit > j2.profit;
    });

    int profit = trios[0].profit;
    cout<<"Selected job: "<<trios[0].index<<"\n";
    int safeDeadline = 2;
    for(int i=1; i<n; i++){
        if(trios[i].deadline >= safeDeadline){
            profit += trios[i].profit;
            safeDeadline++;
            cout<<"Selected job: "<<trios[i].index<<"\n";
        }
    }
    return profit;
}


// Prints the profit only

// bool compare(pair<int,int>& p1, pair<int,int>& p2){
//     return p1.second > p2.second;
// }

// int jobSequencing(vector<pair<int,int>>& jobs){     //{deadline, profit}
//     int n = jobs.size();
//     if(n==0) return 0;
//     if(n==1) return jobs[0].second;

//     sort(jobs.begin(), jobs.end(), compare);

//     int profit = jobs[0].second;
//     int safeDeadline = 2;
//     for(int i=1; i<n; i++){
//         if(jobs[i].first >= safeDeadline){
//             profit += jobs[i].second;
//             safeDeadline++;
//         }
//     }
//     return profit;
// }

int main(){
    vector<pair<int,int>> jobs = {{4, 20},{1, 10},{1, 40},{1, 30}};

    cout<<jobSequencing(jobs);

    return 0;
}