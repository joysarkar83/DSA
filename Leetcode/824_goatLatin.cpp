#include <iostream>
#include <string>
using namespace std;

string process(string& str, int times){
    int n = str.size();
    string newWord;
    int i=0;
    if(!isVowel(str[0])){
        i = 1;
    }
    for(; i<n; i++){
        newWord += str[i];
    }

    if(!isVowel(str[0])){
        newWord += str[0];
    }
    newWord += "ma";

    while(times>0){
        newWord += 'a';
        times--;
    }
    return newWord;
}

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

string toGoatLatin(string sentence) {
    int wordCount = 1;

    string final = "";

    string currWord = "";
    for(char ch : sentence){
        if(ch == ' '){
            currWord = process(currWord, wordCount);
            final += currWord;
            final += ' ';
            wordCount++;
            currWord = "";
        }
        else{
            currWord += ch;
        }
    }
    currWord = process(currWord, wordCount);
    final += currWord;

    return final;
}

int main(){
    return 0;
}