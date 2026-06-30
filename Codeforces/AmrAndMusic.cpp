#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    
    vector<pair<int, int>> days;
    for(int i=0; i<n; i++){
        int day;
        cin >> day;
        days.emplace_back(day, i);
    }
    sort(days.begin(), days.end(), [](pair<int, int>& p1, pair<int, int>& p2){
        return p1.first < p2.first;
    });
    
    vector<int> res;
    for(int i=0; i<n && k>0; i++){
        k -= days[i].first;
        if(k >= 0){
            res.emplace_back(days[i].second+1);
        }
    }
    
    cout<<res.size()<<"\n";
    for(int& i:res){
        cout<<i<<" ";
    }
    
    return 0;
}