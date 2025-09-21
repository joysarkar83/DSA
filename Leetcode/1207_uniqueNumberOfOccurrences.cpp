#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int n = arr.size();
    
    vector<pair<int, int>> freq;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        int count = 1;
        int curr = arr[i++];
        while((i<n) && (arr[i]==curr)){
            count++;
            i++;
        }
        i--;
        freq.emplace_back(curr, count);
    }

    n = freq.size();

    sort(freq.begin(), freq.end(), [](pair<int,int> p1, pair<int,int> p2){
        return p1.second < p2.second;
    });

    for(int i=1; i<n; i++){
        if(freq[i].second == freq[i-1].second) return false;
    }

    return true;
}

int main(){
    return 0;
}