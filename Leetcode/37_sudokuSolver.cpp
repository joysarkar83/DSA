#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& puzzle, int row, int col, int digit){
    //Vertical Check
    for(int i=0; i<9; i++){
        if(puzzle[i][col] == digit + '0'){
            return false;
        }
    }

    //Horizontal Check
    for(int j=0; j<9; j++){
        if(puzzle[row][j] == digit + '0'){
            return false;
        }
    }
    
    //3x3 Grid Check
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    for(int i=rowStart; i<=rowStart+2; i++){
        for(int j=colStart; j<=colStart+2; j++){            
            if(puzzle[i][j] == digit + '0'){
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(vector<vector<char>>& puzzle, int row, int col){
    if(row == 9){
        return true;
    }

    int nextRow = row, nextCol = col+1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }

    if(puzzle[row][col] != '.'){
        return sudokuSolver(puzzle, nextRow, nextCol);
    }

    for(int digit=1; digit<=9; digit++){
        if(isSafe(puzzle, row, col, digit)){
            puzzle[row][col] = digit + '0';
            if(sudokuSolver(puzzle, nextRow, nextCol)){
                return true;
            }
            puzzle[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& puzzle) {
    sudokuSolver(puzzle, 0, 0);
    return;
}

int main(){
    vector<vector<char>> puzzle = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    solveSudoku(puzzle);

    for(vector<char> i:puzzle){
        for(char j:i){
            cout<<j<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}