#include <iostream>
#include <vector>
using namespace std;

void conquer(int lt, int midIdx, int rt, vector<int>& nums, int& res){
    vector<int> temp;
    
    int i = lt, j = midIdx+1;
    while(i <= midIdx){
        while(j <= rt && nums[i] > 2LL * nums[j]){
            j++; 
        }
        res += (j - (midIdx + 1));
        i++; 
    }
    
    i = lt, j = midIdx+1;
    while(i <= midIdx && j <= rt){
        if(nums[i] <= nums[j]){
            temp.emplace_back(nums[i]);
            i++;
        }else{
            temp.emplace_back(nums[j]);
            j++;
        }
    }
    while(i <= midIdx){
        temp.emplace_back(nums[i]);
        i++;
    }
    while(j <= rt){
        temp.emplace_back(nums[j]);
        j++;
    }

    for(int k=lt, itr=0; k<=rt; k++, itr++){
        nums[k] = temp[itr];
    }
}

void divide(int lt, int rt, vector<int>& nums, int& res){
    if(lt >= rt){
        return;
    }

    int midIdx = lt + (rt - lt)/2;

    divide(lt, midIdx, nums, res);
    divide(midIdx+1, rt, nums, res);

    conquer(lt, midIdx, rt, nums, res);
}

int reversePairs(vector<int>& nums) {
    int res = 0;
    divide(0, nums.size()-1, nums, res);
    return res;
}

int main(){

    return 0;
}