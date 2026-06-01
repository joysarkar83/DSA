#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, int> cities;
    unordered_map<int, int> idx;
    for(int i=0; i<n; i++){
        int curr;
        cin>>curr;
        cities[curr]++;
        idx[curr] = i+1;
    }

    if(cities.begin()->second > 1){
        cout<<"Still Rozdil";
    }else{
        cout<<idx[cities.begin()->first];
    }
    return 0;
}