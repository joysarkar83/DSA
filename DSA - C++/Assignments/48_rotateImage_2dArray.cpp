#include <iostream>
#include <vector>
using namespace std;

/*
APPROACH:
    STEP 1: Find transpose of the matrix
    STEP 2: Either interchange the columns OR rotate the rows
*/

void print(vector<vector<int>> matrix){
    int row = matrix.size(), col = matrix[0].size();
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            cout<<matrix[r][c]<<"\t";
        }
        cout<<"\n";
    }
}

void rotate(vector<vector<int>>& matrix) {
    //Transpose
    int row = matrix.size(), col = matrix[0].size();
    for(int r=0; r<row; r++){
        for(int c=0; c<r; c++){
            swap(matrix[r][c], matrix[c][r]);
        }
    }

    //Rotate Rows - 2 Pointer Approach
    for(int r=0; r<row; r++){
        for(int start=0, end=col-1; start<end; start++, end--){
            swap(matrix[r][start], matrix[r][end]);
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};

    rotate(matrix);
    print(matrix);
    return 0;
}