#include <iostream>
#include <vector>
using namespace std;

int findGCD(vector<int>& nums) {
    int maxVal = INT_MIN, minVal = INT_MAX;
    for(int& i:nums){
        if(i < minVal) minVal = i;
        if(i > maxVal) maxVal = i;
    }

    while(maxVal!=0 && minVal!=0){
        if(maxVal > minVal) maxVal %= minVal;
        else minVal %= maxVal;
    }
    if(maxVal == 0) return minVal;
    else return maxVal;

    return -1;
}

int main(){
    return 0;
}