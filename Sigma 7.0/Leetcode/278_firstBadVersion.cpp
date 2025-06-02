#include <iostream>
#include <algorithm>
using namespace std;

int firstBadVersion(int n) {
    int firstBad = n, start=1, end=n-1;
    while(start<=end){
        int mid = end + ((start-end)/2);
        //isBadVersion is a API call in that Leetcode workspace
        if(/*isBadVersion*/(mid)){              //True : 1
            firstBad = min(firstBad, mid);
            end = mid-1;
        }else{                              //False : 0
            start = mid + 1;
        }
    }
    return firstBad;
}

int main(){
    int n = 5;
    cout<<firstBadVersion(n);
    return 0;
}