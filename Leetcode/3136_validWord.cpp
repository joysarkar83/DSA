#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
It contains only digits (0-9), and English letters (uppercase and lowercase).
It includes at least one vowel.
It includes at least one consonant.
*/

bool isValid(string& word) {
    int n = word.size();
    if(n < 3) return false;

    bool vowelPresent = false, consonantPresent = false;
    for(char i:word){
        int intVal = i-'0';
        if((intVal>=0 && intVal<=9)){
            continue;
        }
        
        i = tolower(i);
        if((i>='a' && i<='z')){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                vowelPresent = true;
            }
            else{
                consonantPresent = true;
            }
        }
        else{
            return false;
        }
    }
    if(vowelPresent && consonantPresent) return true;
    return false;
}

int main(){
    string s = "Ya$";

    cout<<isValid(s);

    return 0;
}