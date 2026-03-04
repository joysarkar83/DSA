#include <iostream>
#include <vector>
using namespace std;

int numSpecial(vector<vector<int>>& mat) {
    int nRows = mat.size(), nCols = mat[0].size();
    int res = 0;
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(mat[i][j] == 1){
                int flag = true;
                // Up
                for(int r=i-1; r>=0 && flag; r--){
                    if(mat[r][j] == 1){
                        flag = false;
                        break;
                    }
                }
                // Down
                for(int r=i+1; r<nRows && flag; r++){
                    if(mat[r][j] == 1){
                        flag = false;
                    }
                }
                // Left
                for(int c=j-1; c>=0 && flag; c--){
                    if(mat[i][c] == 1){
                        flag = false;
                    }
                }
                // Right
                for(int c=j+1; c<nCols && flag; c++){
                    if(mat[i][c] == 1){
                        flag = false;
                    }
                }

                if(flag){
                    res++;
                }
            }
        }
    }
    return res;
}

int main(){

    return 0;
}