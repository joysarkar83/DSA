#include <iostream>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int drank = numBottles, emptyBottles = numBottles;
    while(emptyBottles >= numExchange){
        numBottles = emptyBottles / numExchange;  //Exchange
        emptyBottles = emptyBottles % numExchange;
        drank += numBottles;
        emptyBottles += numBottles;
    }
    
    return drank;
}

int main(){
    return 0;
}