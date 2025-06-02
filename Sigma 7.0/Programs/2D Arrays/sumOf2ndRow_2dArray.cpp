#include <iostream>
using namespace std;

int sumOf2ndRow(int array[][3], int col){
    int sum = 0;
    for(int c=0; c<col; c++){
        sum+=array[1][c];
    }
    return sum;
}

int main(){
    int nums[3][3] = {{1,4,9},
                      {11,4,3},
                      {2,2,3}};

    cout<<sumOf2ndRow(nums,3);
    return 0;
}