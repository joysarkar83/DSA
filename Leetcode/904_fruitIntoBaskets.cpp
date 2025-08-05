#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    unordered_map<int, int> basket;
    int maxElems = 0;

    int i = 0, j = 0;

    while(j<n){
        if(basket.size() <= 2){
            basket[fruits[j]]++;
        }
        while(basket.size() > 2){
            basket[fruits[i]]--;
            if(basket[fruits[i]] == 0) basket.erase(fruits[i]);
            i++;
        }
        maxElems = max(maxElems, (j - i + 1));
        j++;
    }
    return maxElems;
}

int main(){

    return 0;
}