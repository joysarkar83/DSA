#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long subarrayXor(vector<int> &nums, int k) {
    int n = nums.size(), zor = 0;
    long res = 0;
    unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        zor ^= nums[i];
        if(zor == k){
            res++;
        }
        if(hash.count(zor ^ k)){
            res += hash[zor ^ k];
        }
        hash[zor]++;
    }
    return res;    
}

int main(){


    return 0;
}