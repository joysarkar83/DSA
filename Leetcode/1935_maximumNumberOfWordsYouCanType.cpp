#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    vector<string> words;
    string currWord;
    for(char ch:text){
        if(ch == ' '){
            words.push_back(currWord);
            currWord.clear();
        }
        else{
            currWord += ch;
        }
    }
    words.push_back(currWord);

    unordered_set<char> broken;
    for(char ch : brokenLetters){
        broken.emplace(ch);
    }
    
    int count  = 0;
    for(string str : words){
        bool countIn = true;
        for(char ch : str){
            if(broken.find(ch) != broken.end()){
                countIn = false;
                break;
            }
        }
        if(countIn == true){
            count++;
        }
    }
    return count;
}

int main(){

    return 0;
}