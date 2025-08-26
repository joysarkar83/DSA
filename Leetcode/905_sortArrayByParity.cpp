#include <iostream>
#include <vector>
using namespace std;

bool isEven(int& n){
    return (n%2==0);
}

vector<int> sortArrayByParity(vector<int>& nums) {
    int n = nums.size();
    int st = 0;
    for(int i=0; i<n; i++){
        if(nums[i]%2==0){
            swap(nums[st++], nums[i]);
        }
    }
    return nums;
}

int main(){
    return 0;
}