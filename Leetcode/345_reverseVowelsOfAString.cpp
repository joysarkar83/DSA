#include <iostream>
#include <string>
using namespace std;

bool isVowel(char i){
    i = tolower(i);
    if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
        return true;
    }
    return false;
}

string reverseVowels(string& s) {
    int n = s.size();
    int i=0, j=n-1;
    while(i<j){
        while(i<j && !isVowel(s[i])){
            i++;
        }
        while(i<j && !isVowel(s[j])){
            j--;
        }
        swap(s[i], s[j]);
        i++; j--;
    }
    return s;
}


int main(){
    string s = "aeiou";

    cout<<reverseVowels(s);

    return 0;
}