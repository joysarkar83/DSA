#include <iostream>
using namespace std;

//REQUIREMENT: Sorted Array
//Concept: Top-right-corner and bottom-left-corner elements are special coz it can show us which direction to move
//         based on the current element being > or < than the target element because the matrix is sorted.


//Top Right Corner approach
// void staircaseSearch(int array[][6], int row, int col, int target){
//     int r=0, c=col-1;
//     while(r<row && c>=0){
//         if(target == array[r][c]){
//             cout<<"Row: "<<r+1<<"\nColumn: "<<c+1;
//             return;
//         }else if(target > array[r][c]){
//             r++;
//         }else if(target < array[r][c]){
//             c--;
//         }
//     }
//     cout<<"Not found!!";
// }

//Bottom Left Corner approach
void staircaseSearch(int array[][6], int row, int col, int target){
    int r=row-1, c=0;
    while(r>=0 && c<col){
        if(target==array[r][c]){
            cout<<"Row: "<<r+1<<"\nColumn: "<<c+1;
            return;
        }else if(target > array[r][c]){
            c++;
        }else if(target < array[r][c]){
            r--;
        }
    }
    cout<<"Not Found!!";
}

int main(){
    int array[4][6] = {{41,42,43,44,45,46},
                       {51,52,53,54,55,56},
                       {61,62,63,64,65,66},
                       {71,72,73,74,75,76}};
    int search = 75;
    
    staircaseSearch(array,4,6,search);

    return 0;
}