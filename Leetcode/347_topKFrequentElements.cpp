#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<pair<int,int>> p){
    for(int i=0; i<p.size(); i++){
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
    cout<<"\n";
}

void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

bool comp(pair<int, int>& p1, pair<int, int>& p2){
    return p1.second >= p2.second;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    vector<pair<int, int>> freq;
    sort(nums.begin(), nums.end());

    int ongoingVal = nums[0];
    freq.emplace_back(ongoingVal, 1);
    
    for(int i=1; i<n; i++){
        if(nums[i] == ongoingVal){
            freq.back().second++;
        }
        else{
            ongoingVal = nums[i];
            freq.emplace_back(ongoingVal, 1);
        }
    }

    sort(freq.begin(), freq.end(), comp);

    vector<int> val;
    for(int i=0; i<k; i++){
        val.emplace_back(freq[i].first);
    }

    return val;
}

int main(){
    vector<int> n = {4,1,-1,2,-1,2,3};

    topKFrequent(n, 2);

    return 0;
}