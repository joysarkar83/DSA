#include <iostream>
using namespace std;

int countInstances(int array[][3], int row, int col, int target){
    int count = 0;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(array[r][c] == target){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int nums[2][3] = {{4,7,8},
                      {8,8,7}};

    int countNum = 7;
    cout<<countInstances(nums,2,3, countNum);
    return 0;
}