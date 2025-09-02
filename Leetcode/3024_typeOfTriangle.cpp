#include <iostream>
#include <vector>
using namespace std;

string triangleType(vector<int>& nums) {
    int a = nums[0], b = nums[1], c = nums[2];
    
    if(a == b && b == c){
        return "equilateral";
    }
    
    if(a+b>c && a+c>b && b+c>a){
        if((a == b && b != c) || (a != b && b == c) || (a == c && a != b)){
            return "isosceles";
        }
        return "scalene";
    }
    return "none";
}

int main(){

    return 0;
}