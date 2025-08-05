#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int nf = fruits.size();
    int nb = baskets.size();
    int count = nb;
    for(int i = 0; i<nf; i++){
        int j = 0;
        for(j; j<nb; j++){
            if(fruits[i] <= baskets[j]){
                baskets[j] = -1;
                count--;
                break;
            }
        }
    }
    return count;
}

int main(){

    return 0;
}