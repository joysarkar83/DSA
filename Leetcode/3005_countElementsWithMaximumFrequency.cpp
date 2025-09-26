#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;

    int maxFreq = INT_MIN;
    for(int i:nums){
        freq[i]++;
        maxFreq = max(maxFreq, freq[i]);
    }

    int count = 0;
    for(auto itr=freq.begin(); itr!=freq.end(); itr++){
        if(itr->second == maxFreq) count+=(itr->second);
    }
    return count;
}

int main(){

    return 0;
}