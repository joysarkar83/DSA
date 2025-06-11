#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex){
    if(rowIndex == 0){
        return {1};
    }
    else if(rowIndex == 1){
        return {1,1};
    }
    else{
        vector<int> prevRow = {1,1};
        for(int i=2; i<=rowIndex; i++){
            vector<int> currRow;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    currRow.emplace_back(1);
                }
                else{
                    currRow.emplace_back(prevRow[j-1] + prevRow[j]);
                }
            }
            prevRow = currRow;
        }
        return prevRow;
    }
}

int main(){
    vector<int> triangle = getRow(4);

    for(int i=0; i<triangle.size(); i++){
        cout<<triangle[i]<<" ";
    }

    return 0;
}