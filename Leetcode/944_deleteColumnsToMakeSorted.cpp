#include <iostream>
#include <vector>
using namespace std;

int minDeletionSize(vector<string>& strs) {
    int nRows = strs.size(), nCols = strs[0].size(), count = 0;
    for(int i=0; i<nCols; i++){
        for(int j=1; j<nRows; j++){
            if(strs[j][i] < strs[j-1][i]){
                count ++;
                break;
            }
        }
    }
    return count;
}

int main(){

    return 0;
}