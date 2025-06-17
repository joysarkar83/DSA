#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> copy(heights);
    sort(copy.begin(), copy.end());
    int count = 0;
    for (int i=0; i<heights.size(); i++){
        if(heights[i] != copy[i]){
            count++;
        }
    }
    return count;
}

int main(){

    return 0;
}