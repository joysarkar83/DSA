#include <iostream>
#include <vector>
using namespace std;

int smallestIndex(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        while(nums[i] > 0){
            sum += nums[i]%10;
            nums[i] /= 10;
        }
        if(sum == i){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> num = {1,3,2};

    cout<<smallestIndex(num);

    return 0;
}