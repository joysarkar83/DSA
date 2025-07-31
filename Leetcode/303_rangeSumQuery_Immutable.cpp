#include <iostream>
#include <vector>
using namespace std;

class NumArray {
    vector<int> data;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        data.resize(n);
        data[0] = nums[0];
        for(int i=1; i<n; i++){
            data[i] = data[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return data[right];
        return data[right] - data[left-1];
    }
};

int main(){

    return 0;
}