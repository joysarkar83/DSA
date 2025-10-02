#include <iostream>
using namespace std;

int maxBottlesDrunk(int numBottles, int numExchange) {
    if(numBottles < numExchange){
        return numBottles;
    }

    int consumed = numBottles, emptyBottles = numBottles;

    while(emptyBottles >= numExchange){
        emptyBottles -= numExchange;
        numExchange++;
        consumed++;
        emptyBottles++;
    }
    return consumed;
}

int main(){

    return 0;
}