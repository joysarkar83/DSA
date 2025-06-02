#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,6,3,1,5,7};

    unordered_map<int, int> freq;

    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }

    for(auto i:freq){
        cout<<i.first<<"->"<<i.second<<"\n";
    }

    return 0;
}