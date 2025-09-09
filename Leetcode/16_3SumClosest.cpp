#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int n = nums.size(), ans = nums[0]+nums[1]+nums[2];
    
    for(int i=0; i<n-2; i++){
        
        int left = i+1, right = n-1;
        while(left < right){
            int sum = nums[i]+nums[left]+nums[right];
            int dist = abs(target - sum);
            if(dist < abs(target - ans)){
                ans = sum;
            }

            if(sum < target){
                left++;
            }else if(sum > target){
                right--;
            }else{
                return ans;
            }
        }
    }
    return ans;
}

int main(){

    return 0;
}