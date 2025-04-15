//BRUTE FORCE APPROACH

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices){
    int maxDiff = INT16_MAX;
    for(int i=0; i<prices.size(); i++){
        for(int j=i; j<prices.size(); j++){
            int currDiff = prices[i] - prices[j];
            if(currDiff < maxDiff){
                maxDiff = currDiff;
            }
        }
    }
    return maxDiff*(-1);
}

int main(){
    // vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {7,6,4,3,1};

    cout<<maxProfit(prices);

    return 0;
}