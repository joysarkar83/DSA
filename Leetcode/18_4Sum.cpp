#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<n-3; i++) {
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        for(int j=i+1; j<n-2; j++) {
            if(j>i+1 && nums[j] == nums[j-1]){
                continue;
            }
            
            int k = j+1, l = n-1;
            while(k<l){
                long long int sum = (long long int)nums[i]+nums[j]+nums[k]+nums[l];
                if(sum == target){
                    result.push_back({nums[i], nums[j], nums[k++], nums[l--]});
                    while(nums[k] == nums[k-1] && k<l){
                        k++;
                    }
                    while(nums[l] == nums[l+1] && l<n){
                        l--;
                    }
                }
                else if(sum < target){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> res = fourSum(nums, target);

    for(int i=0; i<res.size(); i++){
        for(auto i:res[i]){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}