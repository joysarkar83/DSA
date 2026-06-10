#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    int n = nums.size();
    int same = 0;
    vector<int> less, more, res;
    for(int& i:nums){
        if(i == pivot) same++;
        else if(i < pivot) less.emplace_back(i);
        else more.emplace_back(i);
    }

    for(int& i:less) res.emplace_back(i);
    while(same--) res.emplace_back(pivot);
    for(int& i:more) res.emplace_back(i);
    return res;
}

int main(){
    return 0;
}