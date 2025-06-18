#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    if(matrix.empty()) return;

    int rowSize = matrix.size(), colSize = matrix[0].size();
    vector<int> zeroRow, zeroCol;

    //Getting indexs with zeroes
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(matrix[i][j] == 0){
                zeroRow.emplace_back(i);
                zeroCol.emplace_back(j);
            }
        }
    }

    //Converting zero rows and columns
    for(int i=0; i<zeroRow.size(); i++){
        for(int j=0; j<colSize; j++){
            matrix[zeroRow[i]][j] = 0;
        }
    }
    for(int i=0; i<zeroCol.size(); i++){
        for(int j=0; j<rowSize; j++){
            matrix[j][zeroCol[i]] = 0;
        }
    }
    return;
}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

    setZeroes(matrix);

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}