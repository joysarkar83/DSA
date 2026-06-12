#include <iostream>
#include <vector>
using namespace std;

void solve(){
    long long int a, b, x;
    cin>>a>>b>>x;

    vector<pair<long long int, int>> aMap, bMap;
    long long int currA = a;
    int costA = 0;
    aMap.emplace_back(currA, costA);
    while(currA > 0){
        currA /= x;
        costA++;
        aMap.emplace_back(currA, costA);
    }
    
    long long int currB = b;
    int costB = 0;
    bMap.emplace_back(currB, costB);
    while(currB > 0){
        currB /= x;
        costB++;
        bMap.emplace_back(currB, costB);
    }
    
    int leastCost = INT_MAX;
    for(auto itrA:aMap){
        for(auto itrB:bMap){
            int currCost = itrA.second + itrB.second + abs(itrA.first - itrB.first);
            leastCost = min(leastCost, currCost);
        }
    }
    cout<<leastCost<<"\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}