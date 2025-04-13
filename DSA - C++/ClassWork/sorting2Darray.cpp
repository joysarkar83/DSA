#include <iostream>
using namespace std;

// void searchBruteForce(int array[][3], int row, int col, int target){
//     for(int r=0; r<row; r++){
//         for(int c=0; c<col; c++){
//             if(target==array[r][c]){
//                 cout<<"Row: "<<r+1<<"\nColumn: "<<c+1;
//             }
//         }
//     }
// }

void searchBinarySearch(int array[][6], int row, int col, int target){
    for(int r=0; r<row; r++){
        int start=0, end=col-1;
        while(start<=end){
            int mid = end + ((start-end)/2);
            if(array[r][mid]==target){
                cout<<"Row: "<<r+1<<"\nColumn: "<<mid+1;
                return;
            }
            else if(target<array[r][mid]){
                end = mid-1;
            }
            else if(array[r][mid]<target){
                start = mid+1;
            }
            else{
                cout<<"Not found!";
                return;
            }
        }
    }
    
}

int main(){
    int array[4][6] = {{41,42,43,44,45,46},
                       {51,52,53,54,55,56},
                       {61,62,63,64,65,66},
                       {71,72,73,74,75,76}};
    int search = 75;
    
    // searchBruteForce(array,4,3,search);
    searchBinarySearch(array,4,6,search);

    return 0;
}