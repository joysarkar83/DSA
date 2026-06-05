#include <iostream>
#include <vector>
using namespace std;

int main(){
    string str;
    cin >> str;

    int n = str.size();
    vector<string> words;
    string word = "";

    for(int i=0; i<n; i++){
        if(i+2 < n && str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            if(!word.empty()){
                words.emplace_back(word);
                word.clear();
            }
            i += 2;
        } 
        else {
            word.push_back(str[i]);
        }
    }
    if(!word.empty()){
        words.emplace_back(word);
    }

    for(auto it : words){
        cout << it << " ";
    }

    return 0;
}