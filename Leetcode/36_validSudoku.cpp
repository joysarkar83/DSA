#include <iostream>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>>& puzzle){
    for(int m=0; m<9; m++){
        for(int n=0; n<9; n++){

            char digit = puzzle[m][n];

            if(digit != '.'){
                puzzle[m][n] = '.';

                //Vertical Check
                for(int i=0; i<9; i++){
                    if(puzzle[i][n] == digit){
                        return false;
                    }
                }
            
                //Horizontal Check
                for(int j=0; j<9; j++){
                    if(puzzle[m][j] == digit){
                        return false;
                    }
                }
            
                //3x3 Grid Check
                int rowStart = (m/3) * 3, colStart = (n/3) * 3;
                for(int i=rowStart; i<=rowStart+2; i++){
                    for(int j=colStart; j<=colStart+2; j++){
                        if(puzzle[i][j] == digit){
                            return false;
                        }
                    }
                }

                puzzle[m][n] = digit;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> puzzle = {
         {'.','.','5','.','.','.','.','.','.'}
        ,{'.','.','.','8','.','.','.','3','.'}
        ,{'.','5','.','.','2','.','.','.','.'}
        ,{'.','.','.','.','.','.','.','.','.'}
        ,{'.','.','.','.','.','.','.','.','9'}
        ,{'.','.','.','.','.','.','4','.','.'}
        ,{'.','.','.','.','.','.','.','.','7'}
        ,{'.','1','.','.','.','.','.','.','.'}
        ,{'2','4','.','.','.','.','9','.','.'}
    };

    cout<<isValidSudoku(puzzle);

    return 0;
}