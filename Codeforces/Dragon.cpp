#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int hero, nDragons;
    cin >> hero >> nDragons;

    vector<pair<int, int>> fights;

    for(int i=0; i<nDragons; i++){
        int drag, bonus;
        cin >> drag >> bonus;
        fights.emplace_back(drag, bonus);
    }
    sort(fights.begin(), fights.end());
    
    for(int i=0; i<nDragons; i++){
        if(hero > fights[i].first){
            hero += fights[i].second;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}