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

vector<vector<int>> construct2DArray(vector<int> &original, int row, int col) {
    vector<vector<int>> matrix(row, vector<int>(col));
    if(row*col != original.size()){
        return {};
    }else{
        int index = 0;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                matrix[r][c] = original[index++];
            }
        }
    }
    return matrix;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int countRows = 2, countColumns = 2;
    printMatrix(construct2DArray(nums, countRows, countColumns));
    return 0;
}