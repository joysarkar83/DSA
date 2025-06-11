#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    if(numRows == 1){
        return {{1}};
    }
    else if(numRows == 2){
        return {{1}, {1,1}};
    }
    else{
        vector<vector<int>> finalTriangle = {{1}, {1,1}};
        vector<int> prevTempTriangle = {1,1};
        for(int i=3; i<=numRows; i++){
            vector<int> currTempTriangle;
            for(int j=0; j<i; j++){
                if(j==0 || j==i-1){
                    currTempTriangle.emplace_back(1);
                }else{
                    currTempTriangle.emplace_back(prevTempTriangle[j-1]+prevTempTriangle[j]);
                }
            }
            prevTempTriangle = currTempTriangle;
            finalTriangle.push_back(prevTempTriangle);
        }
        return finalTriangle;
    }
}

int main(){
    vector<vector<int>> triangle = generate(7);

    for(int i=0; i<triangle.size(); i++){
        for(int j=0; j<triangle[i].size(); j++){
            cout<<triangle[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}