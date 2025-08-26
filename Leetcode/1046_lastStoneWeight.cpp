#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& vect){
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int lastStoneWeight(vector<int>& stones) {
    int n = stones.size();
    
    while(n > 1){
        sort(stones.begin(), stones.end());
        int val1 = stones[n-1];
        int val2 = stones[n-2];

        int temp = val1-val2;

        stones.pop_back();
        stones.pop_back();
        n-=2;

        if(temp > 0){
            stones.emplace_back(temp);
            n++;
        }

        printVector(stones);
    }

    if(stones.empty()) return 0;
    return stones[0];
}

int main(){

    return 0;
}