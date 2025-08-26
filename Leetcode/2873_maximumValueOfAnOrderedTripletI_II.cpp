#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

long long maximumTripletValue(vector<int>& nums) {
    long maxTriplet = 0, maxDiff = 0, maxElem = 0;
    for(long num:nums){
        maxTriplet = max(maxTriplet, maxDiff * num);
        maxDiff = max(maxDiff, maxElem - num);
        maxElem = max(maxElem, num);
    }   
    return maxTriplet;
}

int main(){


    return 0;
}