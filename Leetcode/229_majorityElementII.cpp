#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    float target = nums.size()/3;
    unordered_map<int, int> freq;
    for(int i:nums){
        freq[i]++;
    }

    vector<int> res;
    for(auto i=freq.begin(); i!=freq.end(); i++){
        if(i->second > target){
            res.emplace_back(i->first);
        }
    }
    return res;
}

int main(){

    return 0;
}