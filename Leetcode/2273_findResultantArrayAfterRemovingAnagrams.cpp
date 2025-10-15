#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> removeAnagrams(vector<string>& words) {
    int n = words.size();
    vector<string> res, copy(words);
    string prev = "";
    for(int i=0; i<n; i++){
        sort(copy[i].begin(), copy[i].end());
        if(copy[i] != prev){
            res.emplace_back(words[i]);
        }
        prev = copy[i];
    }
    return res;
}

int main(){
    vector<string> words = {"abba","baba","bbaa","cd","cd","ee","ee"};
    vector<string> res = removeAnagrams(words);

    for(string str:res){
        cout<<str<<" ";
    }
    cout<<"\n";

    return 0;
}