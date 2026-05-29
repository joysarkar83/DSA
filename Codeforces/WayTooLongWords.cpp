#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> words;
    for(int i=0; i<n; i++){
        string word;
        cin >> word;
        words.emplace_back(word);
    }
    
    for(int i=0; i<n; i++){
        string word;
        if(words[i].size() > 10){
            word.push_back(words[i][0]);
            word += to_string(words[i].size()-2);
            word.push_back(words[i][words[i].size()-1]);
        }else{
            word = words[i];
        }
        cout<<word<<"\n";
    }

    return 0;
}