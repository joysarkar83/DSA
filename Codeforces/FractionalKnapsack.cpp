#include <bits/stdc++.h> 
using namespace std;

double maximumValue (vector<pair<int, int>>& items, int n, int w){
    vector<pair<double, int>> ratio;
    for(int i=0; i<n; i++){
        ratio.emplace_back(((double)items[i].second/items[i].first), i);
    }

    sort(ratio.begin(), ratio.end(), greater<pair<double,int>>());

    double res = 0;
    for(int i=0; i<n && w>0; i++){
        int maxPick = min(w, items[ratio[i].second].first);
        res += maxPick * ratio[i].first;
        w -= maxPick;
    }
    return res;
}

int main(){

    return 0;
}