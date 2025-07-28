#include <iostream>
#include <vector>
using namespace std;

bool canConstruct(string& ransomNote, string& magazine) {
    int mSize = magazine.size();
    int nSize = ransomNote.size();

    vector<int> hashTable(26, 0);

    for(int i=0; i<nSize; i++){
        cout<<"debug\n";
        hashTable[ransomNote[i] - 'a']++;
    }


    for(int i=0; i<mSize; i++){
        hashTable[magazine[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(hashTable[i] > 0) return false;
    }
    return true;
}

int main(){
    string ransomNote = "abcd";
    string magazine = "acnmbde";

    cout<<canConstruct(ransomNote, magazine);

    return 0;
}