#include <iostream>
#include <vector>
using namespace std;


//Optimised
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int row = mat.size();
    if(row == 0) return mat;

    int col = mat[0].size();

    if(row*col != r*c){
        return mat;
    }

    vector<vector<int>> res(r, vector<int>(c));
    for(int i=0; i<row*col; i++){
        res[i/c][i%c] = mat[i/col][i%col];
    }

    return res;
}

//Not exactly Brute Force
// vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
//     if(mat.size() == 0) return mat;

//     int row = mat.size(), col = mat[0].size();

//     if(row*col != r*c){
//         return mat;
//     }

//     vector<int> values;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             values.emplace_back(mat[i][j]);
//         }
//     }
    
//     vector<vector<int>> res(r, vector<int>(c));
//     int index = 0;
//     for(int k=0; k<r; k++){
//         for(int l=0; l<c; l++){
//             res[k][l] = values[index++];
//         }
//     }

//     return res;
// }

int main(){
    vector<vector<int>> mat = {{1,2},{3,4}};

    int r = 1, c = 4;

    vector<vector<int>> res = matrixReshape(mat, r, c);

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}