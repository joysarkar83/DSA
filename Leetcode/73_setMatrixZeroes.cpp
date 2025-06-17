#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    if(matrix.empty()) return;

    int nCols = matrix[0].size();
    int nRows = matrix.size();

    vector<int> zeroRows();
    vector<int> zeroColumns;

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(matrix[i][j] == 0){
                zeroRows.emplace_back(i);
                zeroColumns.emplace_back(j);
            }
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