#include <iostream>
#include <vector>
using namespace std;

//TLE
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int nf = fruits.size();
    int nb = baskets.size();
    int unplaced = nf;
    for(int i=0; i<nf; i++){
        for(int j=0; j<nb; j++){
            if(baskets[j] >= fruits[i]){
                unplaced--;
                baskets[j] = -1;
                break;
            }
        }
    }
    return unplaced;
}

int main(){

    return 0;
}