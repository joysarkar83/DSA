#include <iostream>
#include <vector>
using namespace std;

void printSudoku(vector<vector<int>>& sudokuPuzzle){
    for(vector<int> i:sudokuPuzzle){
        for(int j:i){
            cout<<j<<"  ";
        }
        cout<<"\n";
    }
    return;
}

bool isSafe(vector<vector<int>>& puzzle, int row, int col, int digit){
    //Vertical Check
    for(int i=0; i<9; i++){
        if(puzzle[i][col] == digit){
            return false;
        }
    }

    //Horizontal Check
    for(int j=0; j<9; j++){
        if(puzzle[row][j] == digit){
            return false;
        }
    }
    
    //3 x 3 Grid Check
    int startRow = (row/3) * 3;
    int startCol = (col/3) * 3;
    
    for(int i = startRow; i<=startRow+2; i++){
        for(int j = startCol; j<=startCol+2; j++){
            if(puzzle[i][j] == digit){
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(vector<vector<int>>& puzzle, int row, int col){
    if(row == 9){
        printSudoku(puzzle);
        return true;
    }

    int nextRow = row, nextCol = col+1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }

    if(puzzle[row][col] == 0){
        for(int digit=1; digit<=9; digit++){
            if(isSafe(puzzle, row, col, digit)){ //To be written
                puzzle[row][col] = digit;
                if(sudokuSolver(puzzle, nextRow, nextCol)){
                    return true;
                }
                puzzle[row][col] = 0;
            }
        }
        return false;
    }
    else{
        return sudokuSolver(puzzle, nextRow, nextCol);
    }
}

int main(){
    // vector<vector<int>> sudokuPuzzle = {{0, 0, 0, 2, 6, 0, 7, 0, 1},
    //                                     {6, 8, 0, 0, 7, 0, 0, 9, 0},
    //                                     {1, 9, 0, 0, 0, 4, 5, 0, 0},
    //                                     {8, 2, 0, 1, 0, 0, 0, 4, 0},
    //                                     {0, 0, 4, 6, 0, 2, 9, 0, 0},
    //                                     {0, 5, 0, 0, 0, 3, 0, 2, 8},
    //                                     {0, 0, 9, 3, 0, 0, 0, 7, 4},
    //                                     {0, 4, 0, 0, 5, 0, 0, 3, 6},
    //                                     {7, 0, 3, 0, 1, 8, 0, 0, 0}};

    vector<vector<int>> sudokuPuzzle = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                                        {6, 5, 0, 1, 9, 5, 0, 0, 0}, // ⚠️ '5' repeats in the same row
                                        {0, 9, 8, 0, 0, 0, 0, 6, 0},
                                        {8, 0, 0, 0, 6, 0, 0, 0, 3},
                                        {4, 0, 0, 8, 0, 3, 0, 0, 1},
                                        {7, 0, 0, 0, 2, 0, 0, 0, 6},
                                        {0, 6, 0, 0, 0, 0, 2, 8, 0},
                                        {0, 0, 0, 4, 1, 9, 0, 3, 5},
                                        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if(!sudokuSolver(sudokuPuzzle, 0, 0)){
        cout<<"SOLUTION DOESN'T EXIST FOR THIS BOARD!";
    }

    return 0;
}