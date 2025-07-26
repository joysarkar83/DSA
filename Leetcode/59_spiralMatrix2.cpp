#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> ans(n, vector<int>(n));
    int count = 1, maxVal = n*n;
    int rowSt = 0, colSt = 0;
    int rowEnd = n-1, colEnd = n-1;

    while(count <= maxVal){
        //Top
        for(int col = colSt; col<=colEnd && count<=maxVal; col++){
            ans[rowSt][col] = count++;
        }
        rowSt++;
        
        //Right
        for(int row = rowSt; row<=rowEnd && count<=maxVal; row++){
            ans[row][colEnd] = count++;
        }
        colEnd--;
        
        //Bottom
        for(int col=colEnd; col>=colSt && count<=maxVal; col--){
            ans[rowEnd][col] = count++;
        }
        rowEnd--;
        
        //Left
        for(int row = rowEnd; row>=rowSt && count<=maxVal; row--){
            ans[row][colSt] = count++;
        }
        colSt++;
    }
    return ans;
}

int main(){
    int n = 3;
    vector<vector<int>> matrix = generateMatrix(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }

    return 0;
}