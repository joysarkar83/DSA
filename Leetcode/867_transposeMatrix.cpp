#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){
    if(matrix.size() == 0){
        return matrix;
    }
    int nRows = matrix.size(), nCols = matrix[0].size();
    vector<vector <int>> transposedMatrix(nCols, vector<int>(nRows));
    for(int rowIdx = 0; rowIdx<nRows; rowIdx++){
        for(int colIdx = 0; colIdx<nCols; colIdx++){
            transposedMatrix[colIdx][rowIdx] = matrix[rowIdx][colIdx];
        }
    }
    return transposedMatrix;
}

int main(){
    vector<vector <int>> img = {{1,2,3},
                                {4,5,6}};

    vector<vector <int>> transposedImg = transpose(img);

    for(int i=0; i<transposedImg.size(); i++){
        for(int j=0; j<transposedImg[0].size(); j++){
            cout<<transposedImg[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}