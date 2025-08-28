#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    int n = nums.size();
    bool isInc = false, isDec = false;

    for(int i=1; i<n; i++){
        if(nums[i-1] < nums[i]){
            isInc = true;
        }
        else if(nums[i-1] > nums[i]){
            isDec = true;
        }
    }

    if(isInc == true && isDec == true){
        return false;
    }
    return true;
}

int main(){

    return 0;
}