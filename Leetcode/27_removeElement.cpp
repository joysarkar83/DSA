#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int& val) {
    auto ptr = nums.begin();
    while(ptr != nums.end()){
        if(*ptr == val){
            nums.erase(ptr);
        }
        else{
            ptr++;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    cout<<removeElement(nums, val)<<"\n";

    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}