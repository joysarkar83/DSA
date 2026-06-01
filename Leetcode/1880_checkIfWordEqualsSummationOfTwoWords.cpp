#include <iostream>
using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int val1 = 0, val2 = 0, val3 = 0;

    for(int i = 0; i < firstWord.size(); i++){
        firstWord[i] = (firstWord[i] - 'a') + '0'; 
    }
    for(int i = 0; i < secondWord.size(); i++){
        secondWord[i] = (secondWord[i] - 'a') + '0';
    }
    for(int i = 0; i < targetWord.size(); i++){
        targetWord[i] = (targetWord[i] - 'a') + '0';
    }
    
    val1 = stoi(firstWord);
    val2 = stoi(secondWord);
    val3 = stoi(targetWord);

    return val3 == val1 + val2;
}

int main(){

    return 0;
}