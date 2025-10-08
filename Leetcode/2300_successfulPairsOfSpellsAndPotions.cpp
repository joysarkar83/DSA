#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    int ns = spells.size(), np = potions.size();
    vector<int> res(ns, 0);
    sort(potions.begin(), potions.end());
    for(int i=0; i<ns; i++){
        for(int j=0; j<np; j++){
            if((long long unsigned int)spells[i]*potions[j] >= success){
                res[i] = np-j;
                break;
            }
        }
    }
    return res;
}

int main(){

    return 0;
}