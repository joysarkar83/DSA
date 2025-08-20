#include <iostream>
#include <vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int count = 0;

    int rookR = -1, rookC = -1;

    for(int r=0; r<8; r++){
        for(int c=0; c<8; c++){
            if(board[r][c] == 'R'){
                rookR = r;
                rookC = c;
            }
        }
    }

    // check top
    for(int r = rookR; r>=0; r--){
        char curr = board[r][rookC];
        if(curr == 'B'){
            break;
        }else if(curr == 'p'){
            count++;
            break;
        }
    }

    // check bottom
    for(int r = rookR; r<8; r++){
        char curr = board[r][rookC];
        if(curr == 'B'){
            break;
        }else if(curr == 'p'){
            count++;
            break;
        }
    }

    // check right
    for(int c = rookC; c<8; c++){
        char curr = board[rookR][c];
        if(curr == 'B'){
            break;
        }else if(curr == 'p'){
            count++;
            break;
        }
    }
    
    // check left
    for(int c = rookC; c>=0; c--){
        char curr = board[rookR][c];
        if(curr == 'B'){
            break;
        }else if(curr == 'p'){
            count++;
            break;
        }
    }

    return count;
}

int main(){

    return 0;
}