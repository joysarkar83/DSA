#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n<=2) return n;
    int duplicateCount = 0;
    for(int i=0; i<n; i++){
        int curr = nums[i];
        int count = 1;
        while((i+1<n) && (nums[i+1]==curr)){
            count++; i++;
            if(count >= 3){
                nums[i] = INT_MAX;
                duplicateCount++;
            }
        }
    }
    sort(nums.begin(), nums.end());
    return n-duplicateCount;
}

int main(){
    vector<int> nums = {1,1,1,1};

    cout<<removeDuplicates(nums);

    return 0;
}