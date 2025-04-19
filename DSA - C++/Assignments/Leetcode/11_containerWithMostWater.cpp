#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int start=0, end=height.size()-1, maxProd=0, prod;
    while(start<end){
        prod = (end-start)*min(height[start],height[end]);
        maxProd = max(prod, maxProd);
        if(height[start]<height[end]){
            start++;
        }else{
            end--;
        }
    }
    return maxProd;
}

int main(){
    // vector<int> nums = {1,8,6,2,5,4,8,3,7};
    vector<int> nums = {1,1};
    cout<<maxArea(nums);
    return 0;
}