#include <iostream>
#include <string>
using namespace std;

int countSymmetricIntegers(int low, int high) {
    int count = 0;
    for(low; low<=high; low++){
        string curr = to_string(low);
        if(curr.size() % 2 == 0){
            int half1 = 0, half2 = 0, n = curr.size()/2;
            for(int i=0; i<n; i++){
                half1 += curr[i];
                half2 += curr[(2*n)-1-i];
            }
            if(half1 == half2){
                count ++;
            }
        }
    }
    return count;
}

int main(){

    return 0;
}