#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {    
    int start = 0, tank = 0, netGas = 0, netCost = 0, n = gas.size();
    for(int i=0; i<n; i++){
        netGas += gas[i];
        netCost += cost[i];
        tank += gas[i] - cost[i];
        
        if(tank < 0){
            start = i+1;
            tank = 0;
        }
    }
    if(netCost > netGas){
        return -1;
    }
    return start;
}

int main(){
    vector<int> gas = {3,1,1};
    vector<int> cost = {1,2,2};

    cout<<canCompleteCircuit(gas, cost);

    return 0;
}