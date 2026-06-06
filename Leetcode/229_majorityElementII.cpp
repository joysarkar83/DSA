#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Moore's Voting Algorithm
vector<int> majorityElement(vector<int>& nums) {
    int candidate1 = INT_MIN, candidate2 = INT_MIN, count1 = 0, count2 = 0, n = nums.size();

    for(int& i:nums){
        if(i == candidate1) count1++;
        else if(i == candidate2) count2++;
        else if(count1 == 0){
            candidate1 = i;
            count1 = 1;
        }
        else if(count2 == 0){
            candidate2 = i;
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    for(int& i:nums){
        if(i == candidate1) count1++;
        else if(i == candidate2) count2++;
    }

    vector<int> res;
    if(count1 > n/3) res.emplace_back(candidate1);
    if(count2 > n/3) res.emplace_back(candidate2);
    return res;
}


// Brute Force
// vector<int> majorityElement(vector<int>& nums) {
//     float target = nums.size()/3;
//     unordered_map<int, int> freq;
//     for(int i:nums){
//         freq[i]++;
//     }

//     vector<int> res;
//     for(auto i=freq.begin(); i!=freq.end(); i++){
//         if(i->second > target){
//             res.emplace_back(i->first);
//         }
//     }
//     return res;
// }


int main(){

    return 0;
}