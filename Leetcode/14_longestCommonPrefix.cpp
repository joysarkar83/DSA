#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 1){
        return strs[0];
    }
    string str;
    int idx = 0;

    while(true){
        if (idx >= strs[0].size()) break;
        char ch = strs[0][idx];
        bool takeThis = true;

        for(string& s:strs){
            if(s[idx] != ch){
                takeThis = false;
                break;
            }
        }
        if (!takeThis) break;
        str.push_back(ch);
        idx++;
    }
    return str;
}

int main(){
    return 0;
}