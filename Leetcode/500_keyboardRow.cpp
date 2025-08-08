#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

vector<string> findWords(vector<string>& words) {
    int n = words.size();
    if(n == 0) return {};

    vector<string> res;
    vector<unordered_set<char>> keys = {{'q','w','e','r','t','y','u','i','o','p'}, {'a','s','d','f','g','h','j','k','l'}, {'z','x','c','v','b','n','m'}};

    for(int i=0; i<n; i++){
        int currWordSize = words[i].size();
        char firstChar = words[i][0];
        int currRow = -1;

        for(int m=0; m<3; m++){
            if(keys[m].count(tolower(firstChar))){
                currRow = m;
            }
        }

        int j=0;
        for(j; j<currWordSize; j++){
            if(keys[currRow].count(tolower(words[i][j]))){
                continue;
            }
            else{
                break;
            }
        }

        if(j == currWordSize){
            res.push_back(words[i]);
        }
    }

    return res;
}

int main(){

    return 0;
}