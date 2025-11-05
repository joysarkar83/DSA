#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>& p1, pair<int, int>& p2){
    if(p1.second > p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        return p1.first > p2.first;
    }
    return false;
}

int sumOfHighestFreq(unordered_map<int, int>& data, int terms){
    vector<pair<int, int>> vec(data.begin(), data.end());
    int sum = 0;
    sort(vec.begin(), vec.end(), comp);
    for(auto itr:vec){
        sum += itr.first * itr.second;
        terms--;
        if(terms == 0){
            break;
        }
    }
    return sum;
}

vector<int> findXSum(vector<int>& nums, int& k, int& x) {
    int n = nums.size();
    vector<int> res;

    unordered_map<int, int> track;
    int st = 0, end = 0;
    for(end; end<k; end++){
        track[nums[end]]++;
    }

    res.emplace_back(sumOfHighestFreq(track, x));
    
    for(end; end<n; end++){
        track[nums[st]]--;
        if(track[nums[st]] == 0){
            track.erase(nums[st]);
        }
        st++;
        track[nums[end]]++;
        res.emplace_back(sumOfHighestFreq(track, x));
    }
    return res;
}

int main(){

    return 0;
}