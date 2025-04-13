#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> array){
    for(int r=0; r<array.size(); r++){
        for(int c=0; c<array[0].size(); c++){
            cout<<array[r][c]<<"\t";
        }
        cout<<"\n";
    }
}

vector<vector<int>> transpose(int nums[][3], int row, int col){
    vector<vector<int>> matrix(col, vector<int>(row));
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            matrix[c][r] = nums[r][c];
        }
    }
    return matrix;
}

int main(){
    int nums[3][3] = {{1,4,9},
                      {11,4,3},
                      {2,2,3}};

    printMatrix(transpose(nums, 3, 3));

    return 0;
}