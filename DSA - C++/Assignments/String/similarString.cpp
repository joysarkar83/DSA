#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSimilar(string word1, string word2){
    //Given Length same, we'll check only type and count no. of discontinuencies
    vector<bool> exists1(26, false), exists2(26, false);
    for(char c:word1){
        exists1[c - 'a'] = true;
    }
    for(char c:word2){
        exists2[c - 'a'] = true;
    }

    if(exists1 != exists2){
        return false;
    }

    int count = 0;
    for(int i=0; i<word1.size(); i++){
        if(word1[i] != word2[i]){
            count++;
        }
    }
    if(count == 2 || count == 0){
        return true;
    }
    return false;
}

int main(){
    string w1 = "bank";
    string w2 = "nbka";

    cout<<isSimilar(w1, w2);

    return 0;
}
