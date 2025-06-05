#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(), nums.end());
    int stIdx = 0, endIdx = nums.size()-1;
    while(stIdx <= endIdx){
        int midIdx = stIdx + ((endIdx - stIdx)/2);
        if(nums[midIdx] == val){
            bool more = true;
            int leftExtend = midIdx-1, rightExtend =  midIdx+1;
            while(more){

            }
        }
    }
}

int main(){

    return 0;
}