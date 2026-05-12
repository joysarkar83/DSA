#include <iostream>
#include <vector>
using namespace std;

int oddCells(int nRows, int nCols, vector<vector<int>>& indices) {
    vector<vector<int>> res(nRows, vector<int>(nCols, 0));
    
    int itr = indices.size();
    for(int k=0; k<itr; k++){
        int r=indices[k][0], c=indices[k][1];
        for(int i=0; i<nCols; i++){
            res[r][i]++;
        }
        for(int i=0; i<nRows; i++){
            res[i][c]++;
        }
    }

    int odds = 0;
    for(int i = 0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(res[i][j]%2){
                odds++;
            }
        }
    }
    return odds;
}

int main(){
    return 0;
}