#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string originalDigits(string s) {
    vector<int> res;
    unordered_map<char, int> freq;
    for(char& ch:s){
        if(ch == 'z'){
            for(char k:"zero"){
                freq[k]--;
            }
            res.push_back(0);
        }
        else if(ch == 'w'){
            for(char k:"two"){
                freq[k]--;
            }
            res.push_back(2);
        }
        else if(ch == 'u'){
            for(char k:"four"){
                freq[k]--;
            }
            res.push_back(4);
        }
        else if(ch == 'x'){
            for(char k:"six"){
                freq[k]--;
            }
            res.push_back(6);
        }
        else if(ch == 'g'){
            for(char k:"eight"){
                freq[k]--;
            }
            res.push_back(8);
        }
        freq[ch]++;
    }
    while((freq.find('o')!=freq.end()) && (freq['o']>0)){
        for(char k:"one"){
            freq[k]--;
        }
        res.push_back(1);
    }
    while((freq.find('v')!=freq.end()) && (freq['v']>0)){
        for(char k:"five"){
            freq[k]--;
        }
        res.push_back(5);
    }
    while((freq.find('v')!=freq.end()) && (freq['v']>0)){
        for(char k:"seven"){
            freq[k]--;
        }
        res.push_back(7);
    }
    while((freq.find('i')!=freq.end()) && (freq['i']>0)){
        for(char k:"nine"){
            freq[k]--;
        }
        res.push_back(9);
    }
    while((freq.find('h')!=freq.end()) && (freq['h']>0)){
        for(char k:"three"){
            freq[k]--;
        }
        res.push_back(3);
    }
    
    sort(res.begin(), res.end());
    s = "";
    for(int& i:res){
        s.push_back(i + '0');
    }
    return s;
}

int main(){

    return 0;
}