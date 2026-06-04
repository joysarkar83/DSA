#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(int array[][4], int row, int col){
    int srow=0, scol=0, erow=row-1, ecol=col-1;
    while(srow<=erow && scol<=ecol){
        //Top
        for(int r=srow,c=scol; c<=ecol; c++){
            cout<<array[r][c]<<" ";
        }

        //Right
        for(int r=srow+1,c=ecol; r<=erow; r++){
            cout<<array[r][c]<<" ";
        }

        //Bottom
        for(int r=erow,c=ecol-1; c>=scol; c--){
            if(srow==erow){  //middle
                break;
            }
            cout<<array[r][c]<<" ";
        }

        //Left
        for(int r=erow-1,c=scol; r>=srow+1; r--){
            if(scol==ecol){  //middle
                break;
            }
            cout<<array[r][c]<<" ";
        }

        srow++; scol++; erow--; ecol--;
    }

}

int main(){
    int array[3][4] = {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12}};

    spiralMatrix(array,3,4);

    return 0;
}