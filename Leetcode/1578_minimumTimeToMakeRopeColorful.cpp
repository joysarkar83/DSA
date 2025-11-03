#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCost(string colors, vector<int>& neededTime) {
    int n = colors.size();
    int result = 0;
    int st = 0;

    while (st < n) {
        int end = st;
        int total = 0, maxTime = 0;

        while (end < n && colors[end] == colors[st]) {
            total += neededTime[end];
            maxTime = max(maxTime, neededTime[end]);
            end++;
        }

        result += (total - maxTime);
        st = end;
    }

    return result;
}


int main(){

    return 0;
}