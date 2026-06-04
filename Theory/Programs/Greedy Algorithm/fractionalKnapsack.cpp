#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<float, int> p1, pair<float, int> p2){
    return p1.first > p2.first;
}

int fractionalKnapsack(int maxWt, vector<int> val, vector<int> wt){
    int n = val.size();

    // Find per-wt-price and store it along with its index
    vector<pair<float, int>> ratio(n);                  //{ratio, index}
    for(int i=0; i<n; i++){
        ratio[i].first = val[i]/(float)wt[i];
        ratio[i].second = i;
    }

    // Sorting the ratio vector in decending order
    sort(ratio.begin(), ratio.end(), compare);

    int earning = 0;
    for(int i=0; i<n; i++){
        int idx = ratio[i].second;
        if(wt[idx] <= maxWt){
            maxWt -= wt[idx];
            earning += val[idx];
        }
        else{
            earning += ratio[i].first * maxWt;
            maxWt = 0;
            break;
        }
    }
    return earning;
}

int main(){
    int maxWt = 50;
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};

    cout<<fractionalKnapsack(maxWt, val, wt);

    return 0;
}