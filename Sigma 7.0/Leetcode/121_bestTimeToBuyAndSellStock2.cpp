//Optimised

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int> prices){
    int n = prices.size();
    vector<int> bestBuyPrice(n);
    bestBuyPrice[0] = prices[0];
    
    //To build a vector that contains the best-buy-prices for each day
    for(int i=1; i<n; i++){
        bestBuyPrice[i] = min(bestBuyPrice[i-1], prices[i-1]);
    }

    //Calculate max profit by comparing profit of each day
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBuyPrice[i];
        maxProfit = max(maxProfit, currProfit);
    }

    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};

    cout<<maxProfit(prices);

    return 0;
}