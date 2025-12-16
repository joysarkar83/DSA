#include <iostream>
#include <vector>
using namespace std;

long long getDescentPeriods(vector<int>& prices) {
    int n = prices.size();
    long long ans = 1;
    long long curr = 1;

    for(int i = 1; i < n; i++){
        if(prices[i-1] - prices[i] == 1){
            curr++;
        } else {
            curr = 1;
        }
        ans += curr;
    }

    return ans;
}


int main(){

    return 0;
}