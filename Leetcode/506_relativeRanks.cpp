#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <map>
#include <algorithm>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    vector<string> res(n);
    map<int, int> mp;                       //<value, index>

    for(int i=0; i<n; i++){
        mp[score[i]] = i;
    }

    int rank = 1;
    for (auto itr = mp.rbegin(); itr != mp.rend(); itr++) {
        if (rank == 1) res[itr->second] = "Gold Medal";
        else if (rank == 2) res[itr->second] = "Silver Medal";
        else if (rank == 3) res[itr->second] = "Bronze Medal";
        else res[itr->second] = to_string(rank);
        rank++;
    }

    return res;
}

int main(){
    vector<int> vect = {10,3,8,9,4};

    vector<string> ans = findRelativeRanks(vect);

    for(string i:ans){
        cout<<i<<"\n";
    }

    return 0;
}