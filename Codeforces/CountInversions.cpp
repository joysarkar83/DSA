#include <iostream>
#include <vector>
using namespace std;

void conquer(int lt, int midIdx, int  rt, vector<int>& nums, int& res){
    vector<int> temp;
    int i = lt, j = midIdx+1;
    while(i<=midIdx && j<=rt){
        if(nums[i]<=nums[j]){
            temp.emplace_back(nums[i++]);
        }else{
            temp.emplace_back(nums[j++]);
            res += midIdx - i + 1;
        }
    }
    
    while(i <= midIdx){
        temp.emplace_back(nums[i++]);
    }
    while(j <= rt){
        temp.emplace_back(nums[j++]);
    }

    for(int i=lt, itr=0; i<=rt; i++, itr++){
        nums[i] = temp[itr];
    }
}

void divide(int lt, int  rt, vector<int>& nums, int& res){
    if(lt >= rt) return;

    int midIdx = lt + (rt - lt)/2;
    divide(lt, midIdx, nums, res);
    divide(midIdx+1, rt, nums, res);

    conquer(lt, midIdx, rt, nums, res);
}

int inversionCount(vector<int>& nums) {
    int res = 0;
    divide(0, nums.size()-1, nums, res);
    return res;    
}

int main(){


    return 0;
}