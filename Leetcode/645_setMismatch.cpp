#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n+1, 0);
    vector<int> result(2, 0);

    for(int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        if (freq[i] == 2) {
            result[0] = i;
        }
        else if (freq[i] == 0) {
            result[1] = i;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 3, 5};
    vector<int> res = findErrorNums(nums);
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
