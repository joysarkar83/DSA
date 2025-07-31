#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<bool> freq(n+1,0);

    for(int i=0; i<n; i++){
        freq[nums[i]] = true;
    }

    vector<int> res;
    for(int i=1; i<=n; i++){
        if(freq[i] == false) res.emplace_back(i);
    }
    return res;
}

int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};

    vector<int> final = findDisappearedNumbers(arr);

    for(int i:final){
        cout<<i<<" ";
    }

    return 0;
}