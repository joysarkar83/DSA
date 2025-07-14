#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int>& coins, int amount){
    sort(coins.begin(), coins.end());       //Just to make sure
    int n = coins.size();
    
    int total = 0;
    for(int i=n-1; i>=0; i--){
        if(amount >= coins[i]){
            total += amount / coins[i];
            cout<<"Using "<<amount / coins[i]<<" "<<coins[i]<<" coins.\n";
            amount %= coins[i];
        }
    }
    return total;
}

int main(){
    int amt = 123456;
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};

    cout<<"Total coins: "<<minCoins(coins, amt);

    return 0;
}