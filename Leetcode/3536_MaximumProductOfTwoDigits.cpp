#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Only works for either ascending or descending order
// int maxProduct(int n) {
//     int maxMultiple = 0;
//     int prevDigit = 1;
//     while(n>0){
//         int currDigit = n%10;
//         int currMultiple = prevDigit * currDigit;
//         prevDigit = currDigit;
//         maxMultiple = max(currMultiple, maxMultiple);
//         n = n/10;
//     }
//     return maxMultiple;
// }

int maxProduct(int n){
    vector<int> nums;
    while(n > 0){
        nums.emplace_back(n%10);
        n /= 10;
    }

    int size = nums.size();
    sort(nums.begin(), nums.end(), greater<int>());

    if(size >= 2){
        return nums[0]*nums[1];
    }
    else if(size = 1){
        return nums[0];
    }
    else{
        return 0;
    }
}

int main(){
    cout<<maxProduct(437);

    return 0;
}