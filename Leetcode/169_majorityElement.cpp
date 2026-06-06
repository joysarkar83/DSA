#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = nums[0], count = 1;

    int n = nums.size();
    for(int i=1; i<n; i++){
        if(candidate != nums[i]){
            count--;
        }
        if(count == 0){
            candidate = nums[i];
            count = 1;
        }
    }

    return candidate;
}

int main(){

    return 0;
}