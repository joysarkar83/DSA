#include <iostream>
#include <vector>
using namespace std;

int countSquares(vector<vector<int>>& matrix) {
    int nRow = matrix.size(), nCol = matrix[0].size();
    int count = 0;

    for(int currR = 0; currR < nRow; currR++){
        for(int currC = 0; currC < nCol; currC++){
            if(matrix[currR][currC] == 1){
                count++;
                
                int nextRow = currR+1, nextCol = currC+1;
                
                while(nextRow<nRow && nextCol<nCol){
                    bool rowValid = true, colValid = true;
                    for(int i=currR; i<=nextRow; i++){
                        if(!matrix[i][nextCol]){
                            rowValid = false;
                            break;
                        }
                    }

                    for(int j=currC; j<=nextCol; j++){
                        if(!matrix[nextRow][j]){
                            colValid = false;
                            break;
                        }
                    }
    
                    if(rowValid && colValid){
                        count++;
                        nextRow++; nextCol++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    return count;
}

int main(){
    return 0;
}