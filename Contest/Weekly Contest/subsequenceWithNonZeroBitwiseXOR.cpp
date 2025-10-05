#include <iostream>
#include <vector>
using namespace std;

int longestSubsequence(vector<int>& nums) {
    int n = nums.size(), XOR = 0;
    for(int i:nums){
        XOR ^= i;
    }
    if(XOR != 0){
        return n;
    }
    for(int i:nums){
        if(i != 0){
            return n-1; 
        }
    }
    return 0;
}

int main(){

    return 0;
}