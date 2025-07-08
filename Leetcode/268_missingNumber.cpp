#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> hashMap(n+1, 0);
    for(int i=0; i<n; i++){
        hashMap[nums[i]] = true;
    }
    for(int i=0; i<n+1; i++){
        if(!hashMap[i]) return i;
    }
    return -1;
}

int main(){

    return 0;
}