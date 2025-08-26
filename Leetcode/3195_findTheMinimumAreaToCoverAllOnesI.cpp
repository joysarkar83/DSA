#include <iostream>
#include <vector>
using namespace std;

int minimumArea(vector<vector<int>>& grid) {
    int nRows = grid.size(), nCols = grid[0].size();
    int firstR = nRows, firstC = nCols;
    int lastR = -1, lastC = -1;
    
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(grid[i][j] == 1){
                if(i < firstR) firstR = i;
                if(i > lastR) lastR = i;
                if(j < firstC) firstC = j;
                if(j > lastC) lastC = j;
            }
        }
    }
    return (lastR-firstR+1) * (lastC-firstC+1);
}

int main(){
    return 0;
}