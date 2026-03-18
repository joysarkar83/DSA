#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

int similarPairs(vector<string>& words) {
    unordered_map<string, int> uniq;
    for(string& str : words){
        set<char> curr;
        for(char& ch:str){
            curr.emplace(ch);
        }
        string currStr = "";
        for(auto itr=curr.begin(); itr!=curr.end(); itr++){
            currStr.push_back(*itr);
        }
        uniq[currStr]++;
    }
    int res = 0;
    for(auto itr=uniq.begin(); itr!=uniq.end(); itr++){
        int k = itr->second;
        res += (k * (k - 1)) / 2;
    }
    return res;
}

int main(){

}