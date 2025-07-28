#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool exists(string& temp, vector<string>& wordDict){
    cout<<temp<<"\n";
    int n = wordDict.size();
    for(int i=0, j=n-i-1; i<=n/2; i++, j--){
        if(temp == wordDict[i] || temp == wordDict[j]){
            cout<<"Debug\n";
            return true;
        }
    }
    return false;
}

bool wordBreak(string& s, vector<string>& wordDict) {
    string temp;
    for(int i=0; i<s.size(); i++){
        temp += s[i];
        if(exists(temp, wordDict)){
            temp.clear();
        }
    }
    return temp.empty();
}

int main(){
    string str = "aaaaaaa";
    vector<string> wordDict = {"aaaa","aaa"};

    cout<<wordBreak(str, wordDict);

    return 0;
}