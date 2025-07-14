#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int maxChainLength(vector<pair<int, int>> pairs){
    int n = pairs.size();
    
    sort(pairs.begin(), pairs.end(), compare);

    int len = 1;
    int currEnd = pairs[0].second;
    for(int i=1; i<n; i++){
        if(pairs[i].first > currEnd){
            currEnd = pairs[i].second;
            len++;
        }
    }
    return len;
}

int main(){
    vector<pair<int, int>> pairs = {{5,24},{39, 60},{5, 28},{27, 40}, {50, 90}};

    cout<<maxChainLength(pairs);

    return 0;
}