#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;

vector<string> uncommonFromSentences(string& s1, string& s2) {
    int size1 = s1.size(), size2 = s2.size();
    vector<string> res;
    string temp = "";

    unordered_map<string, int> hashMap;

    //Traversing in 1st String
    for(int i=0; i<size1; i++){
        if(s1[i] != ' '){
            temp += s1[i];
        }
        else{
            hashMap[temp]++;
            temp.clear();
        }
    }
    if(!temp.empty()) hashMap[temp]++;
    
    //Traversing in 2nd String
    temp = "";
    for(int i=0; i<size2; i++){
        if(s2[i] != ' '){
            temp += s2[i];
        }
        else{
            hashMap[temp]++;
            temp.clear();
        }
    }
    if(!temp.empty()) hashMap[temp]++;

    for(auto it:hashMap){
        if(it.second == 1) res.push_back(it.first);
    }

    return res;
}

int main(){
    string s1 = "this apple is sweet hello";
    string s2 = "this apple is sour";

    vector<string> vect = uncommonFromSentences(s1, s2);

    for(string s:vect){
        cout<<s<<"\n";
    }

    return 0;
}