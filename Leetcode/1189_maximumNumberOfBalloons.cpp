#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> freq;
    for(char ch:text){
        freq[ch]++;
    }
    freq['l']/=2;
    freq['o']/=2;
    // 1B 1A 2L 2O 1N
    int count = INT_MAX;
    string letters = "balon";
    for(char ch:letters){
        count = min(count, freq[ch]);
    }
    return count;
}

int main(){

    return 0;
}