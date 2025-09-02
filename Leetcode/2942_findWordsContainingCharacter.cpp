#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    int n = words.size();
    
    vector<int> res;
    for(int i=0; i<n; i++){
        for(char& ch:words[i]){
            if(ch == x){
                res.emplace_back(i);
                break;
            }
        }
    }
    return res;
}

int main(){
    return 0;
}