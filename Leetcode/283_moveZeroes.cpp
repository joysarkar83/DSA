#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vect){
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void moveZeroes(vector<int>& nums) {
    int placeAt = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[placeAt++]);
        }
    }
}

int main(){
    vector<int> vect = {0,1,0};

    moveZeroes(vect);

    printVector(vect);

    return 0;
}