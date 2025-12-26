#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int bestClosingTime(string customers) {
    int n = customers.size();

    pair<int, int> before = {0, 0}, after = {0, 0}; // {Y, N}
    for(char& ch:customers){
        if(ch == 'Y'){
            after.first++;
        }
        else{
            after.second++;            
        }
    }

    int res = 0;
    int penalty = INT_MAX;
    for(int j=0; j<=n; j++){
        int currPenalty = before.second + after.first;
        if(currPenalty < penalty){
            res = j;
            penalty = currPenalty;
        }

        if(customers[j] == 'Y'){
            after.first--;
            before.first++;
        }
        else{
            after.second--;         
            before.second++;         
        }
    }
    return res;
}

int main(){

    return 0;
}