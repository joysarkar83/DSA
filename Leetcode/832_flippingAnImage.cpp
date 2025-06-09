#include <iostream>
#include <vector>
using namespace std;

//two pointer approach to reverse
//simultaneously reverse

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    if (image.size() == 0){
        return image;
    }
    
    for(int rowIdx=0; rowIdx<image.size(); rowIdx++){
        int colStIdx = 0, colEndIdx = image[0].size()-1;
        while(colStIdx < colEndIdx){
            swap(image[rowIdx][colStIdx], image[rowIdx][colEndIdx]);
            image[rowIdx][colStIdx] ^= 1;
            image[rowIdx][colEndIdx] ^= 1;
            colStIdx++; colEndIdx--;
        }
        if(colStIdx == colEndIdx){
            image[rowIdx][colStIdx] ^= 1;
        }
    }
    return image;
}

int main(){
    vector<vector <int>> img = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};

    flipAndInvertImage(img);

    for(int i=0; i<img.size(); i++){
        for(int j=0; j<img[0].size(); j++){
            cout<<img[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}