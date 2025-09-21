#include <iostream>
#include <vector>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
    if (n==1 && trust.size()==0) return 1;

    vector<int> trustCount(n+1);

    for(vector<int> pair:trust){
        trustCount[pair[0]]--;
        trustCount[pair[1]]++;
    }
    
    for(int i=0; i<(n+1); i++){
        if(trustCount[i] == (n-1)){
            return i;
        }
    }
    return -1;
}

int main(){

    return 0;
}