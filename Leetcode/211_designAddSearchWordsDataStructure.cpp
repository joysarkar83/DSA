#include <iostream>
#include <vector>
using namespace std;

class WordDictionary {
    vector<string> data;
    public:
    WordDictionary() {
        data = {};
    }
    
    void addWord(string word) {
        data.emplace_back(word);
    }
    
    bool search(string word) {
        int containsDots = false;
        for(char i:word){
            if(i == '.') containsDots = true;
        }

        if(!containsDots){
            for(string i:data){
                if(word == i){
                    return true;
                }
            }
        }
        else{
            int wordSize = word.size();
            for(string i:data){
                if(i.size() == wordSize){
                    bool match = true;
                    for(int j=0; j<wordSize; j++){

                        if(word[j] != '.'){
                            if(i[j] != word[j]){
                                match = false;
                                break;
                            }
                        }
                    }
                    if(match) return true;
                }
            }

        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
int main(){

    return 0;
}