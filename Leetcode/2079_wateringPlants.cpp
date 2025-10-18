#include <iostream>
#include <vector>
using namespace std;

int wateringPlants(vector<int>& plants, int capacity) {
    int dist = 0, n = plants.size(), cap = capacity;
    for(int curr = 0; curr<n; curr++){
        if(capacity >= plants[curr]){
            dist++;
            capacity -= plants[curr];
        }else{
            dist += 2 * curr + 1;
            capacity = cap - plants[curr];
        }
    }
    return dist;
}

int main(){

    return 0;
}