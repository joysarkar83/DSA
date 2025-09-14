#include <bits/stdc++.h>
using namespace std;

string toLowercase(string word){
    for(char& ch:word){
        ch = tolower(ch);
    }
    return word;
}

string removeVowel(string word){
    string newStr;
    for(char ch:word){
        if(isVowel(ch)){
            newStr.push_back('*');
        }else{
            newStr.push_back(ch);
        }
    }
    return newStr;
}

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
    unordered_set<string> unique(wordlist.begin(), wordlist.end());
    unordered_map<string, string> caseMap;
    unordered_map<string, string> vowelMap;

    for (string w : wordlist) {
        string lower = toLowercase(w);
        string devowel = removeVowel(lower);
        if (!caseMap.count(lower)) caseMap[lower] = w;
        if (!vowelMap.count(devowel)) vowelMap[devowel] = w;
    }

    vector<string> final;
    for(string qr:queries){
        auto it = find(wordlist.begin(), wordlist.end(), qr);
        if (it != wordlist.end()) {
            final.emplace_back(qr);
        } 
        else{
            string lower = toLowercase(qr);
            string deVowel = removeVowel(lower);

            if(caseMap.count(lower) != 0) final.emplace_back(caseMap[lower]);
            else if(vowelMap.count(deVowel) != 0) final.emplace_back(vowelMap[deVowel]);
            else final.emplace_back("");
        }
    }
    return final;
}

int main(){

    return 0;
}