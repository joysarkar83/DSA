#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int findSpecialInteger(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int,int> freq;
    for(int i:arr){
        freq[i]++;
    }
    
    for(auto itr:freq){
        if((double(itr.second)/n) >= 0.25){
            return itr.first;
        }
    }
    return -1;
}

int main(){

    return 0;
}