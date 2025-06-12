#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int numJewelsInStones(string& jewels, string& stones) {
    unordered_map<char, int> hashTable;
    for(int i=0; i<stones.size(); i++){
        hashTable[stones[i]]++;
    }
    
    int result = 0;
    for(int i=0; i<jewels.size(); i++){
        result += hashTable[jewels[i]];
    }
    return result;
}

int main(){
    string jewels = "z", stones = "ZZ";

    cout<<numJewelsInStones(jewels, stones);

    return 0;
}