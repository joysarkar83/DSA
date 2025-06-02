#include <iostream>
using namespace std;

int diagonalSum(int array[][3], int row, int col){
    int sum=0;
    if(row!=col){
        return sum;
    }
    
    //Primary diagonal
    for(int r=0,c=0; r<row, c<col; r++, c++){
        sum+=array[r][c];
    }

    //Secondary diagonal
    for(int r=0, c=col-1; r<row, c>=0; r++,c--){
        if(r==c){
            continue;
        }else{
            sum+=array[r][c];
        }
    }
    return sum;
}

int main(){
    // int array[4][4] = {{1,2,3,4},
    //                    {5,6,7,8},
    //                    {9,10,11,12},
    //                    {13,14,15,16}};
    
    int array[3][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    
    cout<<diagonalSum(array,3,3);
    return 0;
}