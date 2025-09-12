#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool isVowel(char& ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
    }
    return false;
}

string sortVowels(string& s) {
    int n = s.size();
    vector<int> indexes;
    multiset<char> letters;
    for(int i=0; i<n; i++){
        if(isVowel(s[i])){
            indexes.emplace_back(i);
            letters.emplace(s[i]);
        }
    }

    auto ptr = letters.begin();
    for(int i:indexes){
        s[i] = *ptr;
        ptr++;
    }
    return s;
}

int main(){


    return 0;
}