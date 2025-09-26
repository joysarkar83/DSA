#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> frequencySort(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> track;

    for(int i=0; i<n; i++){
        track[nums[i]]++;
    }

    vector<pair<int, int>> freq(track.begin(), track.end());

    sort(freq.begin(), freq.end(), [](pair<int, int> p1, pair<int, int> p2){
        if (p1.second == p2.second) return p1.first > p2.first;
        return p1.second < p2.second;
    });

    int i=0;
    for(auto itr=freq.begin(); itr!=freq.end(); itr++){
        while(itr->second){
            nums[i++] = itr->first;
            itr->second--;
        }
    }
    return nums;
}

int main(){

    return 0;
}