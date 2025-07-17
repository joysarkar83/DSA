#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int findLucky(vector<int>& arr) {
    int n = arr.size();
    if(n == 0) return -1;
    if((n == 1) && (arr[0] == 1)) return 1;

    map<int, int> freq;

    for(int i=0; i<n; i++){
        if(freq.find(arr[i]) != freq.end()){
            freq[arr[i]]++;
        }
        else{
            freq[arr[i]] = 1;
        }
    }

    for (auto i = freq.rbegin(); i != freq.rend(); ++i){
        if(i->first == i->second){
            return i->first;
        }
    }
    return -1;
}

int main(){
    vector<int> num = {2,2,2,1,1,3,3,3,4};

    cout<<findLucky(num);

    return 0;
}