#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int> nums, int target, int i){
    if(target == nums[i]){
        return i;
    }
    else if(i == 0){
        return -1;
    }
    return lastOccurrence(nums, target, i-1);
}

int main(){
    vector<int> num = {1,2,3,3,3,3,5,6,10};
    int target = 3;

    cout<<lastOccurrence(num, target, (num.size()-1));

    return 0;
}