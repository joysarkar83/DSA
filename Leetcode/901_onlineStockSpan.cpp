#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class StockSpanner {
    stack<int> stk;
    vector<int> prices;
    int day;

public:
    StockSpanner() {
        day = 0;
    }

    int next(int price) {
        prices.push_back(price);

        while (!stk.empty() && price >= prices[stk.top()]) {
            stk.pop();
        }

        int span;
        if (!stk.empty()) {
            span = day - stk.top();
        } else {
            span = day + 1;
        }

        stk.push(day);
        day++;

        return span;
    }
};

int main(){

    return 0;
}