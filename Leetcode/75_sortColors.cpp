#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0, n = nums.size();
    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            count0++;
        }
        else if(nums[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0; i<n; i++){
        while(count0 > 0){
            nums[i++] = 0;
            count0--;
        }
        while(count1 > 0){
            nums[i++] = 1;
            count1--;
        }
        while(count2 > 0){
            nums[i++] = 2;
            count2--;
        }
    }
}

int main(){
    vector<int> arr = {2,0,2,1,1,0};

    sortColors(arr);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}