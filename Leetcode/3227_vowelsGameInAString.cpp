#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isVowel(char& ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        return true;
    }
    return false;
}

bool doesAliceWin(string& s) {
    for(char ch:s){
        if(isVowel(ch)) return true;
    }
    return false;
}

int main(){

    return 0;
}