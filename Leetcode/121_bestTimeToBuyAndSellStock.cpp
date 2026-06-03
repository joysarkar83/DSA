#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();

    vector<int> bestBuyPrice(n, 0);
    bestBuyPrice[0] = prices[0];
    for (int i = 1; i < n; i++) {
        bestBuyPrice[i] = min(bestBuyPrice[i - 1], prices[i - 1]);
    }

    int maxProfit = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxProfit = max(maxProfit, (prices[i] - bestBuyPrice[i]));
    }
    return maxProfit;
}

int main(){
    return 0;
}