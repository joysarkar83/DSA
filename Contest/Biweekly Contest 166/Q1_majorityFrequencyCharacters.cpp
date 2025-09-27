#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

string majorityFrequencyGroup(string& s) {
    unordered_map<char, int> freq1;
    for(char ch:s){
        freq1[ch]++;
    }
    
    unordered_map<int, string> freq2;
    for(auto itr=freq1.begin(); itr!=freq1.end(); itr++){
        freq2[itr->second] += itr->first;
    }


    int bestSize = 0, bestFreq = 0;
    s = "";
    for(auto& itr : freq2){
        int currFreq = itr.first;
        int currSize = itr.second.size();

        if(currSize > bestSize || (currSize == bestSize && currFreq > bestFreq  )){
            bestSize = currSize;
            bestFreq = currFreq;
            s = itr.second;
        }
    }
    return s;
}

int main(){
    string str = "mmekm";

    cout<<majorityFrequencyGroup(str);

    return 0;
}