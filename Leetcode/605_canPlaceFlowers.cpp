#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int k) {
    if(k==0){
        return true;
    }
    int n = flowerbed.size();

    if(n==1 && k==1 && flowerbed[0]==0){
        return true;
    }
    if(n==1 && k==1 && flowerbed[0]==1){
        return false;
    }

    for(int i=0; i<n; i++){
        if((i==0) && (i+1<n) && (flowerbed[i]==0) && (flowerbed[i+1]==0)){
            flowerbed[i] = 1;
            k--;
        }
        if((i==n-1) && (i-1>=0) && (flowerbed[i]==0) && (flowerbed[i-1]==0)){
            flowerbed[i] = 1;
            k--;
        }
        if((i+1<n) && (i-1>=0) && (flowerbed[i-1]==0) && (flowerbed[i+1]==0) && (flowerbed[i]==0)){
            flowerbed[i] = 1;
            k--;
        }

        if(k==0){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> fbed = {1,0,1,0,1,0,1};

    cout<<canPlaceFlowers(fbed, 1);

    return 0;
}