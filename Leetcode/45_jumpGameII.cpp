#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();

    int idx = 0, count = 0, currRange = nums[0];
    while(currRange < n-1){
        int maxRange = currRange;
        for(int i=idx; i<=currRange; i++){
            maxRange = max(maxRange, i + nums[i]);
        }
        idx = currRange + 1;
        currRange = maxRange;
        count++;
    }

    return count + 1;
}

int main(){

    return 0;
}