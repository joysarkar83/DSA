#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    
    vector<int> copy(candies);
    sort(copy.begin(), copy.end());
    int maxElem = copy[n-1];

    vector<bool> result;
    for(int i=0; i<n; i++){
        if(candies[i] + extraCandies >= maxElem){
            result.emplace_back(true);
        }else{
            result.emplace_back(false);
        }
    }
    return result;
}

int main(){
    return 0;
}