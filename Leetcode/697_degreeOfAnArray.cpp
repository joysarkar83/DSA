#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int findShortestSubArray(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;
    for(int i:nums){
        freq[i]++;
    }

    int maxVal = INT_MIN;
    int maxFreq = INT_MIN;
    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            maxVal = p.first;
        }
    }

    int firstIdx = -1, endIdx = -1;
    for(int i=0; i<n; i++){
        if(nums[i] == maxVal){
            if(firstIdx == -1){
                firstIdx = i;
            }
            endIdx = i;
        }
    }
    return endIdx - firstIdx + 1;
}

int main(){

    return 0;
}