#include <iostream>
using namespace std;

int mySqrt(int x) {
    if(x<2) return x;
    
    int st=1, end=x, ans=0;
    while(st <= end){
        int mid = st + (end - st)/2;
        if((long long)mid*mid <= x){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    cout<<mySqrt(3);

    return 0;
}