#include <iostream>
#include <vector>
using namespace std;

vector<int> constructTransformedArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 0);
    for(int i=0; i<n; i++){
        int val = nums[i];
        if(val > 0){
            int placeOf = (val + i) % n;
            res[i] = nums[placeOf];
        }
        else if(val < 0){
            int placeOf = (i + val) % n;
            while (placeOf < 0){
                placeOf += n;
            }
            res[i] = nums[placeOf];
        }
    }
    return res;
}

int main(){
    return 0;
}