#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    int n = words.size();
    
    vector<string> track;

    for(int i=0; i<words[0].size(); i++){
        int j=1;
        for(; j<words.size(); j++){
            bool flag = false;
            for(int k=0; k<words[j].size(); k++){
                if(words[0][i] == words[j][k]){
                    words[j][k] = '#';
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                break;
            }
        }
        if (j == words.size()) {
            string s;
            s+=words[0][i];
            track.emplace_back(s);
        }
    }
    return track;
}

int main(){

    return 0;
}